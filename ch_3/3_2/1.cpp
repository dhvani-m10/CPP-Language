#include "hotel.cpp"

int main()
{

    int n = numberOfHotel();
    Hotel h1[n];
    for (int i = 0; i < n; i++)
    {
        h1[i].setHotelDetails();
    }

    for (int i = 0; i < n; i++)
    {
        h1[i].getHotelDetails();
    }
}