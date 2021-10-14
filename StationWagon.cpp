

#include "Car.h"
#include "Wagon.h"

class StationWagon : public Car, public Wagon {
    public:
        StationWagon(int power, int seat, int load):Wagon(power, load), Car(power, seat)
        {
            cout << "stationWagon constructor ..." << endl;
        }
        void ShowSW()
        {
            cout << "StationWagon: " << endl;
            Car::show();
            Wagon::show();
        }
};

int main(int argc, char * argv[])
{
    StationWagon sw(105, 3, 8);
    sw.show();

    return 0;
}