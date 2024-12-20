#include<iostream>
using namespace std;
#include <chrono>
#include <ctime>


int main(){
    int rows;
    int columns;
    auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);
    cout << "Current time: " << ctime(&currentTime);
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns"<<endl;
    cin>> columns;

    for (int i = 1; i <= rows; i++){
        for (int j= 1; j <=  columns; j++){
        cout << j;
        }
        cout<<endl;
    }
}