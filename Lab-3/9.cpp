// Write a C++ program that:
// 1. Defines the Distance class with the specified attributes(feet(int), inch(int)) and
// constructor.
// 2. Creates two Distance objects (dist1 and dist2) with user-defined feet and inches.
// 3. Uses the add function to add dist1 and dist2, storing the result in a third Distance
// object and return it.
// 4. Displays the sum of the distances

#include<iostream>
using namespace std;
class Distance{
    int feet,inch;
    public:
    Distance(int f=0,int i=0){
        feet=f;
        inch=i;
    }
    Distance add(Distance dist1){
        Distance dist;
        dist.feet=feet+dist1.feet;
        dist.inch=inch+dist1.inch;
        if(dist.inch>=12){
            dist.feet=dist.feet+dist.inch/12;
            dist.inch=dist.inch%12;
        }
        return dist;
    }
    void display(){
        cout<<feet<<"feet "<<inch<<" inch"<<endl;
    }

};
int main(){
    Distance dist1(3,6);
    dist1.display();
    Distance dist2(4,7);
    dist2.display();
    Distance dist3=dist1.add(dist2);
    dist3.display();




return 0;
}