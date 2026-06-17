// // // #include<iostream>
// // // using namespace std;

// // // int main(){
// // //     int a,b;

// // //     cout<<"Enter the value of a " << endl;
// // //     cin>> a;

// // //     cout<<"Enter the value of b " << endl;
// // //     cin>> b;

// // //     char op;
// // //     cout<<"Enter the Operation you want" << endl;
// // //     cin >> op;
     
// // //     switch(op){

// // //         case '+': cout<< (a+b) << endl;
// // //                   break;

// // //         case '-': cout<< (a-b) << endl;
// // //                   break;

// // //         case '/': cout<< (a/b) << endl;
// // //                   break;

// // //         case '*': cout<< (a*b) << endl;
// // //                   break;

// // //         case '%': cout<< (a % b) << endl;
// // //                   break;
// // //     }
    

// // // }


// // // #include<iostream>
// // // using namespace std;

// // // bool isEven(int a){
// // //     if(a&1){
// // //         return 0;

// // //     }
// // //     else{
// // //         return 1;
// // //     }
// // // }

// // // int main(){

// // //     int num ;
// // //     cin>> num;
    
// // //     if (isEven(num)) {
// // //         cout << "Number is Even" << endl;
// // //     }
// // //     else{
// // //         cout<< "Number is Odd" << endl;
// // //     }


// // // }

// // #include<iostream>
// // using namespace std;

// // int factorial(int n){

// //     int fact = 1;

// //     for(int i =1; i<=n; i++){
// //         fact = fact * i; 
// //     }

// //     return fact ;
// // }

// // int nCr(int n, int r){

// //     int num = factorial(n);

// //     int deno = factorial(r) * factorial(n-r);

// //     return num/deno;
// // }


// // int main(){

// //  int n, r;
// //  cin>> n  >> r ;

// //  cout<<" Answer is " << nCr(n,r) << endl;
// // }


// #include<iostream>
// using namespace std;


// void printcounting(int n){

//     for(int i = 0; i<=n; i++){
//         cout << i<< endl;

//     }
// }

// int main(){
//     int n; 
//     cin>> n;

//   printcounting(n);
// }

 #include <iostream>
using namespace std;

int apTerm(int n) {
    return 3 * n + 7;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << apTerm(i) << " ";
    }

    return 0;
}