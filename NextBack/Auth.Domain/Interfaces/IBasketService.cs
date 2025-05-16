using Auth.Domain.Models;
using Auth.Shared.DTOs;

namespace Auth.Domain.Interfaces;

public interface IBasketService
{
    public Task<IEnumerable<BasketDTO>> GetBasketAsync(Guid id);
    public Task<Basket> AddProductAsync(ProductDTO product);
    public Task<Product> InitialBasketAsync(BasketDTO bucket);
}