#include<iostream>

using namespace std;

class GPSCoordinates {
private:
    double latitude, longitude;
public:
    GPSCoordinates(): latitude(0), longitude(0) {};
    GPSCoordinates(double lt, double ln): latitude(lt), longitude(ln) {};

    void setLatitude(double lt){latitude = lt;}
    void setLongitude(double lt){longitude = lt;}

    double getLatitude() const{return latitude;}
    double getLongitude() const{return longitude;}

    void display() const {
        cout << "(" << getLatitude() << ", " << getLongitude() << ")" << endl;
    }
};

int main() {

    GPSCoordinates c1;
    c1.display();

    GPSCoordinates c2(33.6844, 71.0975);
    c2.display();

    c1.setLatitude(32.749);
    c1.setLongitude(44.910);
    c1.display();


    return 0;
}