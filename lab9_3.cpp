/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int A;
    cout << "Enter your age: ";
    cin >> A;
    if(A <= 25)
    {
        int h;
        cout << "Enter your height: ";
        cin >> h;
        if(h < 100)
        {
              cout << "Your character = Chopper";  
        }else{
            if(h < 180)
            {
              cout << "Your character = Usopp";    
            }else{
                int B;
            cout << "Enter your bounty: ";
            cin >> B;
            if(B > 1100000000)
            {
                cout << "Your character = Zoro";    
            }else{
                cout << "Your character = Sanji";   
            }    
            }
        }
    }else{
        if(A <= 60)
        {
            int B;
            cout << "Enter your bounty: ";
            cin >> B;
            if(B > 500000000)
            {
                cout << "Your character = Jinbe";
            }else{
                cout << "Your character = Franky";
            }
        }else{
            cout << "Your character = Brook";
        }
    }
    return 0;
}