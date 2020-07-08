#include <iostream>
#include "header.h"

using namespace std;


//Task one
void display(testing obj){
    obj.a = 10;
    obj.b = 20;

    cout<<"Value of a : "<<obj.a<<"\nValue of b : "<<obj.b<<endl;
}


//task two
void one::setter(){
    cout<<"Enter value: ";
    cin>>a;
}

void two::setter(){
    cout<<"Enter value: ";
    cin>>b;
}

void check(one obj1, two obj2){
    if(obj1.a > obj2.b){
        cout<<"class one object is greater"<<endl;
    }
    if(obj1.a < obj2.b){
        cout<<"class two object is greater"<<endl;
    }
    if(obj1.a == obj2.b){
        cout<<"class one and class two objects are equall"<<endl;
    }

}



//Task three
void containerClass::getter(){
    cout<<"a = "<<a<<"\nb = "<<b<<endl;
}
void containerClass::putter(){
    cout<<"Enter values for a and b: ";
    cin>>a>>b;
}
void containedClass::setter(containerClass obj){
    cout<<"This is from containedClass\na = "<<obj.a<<"\nb = "<<obj.b<<endl;
}



//Task four
void FirstNum::setter(){
    cout<<"Enter value for first number: ";
    cin>>a;
}

void SecondNum::setter(){
    cout<<"Enter value for second number: ";
    cin>>b;
}

void sum(FirstNum obj1, SecondNum obj2){
    cout<<"The sum of private variables of both the objects is = "<<obj1.a + obj2.b<<endl;
}



//Task five
DM::DM(){
    distanceInMeters = 0.0;
    distanceInCentimeters = 0.0;
    resultInCentimeters = 0.0;
    resultInMeters = 0.0;
    isMeters = false;
    isCentimeters = false;
}

DB::DB(){
    distanceInFeet = 0.0;
    distanceInInches = 0.0;
    resultInFeet =  0.0;
    resultInInches = 0.0;
    isFeet = false;
    isInches = false;
}

void DM::input(){
    cout<<"Press 0 to enter data in meter and 1 to enter data in centimeters\n";
    int a;
    cin>>a;
    if(a){
        cout<<"\nEnter the distance in centimeters: ";
        cin>>distanceInCentimeters;
        isCentimeters = true;
    }else{
        cout<<"\nEnter the distance in meters: ";
        cin>>distanceInMeters;
        isMeters = true;
    }
}

void DB::input(){
    cout<<"Press 0 to enter data in feet and 1 to enter data in inches\n";
    int a;
    cin>>a;
    if(a){
        cout<<"\nEnter the distance in inches: ";
        cin>>distanceInInches;
        isInches = true;
    }else{
        cout<<"\nEnter the distance in feet: ";
        cin>>distanceInFeet;
        isFeet = true;
    }
}


void calculate(DM obj, DB obj2){
    cout<<"1. Meters and Centimeters\n2. Feet and Inches\n";
    cout<<"Choose the unit for result: ";
    int a;
    cin>>a;

    if(a == 1){
        if(obj.isMeters){
            obj.resultInMeters += obj.distanceInMeters;
            obj.resultInCentimeters += obj.distanceInMeters * 100;
        }
        if(obj.isCentimeters){
            obj.resultInMeters += obj.distanceInCentimeters / 100;
            obj.resultInCentimeters += obj.distanceInCentimeters;
        }

        if(obj2.isFeet){
            obj.resultInMeters += obj2.distanceInFeet / 3.28 ;
            obj.resultInCentimeters += obj2.distanceInFeet * 30.48;
        }

        if(obj2.isInches){
            obj.resultInMeters += obj2.distanceInInches / 39.3;
            obj.resultInCentimeters += obj2.distanceInInches * 2.54;
        }

        obj.display();
        return;

    }

    if(a == 2){
        if(obj.isMeters){
            obj2.resultInFeet += obj.distanceInMeters * 3.2;
            obj2.resultInInches += obj.distanceInMeters * 39.3;
        }
        if(obj.isCentimeters){
            obj2.resultInFeet += obj.distanceInCentimeters / 30.4;
            obj2.resultInInches += obj.distanceInCentimeters * 2.54;
        }

        if(obj2.isFeet){
            obj2.resultInFeet += obj2.distanceInFeet;
            obj2.resultInInches += obj2.distanceInFeet * 12;
        }

        if(obj2.isInches){
            obj2.resultInFeet += obj2.distanceInInches / 12;
            obj2.resultInInches += obj2.distanceInInches;
        }

        obj2.display();

    }

}

void DM::display(){
    cout<<"\nThe sum of distances in Meters = "<<resultInMeters<<endl;
    cout<<"\nThe sum of distances in Centimeters = "<<resultInCentimeters<<endl;
}

void DB::display(){
    cout<<"\nThe sum of distances in Feet = "<<resultInFeet<<endl;
    cout<<"\nThe sum of distances in Inches = "<<resultInInches<<endl;
}





//Task six

container::container(){
    cout<<"constructor of container class\nsetting private data value = 20\n";
    a = 20;
}

void contained::display(){
    cout<<"I am display function of contained class\n";
    cout<<"The value of private data of container class is = "<<obj.a<<endl;
}





















