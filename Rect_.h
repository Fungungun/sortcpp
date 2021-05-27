#ifndef RECT_H
#define RECT_H
#include<algorithm>
#include<iostream>

using namespace std;

class Rect_{
    public:
    
        float x_left;
        float x_right;
        float y_top;
        float y_bottom;

        Rect_(float x1, float x2, float y1, float y2){
            x_left = x1;
            x_right = x2;
            y_top = y1;
            y_bottom = y2;
        }
        ~Rect_(){}

        Rect_ operator&( Rect_ &r){
            float new_x_left = std::max(x_left, r.x_left);
            float new_x_right = std::min(x_right, r.x_right);
            float new_y_top = std::max(y_top, r.y_top);
            float new_y_bottom = std::min(y_bottom, r.y_bottom);

            return Rect_(new_x_left, new_x_right, new_y_top, new_y_bottom);
        } 

        float area();
};

#endif