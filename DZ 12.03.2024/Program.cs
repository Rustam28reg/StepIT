using DZ_12._03._2024;

WeatherService weatherService = new("7be939dd6a080d5a88f1036626e1f735");
var res1 = await weatherService.GetWeatherAsync("baku");

CountryService countryService = new();
var res2 = await countryService.GetCountryInfoAsync("azerbaijan");

var currencyService = new CurrencyService("Pt0xX3i6l5nuUhMlITcwMkLVgLq1zNcV");
decimal amount = 100;
string fromCurrency = "USD";
string toCurrency = "EUR";
string conversionResult = await currencyService.ConvertCurrencyAsync(amount, fromCurrency, toCurrency);
    
Console.WriteLine("res1");
Console.WriteLine("res2");
Console.WriteLine(conversionResult);