#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student
{
    string sname;
    int score;

};


struct teacher
{
    string tname;
    struct student sarray[5];
};
//给老师和学生赋值的函数
void allocate(struct teacher tarray[],int len)    //数组就是*指针
{

    string nameseed ="ABCDE";
    for(int i=0; i<len; i++)
    {
        tarray[i].tname="teacher-";
        tarray[i].tname+=nameseed[i];   //????????
        
        for(int j=0;j<5;j++)
        {
            tarray[i].sarray[j].sname="student-";
            tarray[i].sarray[j].sname+=nameseed[j];

            int random =rand()%101;   //给一个随机数

            tarray[i].sarray[j].score=random;

        }

        
    }

}
//打印所有信息的函数
void print(struct teacher tarray[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"老师的姓名"<<tarray[i].tname<<endl;

        for(int j=0;j<5;j++)
        {
            cout<<"学生姓名"<<tarray[i].sarray[j].sname<<
            "考试分数"<<tarray[i].sarray[j].score<<endl;
        }
        
    }
}

int main(){

    srand((unsigned int)time(NULL));
//创建三名老师的数组
struct teacher tarray[3];
//通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
int len = sizeof(tarray)/sizeof(tarray[0]);
allocate(tarray,len);
//打印所有老师及学生的信息
print(tarray,len);




    system("pause");
    return 0;
}