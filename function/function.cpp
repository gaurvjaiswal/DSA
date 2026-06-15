// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;

//     cout<<"Enter the value of a " << endl;
//     cin>> a;

//     cout<<"Enter the value of b " << endl;
//     cin>> b;

//     char op;
//     cout<<"Enter the Operation you want" << endl;
//     cin >> op;
     
//     switch(op){

//         case '+': cout<< (a+b) << endl;
//                   break;

//         case '-': cout<< (a-b) << endl;
//                   break;

//         case '/': cout<< (a/b) << endl;
//                   break;

//         case '*': cout<< (a*b) << endl;
//                   break;

//         case '%': cout<< (a % b) << endl;
//                   break;
//     }
    

// }


#include<iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        return 0;

    }
    else{
        return 1;
    }
}

int main(){

    int num ;
    cin>> num;
    
    if (isEven(num)) {
        cout << "Number is Even" << endl;
    }
    else{
        cout<< "Number is Odd" << endl;
    }


}