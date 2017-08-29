#include "common.h"

struct Point {
    Type x, y;
    Point() : x(0), y(0) {

    }

    Point(Type _x, Type _y) : x(_x), y(_y) {

    }

    Point operator + (const Point &p) const {
        return Point(x + p.x,  y + p.y);
    }

    Point operator - (const Point &p) const {
        return Point(x - p.x, y - p.y);
    }

    void print() {
        cout << x << " " << y << endl;
    }
};

struct Segment {
    Type x1, x2, y1, y2;
    Segment() : x1(0), x2(0), y1(0), y2(0) {

    }
    
    Segment(Type _x1, Type _y1, Type _x2, Type _y2) : x1(_x1), y1(_y1), x2(_x2), y2(_y2) {

    }

    Segment(Point p1, Point p2) : x1(p1.x), y1(p1.y), x2(p2.x), y2(p2.y) {

    }

    void print() {
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    }
};

struct Circle {
    Type r;
    Point c;
    Circle() {}
    Circle(Type _r, Point _c) : r(_r), c(_c) {

    }

    void print() {
        cout << r << " ";
        c.print();
    }
};

struct Line {

};
