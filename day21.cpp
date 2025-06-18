/* Day 21: Movie Booking System Design (OOPs - Composition)

Design classes: Movie, Show, Booking. Create and book a show.

*Output Example:*
Booked Show: Avengers at 7PM                    */

#include<iostream>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

// Class for Movie
class Movie {
public:
    string title;

    Movie(string title) {
        this->title = title;
    }
};

// Class for Show (Has a Movie)
class Show {
public:
    Movie movie;      // Composition: Show "has a" Movie
    string timeSlot;

    Show(Movie m, string timeSlot) : movie(m) {
        this->timeSlot = timeSlot;
    }
};

// Class for Booking (Has a Show)
class Booking {
public:
    Show show;    // Composition: Booking "has a" Show

    Booking(Show s) : show(s) {}

    void printBookingDetails() {
        cout << "Booked Show: " << show.movie.title << " at " << show.timeSlot << endl;
    }
};

int main() {
    // Step 1: Create a movie
    Movie movie("Avengers");

    // Step 2: Create a show for that movie
    Show show(movie, "7PM");

    // Step 3: Book that show
    Booking booking(show);

    // Output the booking details
    booking.printBookingDetails();

    return 0;
}
