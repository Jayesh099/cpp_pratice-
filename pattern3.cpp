#include<iostream>
using namespace std;

int main(){
        int rows;
        int columns;
        cout<<"Enter the rows"<<endl;
        cin >> rows;
        cout<<"Enter the column"<<endl;
        cin >> columns;

         for (int i = 1; i <rows; i++){
            for (int j = columns; j >=i; j --){
               cout<<j;
            }
            cout << endl;
         }



}





// #include<iostream>
// using namespace std;

// int main(){
//         int rows;
//         int columns;
//         cout<<"Enter the rows"<<endl;
//         cin >> rows;
//         cout<<"Enter the column"<<endl;
//         cin >> columns;

//          for (int i = 4; i >=1; i--){
//             for (int j  = columns; j >=i; j --){
//                cout<<j;
//             }
//             cout << endl;
//          }



// }