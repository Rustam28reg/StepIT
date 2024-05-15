using RestSharp;
namespace DZ_12._03._2024;

public class WeatherService
{
    private readonly string apiKey;
    private readonly RestClient client;

    public WeatherService(string apiKey)
    {
        this.apiKey = apiKey;
        this.client = new RestClient("https://api.openweathermap.org/data/2.5/");
    }
    public async Task<string> GetWeatherAsync(string city)
    {
        var request = new RestRequest("weather", Method.Get);
        request.AddQueryParameter("q", city);
        request.AddQueryParameter("appid", apiKey);
        request.AddQueryParameter("units", "metric");
        

        var response = await client.ExecuteAsync(request);
        if (response.IsSuccessful)
        {
            return response.Content;
        }
        else
        {
            throw new Exception($"Failed to retrieve weather data for {city}. Error: {response.ErrorMessage}");
        }
    }
}