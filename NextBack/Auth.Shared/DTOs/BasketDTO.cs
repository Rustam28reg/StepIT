namespace Auth.Shared.DTOs;

public class BasketDTO
{
    public Guid Id { get; set; }
    public Guid UserId { get; set; }
    public List<Guid>? ProductId { get; set; }
    public List<ProductDTO>? Products { get; set; }
    public int? Quantity { get; set; }
    public decimal? TotalPrice { get; set; }
}