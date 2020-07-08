
//Task one
class testing{
private:
    int a, b;
friend void display(testing);
};


//Task two
class two;
class one{
private:
    int a;
public:
    void setter();
friend void check(one, two);
};

class two{
private:
    int b;
public:
    void setter();
friend void check(one, two);
};



//Task three
class containerClass{
private:
    int a,b;
public:
    void getter();
    void putter();
friend class containedClass;
};

class containedClass{
public:
    void setter(containerClass);
};


//Task four
class SecondNum;
class FirstNum{
private:
    int a;
public:
    void setter();
friend void sum(FirstNum, SecondNum);
};

class SecondNum{
private:
    int b;
public:
    void setter();
friend void sum(FirstNum, SecondNum);
};




//Task five
class DB;
class DM{
private:
    float distanceInMeters, distanceInCentimeters, resultInMeters, resultInCentimeters;
public:
    void input();
    bool isMeters, isCentimeters;
    DM();
    void display();
friend void calculate(DM,DB);
};

class DB{
private:
    float distanceInFeet, distanceInInches, resultInFeet, resultInInches;
public:
    bool isFeet, isInches;
    void input();
    DB();
    void display();
friend void calculate(DM,DB);
};


//Task six
class contained;
class container{
private:
    int a;
public:
    container();
    friend class contained;
};

class contained{
    container obj;
    public:
        void display();
};































