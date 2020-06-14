#include<iostream>
#include<algorithm>
using namespace std;

struct student
{
    string name;
    string studentID;
    int score;
};

bool sortStudent(student a,student b)
{
    return a.score < b.score;
}

int main()
{
    student stu[10000];
    int n;
    cin>>n;

    for(size_t i = 0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].studentID>>stu[i].score;
    }

    sort(stu,stu+n,sortStudent);
    
    std::cout<<stu[n-1].name<<" "<<stu[n-1].studentID<<endl;
    std::cout<<stu[0].name<<" "<<stu[0].studentID;

    return 0;

}