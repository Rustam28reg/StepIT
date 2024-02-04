namespace ImdbMovieSearch;
    public class Movie
    {
        public string Id { get; set; } = Guid.NewGuid().ToString();
        public string Title { get; set; }
        public string Year { get; set; }
        public string MovieType { get; set; }
        public string PosterUrl { get; set; }
    }


