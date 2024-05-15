using RestSharp;
namespace DZ_12._03._2024;

public class CurrencyService
{
    private readonly RestClient client;
    private string _apiKey;
    public CurrencyService(string apiKey)
    {
        _apiKey = apiKey;
        client = new RestClient("https://api.exchangeratesapi.io");
    }

    public async Task<string> ConvertCurrencyAsync(decimal amount, string fromCurrency, string toCurrency, string date = null)
    {
        var request = new RestRequest("convert", Method.Get);
        request.AddHeader("apikey", _apiKey);
        request.AddQueryParameter("amount", amount);
        request.AddQueryParameter("from", fromCurrency);
        request.AddQueryParameter("to", toCurrency);
        
        if (!string.IsNullOrEmpty(date))
        {
            request.AddParameter("date", date);
        }

        var response = await client.ExecuteAsync(request);
        if (response.IsSuccessful)
        {
            return response.Content;
        }
        else
        {
            throw new Exception($"Failed to convert currency. Error: {response.ErrorMessage}");
        }
    }
}
