#include <iostream>
using namespace std;

void pattern1(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(){
    for(int i=0;i<6;i++){
        for(int j=5-i;j>0;j--){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern4(){
    for(int i=0;i<5;i++){
        int spaces = 5-i;
        while(spaces--){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern5(){
    for(int i=4;i>=0;i--){
        int spaces = 5-i;
        while(spaces--){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(){
    for(int i=0;i<=10;i++){
        if(i<=5){
            for(int j=0;j<i+1;j++){
                cout << "*";
            }
            cout << endl;
        }else{
            for(int j=10-i+1;j>0;j--){
                cout << "*";
            }
            cout << endl;
        }
    }
}

void pattern7(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0 || i==3 || j==0 || j==3){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    cout << "1." << endl;
    pattern1();
    cout << endl;
    
    cout << "2." << endl;
    pattern2();
    cout << endl;

    cout << "3." << endl;
    pattern3();
    cout << endl;

    cout << "4." << endl;
    pattern4();
    cout << endl;

    cout << "5." << endl;
    pattern5();
    cout << endl;

    cout << "6." << endl;
    pattern6();
    cout << endl;

    cout << "7." << endl;
    pattern7();
    cout << endl;
}