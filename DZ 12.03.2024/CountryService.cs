using RestSharp;
namespace DZ_12._03._2024;

public class CountryService
{
    private readonly RestClient client;

    public CountryService()
    {
        this.client = new RestClient("https://restcountries.com/v3.1");
    }
    
    public async Task<string> GetCountryInfoAsync(string country)
    {
        var request = new RestRequest("name/{country}", Method.Get);
        request.AddUrlSegment("country", country);

        var response = await client.ExecuteAsync(request);
        if (response.IsSuccessful)
        {
            return response.Content;
        }
        else
        {
            throw new Exception($"Failed to retrieve country info for {country}. Error: {response.ErrorMessage}");
        }
    }
}