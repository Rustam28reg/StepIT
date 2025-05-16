namespace Auth.Domain.Models;

public class Basket
{
    public Guid Id { get; set; }
    public Guid UserId { get; set; }
    public User User { get; set; }
    public List<Product>? Products { get; set; }
    public decimal? TotalPrice { get; set; }
}