namespace Auth.Shared.DTOs;

public class ProductDTO{
    public Guid Id { get; set; } 
    public Guid BasketId { get; set; }
    public Guid UserId { get; set; }
    public string Name { get; set; }
    public decimal Price { get; set; }
    public byte[] Image { get; set; }
};