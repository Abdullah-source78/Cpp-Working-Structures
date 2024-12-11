#include <iostream>
using namespace std;
struct Student
    {
        int id ,sub[3];
        float avg;
        char name[40];
    };

void getdata(Student& s1){
    cout <<"Enter the name of the student ";
    cin>>s1.name;
    cout <<"Enter the id of the student ";
    cin>>s1.id;
    for(int i = 0;i<3;i++){
        cout<<"Enter marks of "<<i+1<<" subject :";
        cin>>s1.sub[i];
    }
    
    s1.avg = (s1.sub[0] + s1.sub[1] + s1.sub[2])/3.0f;

}    

string compare(const Student& s1, const Student& s2) {
    if (s1.avg > s2.avg) {
        return "Data of Student-1:\n"
               "ID: " + to_string(s1.id) + "\n"
               "Name: " + s1.name + "\n"
               "Average Marks: " + to_string(s1.avg) + "\n";
    } else if (s1.avg < s2.avg) {
        return "Data of Student-2:\n"
               "ID: " + to_string(s2.id) + "\n"
               "Name: " + s2.name + "\n"
               "Average Marks: " + to_string(s2.avg) + "\n";
    } else {
        return "Both students have the same average marks.\n";
    }
}
// void compare(Student& s1,Student& s2){
// if(s1.avg > s2.avg){   

//         cout<<"Data of Student-1"<<endl;
//         cout<<"id is "<<s1.id<<endl;
//         cout<<"id name "<<s1.name<<endl;
//         cout<<"Average marks "<<s1.avg<<endl;
//     }else if (s1.avg < s2.avg){

//         cout<<"\nData of Student-2"<<endl;
//         cout<<"id is "<<s2.id<<endl;
//         cout<<"id name "<<s2.name<<endl;
//         cout<<"Average marks "<<s2.avg<<endl;
//     }else{

//         cout<<"Same avg"<<endl;
//     }
// }
int main(){
    Student s1 , s2 ; 
    cout<<"Enter Student-1 Data :" <<endl;
    getdata(s1);
      cout<<"Enter Student-2 Data :" <<endl;
    getdata(s2);
    
    // compare(s1,s2):
    cout<<endl<<endl;
    string result = compare(s1,s2);
    cout<<result;
    return 0;

} 