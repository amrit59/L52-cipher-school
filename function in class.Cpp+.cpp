 #include <iostream>
#include <string>  
using namespace std;

class student
{
public:
    string name;
    int mid;
    float ends;
    bool pre_abs;

    void display_calculate_marks()
    {
        float total_marks;
        total_marks = mid*0.5 + ends*0.75;
        cout << "The marks of " << name << " is " << total_marks << endl;
    }
};

class vehicle
{
public:
    string car_name;
    string tyre_name;
    int number_of_seats;
    int number_of_tyres;  
};

int main() //  
{
    student a, b, c; 
     a.name = "Amrit";
    a.mid = 50;
    a.ends = 99.5;
    a.pre_abs = 1;

    vehicle b_vehicle;
    b_vehicle.car_name = "Verna";
    b_vehicle.number_of_seats = 2;  
    b_vehicle.number_of_tyres = 4;  
    b_vehicle.tyre_name = "MRF";

    a.display_calculate_marks();

    return 0; 
}

