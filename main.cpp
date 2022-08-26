#include <iostream>
using namespace std;

double rectangle(double x, double y){
    double A;
    A = x * y;
    return A;
}

double triangle(double x, double y){
    double A;
    A = (x * y)/2;
    return A;
}

double trapezoid(double x, double y, double z){
    double A;
    A = ((x + y) * z) / 2;
    return A;
}



int main(){
    double result;
    int areaType;
    // Start the program
    cout << "Please select the area you want to calculate" << endl;
    cout << "Enter 1 for rectangle" << endl;
    cout << "Enter 2 for triangle" << endl;
    cout << "Enter 3 for trapezoid" << endl;
    cout << "Your choice: ";
    cin >> areaType;
    
    // Case
    switch(areaType){
        case 1: // Rectangle
            double length;
            double width;

            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;

            result = rectangle(length, width);
            cout << "The area is: " << result << endl;
            break;
        
        case 2: // Triangle
            double height;

            cout << "Enter length: ";
            cin >> length;
            cout << "Enter height: ";
            cin >> height;

            result = triangle(length, height);
            cout << "The area is: " << result << endl;
            break;

         case 3: // trapezoid
            double bottom;
            double upper;

            cout << "Enter bottom: ";
            cin >> bottom;
            cout << "Enter upper: ";
            cin >> upper;
            cout << "Enter height: ";
            cin >> height;

            result = trapezoid(bottom, upper, height);
            cout << "The area is: " << result << endl;
            break;
    }

    system("pause");
}

