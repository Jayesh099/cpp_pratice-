#include<iostream>
using namespace std;

int main(){
        int rows;
        int columns;
        cout<<"Enter the rows"<<endl;
        cin >> rows;
        cout<<"Enter the column"<<endl;
        cin >> columns;

        for (int i = 0; i <= rows; i++){
            for (int j= 1; j <= rows -i; j++){
                cout<<j;
            }
            cout << endl;
        }

}