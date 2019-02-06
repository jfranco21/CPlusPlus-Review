#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{
private:
    double radius;
    static const double PI;
    static int count;
public:
    Circle();
    Circle(double radius);
    ~Circle();
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    int getCount() const;
    void changeRadius(double newRadius);

};
#endif
