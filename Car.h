

#include <iostream>
using namespace std;
class Car {
    protected:
        int power;
        int seat;
    public:
        Car(int power, int seat);
        ~Car();
        void show();
};

Car::Car(int power, int seat)
{
    this->power = power;
    this->seat = seat;
}
Car::~Car()
{
    cout << "car distructor" << endl;
}
void Car::show()
{
    cout << "car power: " << power << ", seat: " << seat << endl;
}