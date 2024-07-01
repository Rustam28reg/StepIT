import React from 'react'
import '../styles/Cities.css'

const cities = [
    {
      country: "Russia",
      city: "Moscow",
      description: "Moscow is the capital and largest city of Russia.",
      coatOfArms: "/Moscow.png",
      population: "12,678,079",
      area: "2,511 km²"
    },
    {
      country: "Russia",
      city: "Saint Petersburg",
      description: "Saint Petersburg is Russia's second-largest city after Moscow.",
      coatOfArms: "Piter.png",
      population: "5,383,890",
      area: "1,439 km²"
    },
    {
      country: "Russia",
      city: "Novosibirsk",
      description: "Novosibirsk is the third-most populous city in Russia.",
      coatOfArms: "Novosibirsk.png",
      population: "1,620,162",
      area: "502.7 km²"
    }
  ];

export default function Cities() {
  return (
    <div>
      <h1>Information about Russian cities</h1>
      <div className="cities">
        {cities.map((city, index) => (
          <div key={index} className="city">
            <h2>{city.city}, {city.country}</h2>
            <img src={city.coatOfArms} alt={`${city.city} coat of arms`} />
            <p><strong>Description:</strong> {city.description}</p>
            <p><strong>Population:</strong> {city.population}</p>
            <p><strong>Square:</strong> {city.area}</p>
          </div>
        ))}
      </div>
    </div>
  )
}
