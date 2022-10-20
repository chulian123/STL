//
// Created by 之倾 on 2022/10/16.
//
//#include <iostream>
//#include <list>
//using namespace std;
////list容器 排序案例 对于自定义数据类型 做排序
//
////按照年龄进行升序 如果年龄相同按照身高进行排序
//class Person{
//public:
//    Person(string name,int age,int height){
//        this->m_age=age;
//        this->m_name=name;
//        this->m_height =height;
//    }
//    string m_name;
//    int m_age;
//    int m_height;
//};
//
//bool myComepare(Person &p1,Person&p2){
//    //年龄 做一个升序排序
//    if(p1.m_age==p2.m_age){
//        //年龄相同 按照身高来排序
//        return p1.m_height>p2.m_height;
//    } else{
//        return p1.m_age<p2.m_age;
//    }
//
//}
//void  test01(){
//    list<Person>L;
//
//    Person p1("刘备", 35 , 175);
//    Person p2("曹操", 45 , 180);
//    Person p3("孙权", 40 , 170);
//    Person p4("赵云", 25 , 190);
//    Person p5("张飞", 35 , 160);
//    Person p6("关羽", 35 , 200);
//
//    L.push_back(p1);
//    L.push_back(p2);
//    L.push_back(p3);
//    L.push_back(p4);
//    L.push_back(p5);
//    L.push_back(p6);
//
//    for(list<Person>::iterator it =L.begin();it != L.end(); it++){
//        cout<<"姓名："<<(*it).m_name<<" 年龄："<<it->m_age<<" 身高："<<(*it).m_height<<endl;
//    }
//    //排序后的
//    cout<<"排序后"<<endl;
//    L.sort(myComepare);
//    for(list<Person>::iterator it =L.begin();it != L.end(); it++){
//        cout<<"姓名："<<(*it).m_name<<" 年龄："<<it->m_age<<" 身高："<<(*it).m_height<<endl;
//    }
//}
//
//
//
//int main() {
//   test01();
//}