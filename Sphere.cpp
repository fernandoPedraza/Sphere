//
// Created by Pedraza Laptop on 5/17/2018.
//

#include "Sphere.h"

Sphere::Sphere(int x, int y, int z, int radius) {
    this->x=x;
    this->y=y;
    this->z=z;
    this->radius=radius;

}
int Sphere::getX(){
    return this->x;
}
int Sphere::getY() {
    return this->y;
}
int Sphere::getZ(){
    return this->z;
}
int Sphere::getRadius(){
    return this->radius;
}
