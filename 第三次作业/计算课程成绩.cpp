#include <iostream>
using namespace std;
class Student{
    static int totalscore;
    int score;
  public:
    Student(int s){
        score=s;
    }
    static void get(int score){
        totalscore+=score;
    }
    static void output(){
        cout<<totalscore<<endl;
        totalscore/=5;
        cout<<totalscore<<endl;
    }
};
int Student::totalscore=0;
int main(){
    int i,s;
    for(i=0;i<5;i++){
        cin>>s;
        Student st(s);
        st.get(s);
    }
    Student st(5);
    st.output();
    return 0;
}

