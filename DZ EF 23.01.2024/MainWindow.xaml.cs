using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Configuration;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace ImdbMovieSearch;

public partial class MainWindow : Window
{
    private readonly ImdbApiHelper imdbApiHelper;

    public MainWindow()
    {
        InitializeComponent();
        string apiKey = "694d6009d68c4a93bf4537a4132518bf"; // Замените на свой ключ TMDb
        imdbApiHelper = new ImdbApiHelper(apiKey);

        lvMovies.MouseDoubleClick += OnListViewDoubleClick;
    }

    private async void OnListViewDoubleClick(object sender, MouseButtonEventArgs e)
    {
        if (lvMovies.SelectedItem != null)
        {

            var configBuilder = new ConfigurationBuilder();

            configBuilder.AddJsonFile("appsettings.json");

            var config = configBuilder.Build();

            var connectionString = config.GetConnectionString("DefaultConnection");

            var optionsBuilder = new DbContextOptionsBuilder<TmdbContext>();

            optionsBuilder.UseSqlServer(connectionString);

            var ops = optionsBuilder.Options;

            TmdbContext dbContext = new TmdbContext(ops);
            Movie selectedMovie = (Movie)lvMovies.SelectedItem;
            string imdbId = await imdbApiHelper.GetImdbIdFromTMDbApi(selectedMovie.Title);

            if (!string.IsNullOrWhiteSpace(imdbId))
            {
                using (var context = new TmdbContext())
                {
                    var newMovie = new Movie
                    {
                        Title = selectedMovie.Title,
                        Year = selectedMovie.Year,
                        MovieType = selectedMovie.MovieType,
                        PosterUrl = selectedMovie.PosterUrl
                    };

                    context.Movies.Add(newMovie);
                    context.SaveChanges();
                }
            }
            else
            {
                MessageBox.Show("No TMDb link available for the selected movie.");
            }
        }

    }
    private async void OnSearchClick(object sender, RoutedEventArgs e)
    {
        string query = txtSearch.Text;
        if (string.IsNullOrWhiteSpace(query))
        {
            MessageBox.Show("Please enter a movie title.");
            return;
        }

        try
        {
            List<Movie> searchResult = await imdbApiHelper.SearchMoviesAsync(query);
            if (searchResult != null)
            {
                lvMovies.ItemsSource = searchResult;
            }
            else
            {
                MessageBox.Show("No movies found for the given query.");
            }
        }
        catch (Exception ex)
        {
            MessageBox.Show($"An error occurred: {ex.Message}", "Error", MessageBoxButton.OK, MessageBoxImage.Error);
        }
    }
}
