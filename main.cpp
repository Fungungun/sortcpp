#include<iostream>
#include "Rect_.h"

using namespace std;

float calculateIOU(Rect_ r1, Rect_ r2){
    float in = (r1 & r2).area();
    float un = r1.area() + r2.area() - in;
    std::cout<<"Area of intersection is "<<in<<endl;
    std::cout<<"Area of union is "<<un<<endl;
    return in/un;
}

int main(){

    Rect_ r1 = Rect_(10, 20, 10, 20);
    std::cout<<"Area of r1 is "<<r1.area()<<endl;

    Rect_ r2 = Rect_(15, 25, 15, 25);
    std::cout<<"Area is r2 is "<<r2.area()<<endl;
    
    Rect_ in = r1 & r2;
    std::cout<<"Area of intersection is "<<in.area()<<endl;

    std::cout<<"IOU of r1 and r2 is "<<calculateIOU(r1, r2)<<endl;

    return 0;
}


