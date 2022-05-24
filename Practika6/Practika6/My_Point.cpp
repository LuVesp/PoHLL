#include "My_Point.h"
using namespace System;
My_Point::My_Point(void) {
	x = y = 1;
}
My_Point::My_Point(int xx, int yy) {
	x = xx;
	y = yy;
}
String ^ My_Point::ToString() {
	return String::Format("({0},{1})", x, y);
}
//void My_Point::Set(int xx, int yy) {
//	x = xx;
//	y = yy;
//}

