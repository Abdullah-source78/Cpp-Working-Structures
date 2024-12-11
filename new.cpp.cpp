#include <iostream>
using namespace std;
struct TIME
    {
        int hours;
        int minutes;
        int seconds;
    };

void getdata(TIME& t){
    cout <<"Enter hours :";
    cin>>t.hours;
    cout <<"Enter minutes :";
    cin>>t.minutes;
    cout <<"Enter seconds :";
    cin>>t.seconds;
}    
TIME addtimes(TIME& t1,TIME& t2 ,TIME& sum){

   sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + (sum.seconds/60);
    sum.seconds %= 60;
    sum.hours = t1.hours + t2.hours + (sum.minutes/60);
    sum.minutes %= 60;
    cout << sum.hours << " hours, " << sum.minutes << " minutes, " << sum.seconds << " seconds" << endl;
    
}

int main(){
    TIME t1 , t2 , sum ; 
    cout<<"Enter Time 1 :" <<endl;
    getdata(t1);
    cout<<"Enter Time 2 :" <<endl;
    getdata(t2);

    addtimes(t1, t2 ,sum);

    return 0;

} 