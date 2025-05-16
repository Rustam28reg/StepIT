using Auth.Domain.Interfaces;
using Auth.Domain.Models;
using Auth.Persistence.Contexts;
using Auth.Shared.DTOs;
using Microsoft.EntityFrameworkCore;

namespace Auth.Application.Services;

public class BasketService : IBasketService
{
    
    private readonly AuthContext _context;

    public BasketService(AuthContext context)
    {
        _context = context;
    }

    public async Task<IEnumerable<BasketDTO>> GetBasketAsync(Guid userId)
    {
        var baskets = await _context.Baskets
            .Where(b => b.UserId == userId)
            .Include(b => b.Products) 
            .ToListAsync();
        
        
        var basketDtos = baskets.Select(b => new BasketDTO
        {
            Id = b.Id,
            UserId = b.UserId,
            TotalPrice = b.TotalPrice,
            Products = b.Products!.Select(p => new ProductDTO
            {
                Id = p.Id,
                Name = p.Name,
                Price = p.Price
            }).ToList()
        });

        return basketDtos;
    }

    public async Task<Basket> AddProductAsync(ProductDTO productDto)
    {
        var basket = await _context.Baskets
            .Include(b => b.Products)
            .FirstOrDefaultAsync(b => b.Id == productDto.BasketId);

        if (basket == null)
        {
            basket = new Basket
            {
                Id = productDto.BasketId,
                UserId = productDto.UserId,
                Products = new List<Product>(),
                TotalPrice = 0
            };
            _context.Baskets.Add(basket);
        }

        var product = new Product
        {
            Name = productDto.Name,
            Price = productDto.Price
        };

        basket.Products!.Add(product);
        basket.TotalPrice += product.Price;

        await _context.SaveChangesAsync();
        return basket;
    }

    public async Task<Product> InitialBasketAsync(BasketDTO basketDto)
    {
        var basket = new Basket
        {
            UserId = basketDto.UserId,
            TotalPrice = basketDto.TotalPrice,
            Products = basketDto.Products?.Select(p => new Product
            {
                Name = p.Name,
                Price = p.Price
            }).ToList()
        };

        _context.Baskets.Add(basket);
        await _context.SaveChangesAsync();
        
        return basket.Products?.FirstOrDefault()!;
    }
}