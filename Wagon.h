

#include <iostream>
using namespace std;
class Wagon {
    private:
        int power;
        int load;
    public:
        Wagon(int power, int load);
        ~Wagon();
        void show();
};

Wagon::Wagon(int power, int load)
{
    this->power = power;
    this->load = load;
}
Wagon::~Wagon()
{
    cout << "wagon destructor" << endl;
}
void Wagon::show()
{
    cout << "Wagon power: " << power << ", seat: " << load << endl;
}