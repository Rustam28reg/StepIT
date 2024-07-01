import React from 'react'
import '../styles/Movie.css'

const movies = [
    {
        title: "Inception",
        description: "A thief who steals corporate secrets through the use of dream-sharing technology is given the inverse task of planting an idea into the mind of a C.E.O.",
        poster: "/Inception.jpg",
        showtimes: ["10:00 AM", "1:00 PM", "4:00 PM", "7:00 PM"]
    },
    {
        title: "The Dark Knight",
        description: "When the menace known as the Joker emerges from his mysterious past, he wreaks havoc and chaos on the people of Gotham.",
        poster: "/TheDarkKnight.jpg",
        showtimes: ["11:00 AM", "2:00 PM", "5:00 PM", "8:00 PM"]
    },
    {
        title: "Interstellar",
        description: "A team of explorers travel through a wormhole in space in an attempt to ensure humanity's survival.",
        poster: "/Interstellar.jpg",
        showtimes: ["12:00 PM", "3:00 PM", "6:00 PM", "9:00 PM"]
    }
];

export default function Movie() {
    return (
        <div>
            <h1>Cinema schedule</h1>
            <div className="movies">
                {movies.map((movie, index) => (
                    <div key={index} className="movie">
                        <img src={movie.poster} alt={`${movie.title} poster`} />
                        <h2>{movie.title}</h2>
                        <p>{movie.description}</p>
                        <div className="showtimes">
                            <h3>Sessions:</h3>
                            <ul>
                                {movie.showtimes.map((time, idx) => (
                                    <li key={idx}>{time}</li>
                                ))}
                            </ul>
                        </div>
                    </div>
                ))}
            </div>
        </div>
    )
}
