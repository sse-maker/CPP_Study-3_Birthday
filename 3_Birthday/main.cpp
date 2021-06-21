//
//  main.cpp
//  3_Birthday
//
//  Created by 세광 on 2021/06/21.
//

#include <iostream>
#include <string>

using namespace std;

struct Birthday {
    int day, month, year;
    string student;
};

int main() {
    int n;
    Birthday data[100];
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> data[i].student >> data[i].day >> data[i].month >> data[i].year;
    }
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(data[j].year > data[j + 1].year) {
                swap(data[j], data[j + 1]);
            }
            else if(data[j].year == data[j + 1].year) {
                if(data[j].month > data[j + 1].month) {
                    swap(data[j], data[j + 1]);
                }
                else if(data[j].month == data[j + 1].month) {
                    if(data[j].day > data[j + 1].day) {
                        swap(data[j], data[j + 1]);
                    }
                }
            }
        }
    }
    
    cout << data[n - 1].student << '\n' << data[0].student << endl;
}
