//
// Created by 之倾 on 2022/9/29.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>//标准算法
//using namespace std;
////vector存放自定义的数据类型
//
//class Person{
//public:
//    Person(string name,int age){
//        this->m_Name =name;
//        this->m_Age  =age;
//    }
//    string m_Name;
//    int m_Age;
//
//};
//
//void  test01(){
//    vector<Person>v;
//    Person p1("aa",10);
//    Person p2("dd",20);
//    Person p3("vv",30);
//    Person p4("bb",40);
//    Person p5("cc",50);
//    //向容器添加数据
//    v.push_back(p1);
//    v.push_back(p2);
//    v.push_back(p3);
//    v.push_back(p4);
//    v.push_back(p5);
//    //遍历数据
//    for(vector<Person>::iterator it= v.begin();it !=v.end();it++){
//       // cout<<"姓名："<<(*it).m_Name<<"年龄："<<(*it).m_Age<<endl;
//        cout<<"姓名："<<it->m_Name<<"年龄："<<it->m_Age<<endl;
//    }
//}
////存放自定义数据类型 指针
//void  test02() {
//    vector<Person*> v;
//    Person p1("aa", 10);
//    Person p2("dd", 20);
//    Person p3("vv", 30);
//    Person p4("bb", 40);
//    Person p5("cc", 50);
//    //向容器添加数据
//    v.push_back(&p1);
//    v.push_back(&p2);
//    v.push_back(&p3);
//    v.push_back(&p4);
//    v.push_back(&p5);
//
//    for(vector<Person*>::iterator it = v.begin(); it!=v.end();it++){
//        cout<<"姓名："<<(*it)->m_Name<<"年龄："<<(*it)->m_Age<<endl;
//
//
//    }
//
//
//}
//int main(){
// // test01();
//  test02();
//}