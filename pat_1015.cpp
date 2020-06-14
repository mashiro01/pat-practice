#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

struct student
{
    int uuid;
    int de;
    int ca;
};

bool totalSort(student a,student b){
    if(a.de + a.ca > b.de + b.ca){
        return a.de + a.ca > b.de + b.ca;
    }else{
        if(a.de + a.ca == b.de + b.ca){
            return a.de > b.de;
        }else{
            return a.de + a.ca > b.de + b.ca;
        }
    }
}

int main(){
    int totalNum,lowLine,youLine;
    cin >> totalNum>>lowLine>>youLine;

    deque<student> stu_fc;
    deque<student> stu_tf;
    student stu_p;
    int fir_stu = 0,sec_stu = 0,thir_stu = 0,for_stu = 0;
    for(int i = 1;i <= totalNum;i++){
        cin>>stu_p.uuid>>stu_p.de>>stu_p.ca;
        if(stu_p.de >= lowLine && stu_p.ca >= lowLine){
            if(stu_p.de >= youLine && stu_p.ca >= youLine){
                fir_stu++;
                stu_fc.push_front(stu_p);
            }else{
                if(stu_p.de >= youLine && stu_p.ca < youLine){
                    sec_stu++;
                    stu_fc.push_back(stu_p);
                }else{
                    if(stu_p.de < youLine && stu_p.ca < youLine && stu_p.de >= stu_p.ca){
                        thir_stu++;
                        stu_tf.push_front(stu_p);
                    }else{
                        for_stu++;
                        stu_tf.push_back(stu_p);
                    }
                }

            }
            //stu.push_back(stu_p);
        }
    }
    //Flist student
    sort(stu_fc.begin(),stu_fc.begin()+fir_stu,totalSort);

    //Second student
    sort(stu_fc.begin()+fir_stu,stu_fc.begin()+fir_stu+sec_stu,totalSort);

    //Third student
    sort(stu_tf.begin(),stu_tf.begin()+thir_stu,totalSort);

    //Fourth student
    sort(stu_tf.begin()+thir_stu,stu_tf.begin()+thir_stu+for_stu,totalSort);

    cout<<stu_fc.size() + stu_tf.size()<<std::endl;
    for(auto i = 0;i < stu_fc.size();i++){
        printf("%d %d %d\n",stu_fc[i].uuid,stu_fc[i].de,stu_fc[i].ca);
    }
    for(auto i = 0;i < stu_tf.size();i++){
        printf("%d %d %d\n",stu_tf[i].uuid,stu_tf[i].de,stu_tf[i].ca);
    }

    return 0;
}
