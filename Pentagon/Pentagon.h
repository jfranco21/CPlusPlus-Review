#ifndef PENTAGON_H
#define PENTAGON_H
class Pentagon{
private:
    double a;
    static int count;
public:
    Pentagon();
    ~Pentagon();
    Pentagon(double a);
    //inline function for getting the pentagon's length
    //Note:functions implemented in header are automatically inline functions
    double getLength() const{
        return this->a;
    }
    void changeLength(double newLength);
    double getArea();
    //inline function to get the # of pentagons created
    int getCount(){
        return count;
    };
};
#endif
