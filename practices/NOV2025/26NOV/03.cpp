#include<iostream>
using namespace std;
// abstract class
class Shape {
protected:
    string color;
    int borderThickness;
    bool isfilled;
    int x, y;   // position

public:
    Shape(string c = "black", int b = 1, bool f = false, int x = 0, int y = 0)
        : color(c), borderThickness(b), isfilled(f), x(x), y(y) {}

    // Pure virtual functions (Behaviors that must be implemented by derived classes)
    virtual void draw() = 0;
    virtual float calculateArea() = 0;
    virtual float calculatePerimeter() = 0;

    // Common behaviors
    void moveTo(int newX, int newY) {
        x = newX;
        y = newY;
        cout << "Shape moved to (" << x << ", " << y << ")" << endl;
    }

    void setColor(string c) {
        color = c;
        cout << "Color changed to " << color << endl;
    }

    void setBorderThickness(int thickness) {
        borderThickness = thickness;
        cout << "Border thickness set to " << borderThickness << endl;
    }

    void displayInfo() {
        cout << "Color: " << color << endl;
        cout << "Border Thickness: " << borderThickness << endl;
        cout << "Filled: " << (isfilled ? "Yes" : "No") << endl;
        cout << "Position: (" << x << ", " << y << ")" << endl;
    }
};
class Square : public Shape {
    public :
        void draw(){
            cout << " Square drawn!";
        }
};
class Circle : public Shape{
    public :
        void draw(){
            cout<<" Circle draawn!";
        }
};
int main(){
    
    return 0;
}