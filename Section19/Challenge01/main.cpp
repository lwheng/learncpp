// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    long double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };
    
    const int country_width {20};
    const int city_width {20};
    const int population_width {15};
    const int cost_width {15};
    const int total_width {country_width + city_width + population_width + cost_width};

    // Unformatted display so you can see how to access the vector elements
    int title_length = tours.title.length();
    std::cout << std::setw((total_width  - title_length )/ 2) << "" << tours.title << std::endl << std::endl;
    
    // Print column names
    std::cout << std::setw(country_width)    << std::left  << "Country"
              << std::setw(city_width)       << std::left  << "City"
              << std::setw(population_width) << std::right << "Population"
              << std::setw(cost_width)       << std::right << "Cost ($)"
              << std::endl;
              
    // Print a line across
    std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;
    
    std::cout << std::setfill(' ');
    std::cout << std::setprecision(2) << std::fixed;
    
    for (auto country : tours.countries) {   // loop through the countries
        for (size_t i = 0; i < country.cities.size(); i++) {
            std::cout << std::setw(country_width)    << std::left  << ((i==0) ? country.name : "")
                      << std::setw(city_width)       << std::left  << country.cities.at(i).name
                      << std::setw(population_width) << std::right << country.cities.at(i).population
                      << std::setw(cost_width)       << std::right << country.cities.at(i).cost
                      << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}