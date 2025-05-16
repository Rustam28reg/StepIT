using Asp.Versioning;
using Auth.Domain.Interfaces;
using Auth.Shared.DTOs;
using Microsoft.AspNetCore.Mvc;

namespace Auth.API.Controllers;

[ApiVersion("1.0")]
[ApiController]
[Route("api/v{version:apiVersion}/[controller]")]
public class BasketController : ControllerBase
{
    private readonly IBasketService _basketService;

    public BasketController(IBasketService basketService)
    {
        _basketService = basketService;
    }

    [HttpGet("{userId:guid}")]
    public async Task<IActionResult> GetBasket(Guid userId)
    {
        var basket = await _basketService.GetBasketAsync(userId);
        return Ok(basket);
    }

    [HttpPost("add-product")]
    public async Task<IActionResult> AddProduct(ProductDTO productDto)
    {
        var result = await _basketService.AddProductAsync(productDto);
        return Ok(result);
    }

    [HttpPost("init")]
    public async Task<IActionResult> InitialBasket(BasketDTO basketDto)
    {
        var product = await _basketService.InitialBasketAsync(basketDto);
        return Ok(product);
    }
}