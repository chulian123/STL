//
// Created by 之倾 on 2022/10/11.
//
//#include <deque>
//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//using namespace std;
///*
// 有5名选手：选手abcde，10个评委分别对每一个选手打分，去掉最高分，最低分，取平均分
// */
//class Person{
//public:
//    Person(string name,double score){
//        this->m_name=name;
//        this->m_score= score;
//    }
//
//    string m_name;
//    int m_score;
//};
//void creatPerson(vector<Person>&v){
//    string nameseed ="ABCDE";
//    for(int i=0;i<5;i++){
//        string name ="选手";
//        name+=nameseed[i];
//
//        int score= 0;
//        Person p(name,score);
//        //把创建的person对象放入容器里
//        v.push_back(p);
//    }
//}
//
////打分
//void setScore(vector<Person>&v){
//    for(vector<Person>::iterator it =v.begin(); it != v.end();it++){
//        //将评委的分数 放入deque容器
//        deque<int>d;
//        for (int i = 0; i < 10; i++) {
//            int score =rand()%41+60;//60~100
//            d.push_back(score);
//        }
//        //测试
////        cout<<"选手："<<it->m_name<<"打分："<<endl;
////        for(deque<int>::iterator dit = d.begin();dit!=d.end();dit++){
////            cout<<*dit<<" ";
////        }
////        cout<<endl;
//        //排序
//        sort(d.begin(),d.end());
//
//        //去掉最高分和最低分
//        d.pop_back();
//        d.pop_front();
//        //取平均分
//        int  sum =0;
//        for(deque<int>::iterator dit = d.begin();dit!=d.end();dit++){
//            sum+=*dit;
//        }
//        int avg =sum/d.size();
//        //将平均分赋值给选手
//        it->m_score=avg;
//    }
//}
//
//void showscore(vector<Person>&v){
//    for(vector<Person>::iterator it =v.begin();it!=v.end();it++)
//    {
//        cout<<"姓名:"<<it->m_name<<"分数:"<<it->m_score<<endl;
//    }
//}
//
//int main(){
//  //创造5名选手
//  vector<Person>v;
//  creatPerson(v);
//  //测试
////    for (vector<Person>::iterator it =v.begin();it!= v.end();it++) {
////        cout <<"姓名："<< (*it).m_name<<"分数："<<(*it).m_score;
////    }
//
//  //给5名选手打分
//    setScore(v);
//
//
//  //显示得分
//   showscore(v);
//
//}