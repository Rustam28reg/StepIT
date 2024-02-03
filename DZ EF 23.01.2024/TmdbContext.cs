using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Configuration;
using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ImdbMovieSearch;

internal class TmdbContext : DbContext
{
    public DbSet<Movie> Movies {  get; set; }

    public TmdbContext() { }

    public TmdbContext(DbContextOptions<TmdbContext> options) : base(options) { }

    protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
    {
        optionsBuilder.UseSqlServer("Data Source=RUSTAM;Initial Catalog=TMDB;Integrated Security=True;Trust Server Certificate=True");
    }

    protected override void OnModelCreating(ModelBuilder modelBuilder)
    {
        modelBuilder.Entity<Movie>(entity =>
        {
            entity.HasKey(e => e.Id);
            entity.Property(e => e.Title).IsRequired().HasMaxLength(100);
            entity.Property(e => e.Year).IsRequired().HasMaxLength(100);
            entity.Property(e => e.MovieType).IsRequired().HasMaxLength(100);
            entity.Property(e => e.PosterUrl).IsRequired();

        });
    }
}
