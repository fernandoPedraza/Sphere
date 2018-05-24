#include <iostream>
#include "Sphere.h"
using namespace std;


int main() {

    Sphere* spheres[5];
    int size;
    cout<<"how many spheres";
    cin>>size;//scanner

    for(int i= 0 ; i<size ; i++)
        spheres[i] = new Sphere(-3 + i, -3 + i, -3 + i, 1);


        //Sphere* s = new Sphere (0,0,0,1);
        // Sphere s = Sphere (0,0,0,1); points to object as suppose to just a location on memory

    for(int i= 0 ; i<size ; i++) {
        cout << spheres[i]->getX() << "\n";
        cout << spheres[i]->getY() << "\n";
        cout << spheres[i]->getZ() << "\n";
        cout << spheres[i]->getRadius() << "\n";
        cout << endl;
    }



    return 0;
}