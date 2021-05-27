#include "Rect_.h"

float Rect_::area(){
    return (x_right - x_left) * (y_bottom - y_top);
}