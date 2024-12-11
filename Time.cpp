#include <iostream>
using namespace std;
struct TIME
    {
        int hours;
        int minutes;
        int seconds;
    };

void getdata(TIME& t){
    // cout<<"Enter the first time  "<<endl;
    cout <<"Enter hours :";
    cin>>t.hours;
    cout <<"Enter minutes :";
    cin>>t.minutes;
    cout <<"Enter seconds :";
    cin>>t.seconds;
}    
TIME addtimes(TIME& t1,TIME& t2 ,TIME& sum){
    // TIME sum ;
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + (sum.seconds/60);
    sum.seconds %= 60;
    sum.hours = t1.hours + t2.hours + (sum.minutes/60);
    sum.minutes %= 60;
    // return sum;

}
void displayTime(TIME& sum) {
    cout << sum.hours << " hours, " << sum.minutes << " minutes, " << sum.seconds << " seconds" << endl;
}

int main(){
    TIME t1 , t2 , sum ; 
    cout<<"Enter Time 1 Data :" <<endl;
    getdata(t1);
    cout<<"Enter Time 2 Data :" <<endl;
    getdata(t2);

    // sum = addtimes(t1, t2 ,sum);
    addtimes(t1, t2 ,sum);
    cout<<endl;

    displayTime(sum);
    
    return 0;

} 