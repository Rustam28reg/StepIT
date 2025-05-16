using Auth.Domain.Models;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace Auth.Infrastructure.Configurations.DBConfigurations;

public class BasketConfiguration : IEntityTypeConfiguration<Basket>
{
    public void Configure(EntityTypeBuilder<Basket> builder)
    {
        builder.HasKey(b => b.Id);
        
        builder.HasOne(b => b.User)  
            .WithMany()         
            .HasForeignKey(b => b.UserId) 
            .OnDelete(DeleteBehavior.Restrict);  
        
        builder.HasMany(b => b.Products)  
            .WithOne()               
            .OnDelete(DeleteBehavior.Cascade);  
        
        builder.Property(b => b.UserId)
            .IsRequired();  

        builder.Property(b => b.TotalPrice)
            .IsRequired(); 
    }
    
}