#include <bits/stdc++.h>
using namespace std;

class ParkingLot {
    private:
     bool occupied;

    public:

        bool isAvailable(){
            if(occupied == true){
                return true;
            }
            return false;
        }

        void parkVehicle(){
            if(!occupied){
                occupied = true;
            }
        }
    
     void removeVehicle(){
        occuped = false;
     }
}
int main(){
    cout<<"Hello World!!";

    return 0;
}