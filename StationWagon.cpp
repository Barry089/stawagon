

#include "Car.h"
#include "Wagon.h"

class StationWagon : public Car, public Wagon {
    private:
        int power;
    public:
        StationWagon(int power, int seat, int load):Wagon(power, load), Car(power, seat)
        {
            cout << "stationWagon constructor ..." << endl;
            this->power = power;
        }
        // 解决二义性方法，
        // 方法一
        void ShowSW()
        {
            cout << "StationWagon: " << endl;
            Car::show();
            Wagon::show();
        }
        //方法二
        void show()
        {
            cout << "StationWagon power: " << power << ", seat: " << seat << ", load: " << load << endl;
        }
};

int main(int argc, char * argv[])
{
    StationWagon sw(105, 3, 8);

    sw.ShowSW();
    
    sw.show();

    return 0;
}