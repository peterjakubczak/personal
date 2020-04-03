#include <iostream>
#include "Planet.h"
using namespace std;

int main(){
    string N = "";
    double R = 0.0;
    cout << "Enter planet name: " << endl;
    cin >> N;
    Planet x;
    cout << "Enter planet radius: " << endl;
    cin >> R;
    x.setName(N); //takes the N string and puts it in private variable of class Planet name
    x.setRadius(R);
    cout << "Volume of " << x.getName() << " is " << x.getVolume() << " square kilometers " << endl;
}