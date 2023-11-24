#include<iostream>
using namespace std;
//三只小猪称体重，判断谁最重
//创建三只小猪重量
int main(){
int a1=0;
int a2=0;
int a3=0;

//让用户输入三只小猪重量
cout<<"输入小猪a的体重："<<endl;
cin>>a1;

cout<<"输入小猪b的体重："<<endl;
cin>>a2;

cout<<"输入小猪c的体重："<<endl;
cin>>a3;

cout<<"小猪a的体重："<<a1<<endl;
cout<<"小猪b的体重："<<a2<<endl;
cout<<"小猪c的体重："<<a3<<endl;

if(a1>a2)
{
  if(a1>a3)
  {
     cout<<"小猪a最重"<<endl;
  }
  else
  {
    cout<<"小猪c最重"<<endl;
  }
}

else  //b比a重
{
if(a2>a3){
  cout<<"小猪b最重"<<endl;
}
else
{
  cout<<"小猪c最重"<<endl;
}
}



system("pause");

  return 0;
}