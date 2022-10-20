//
// Created by 之倾 on 2022/10/13.
//
//#include <iostream>
//#include <queue>
//using namespace std;
//class Person{
//public:
//    Person(string name,int age){
//        this->m_name=name;
//        this->m_age =age;
//    }
//    string m_name;
//    int m_age;
//
//};
////队列queue
//void test01(){
//    queue<Person>v;
//    //准备数据
//    Person p1("毛毛",1);
//    Person p2("萌萌",11);
//    Person p3("腹肌",1);
//    Person p4("咖啡",1);
//    //入队
//    v.push(p1);
//    v.push(p2);
//    v.push(p3);
//    v.push(p4);
//    //判断只要队列不为空，查看队头，查看队尾，出队
//    while (!v.empty()){
//        //查看队头
//        cout<<"队头元素：--姓名："<<v.front().m_name<<" 队头元素：--年龄："<<v.front().m_age<<endl;
//        //查看队尾
//        cout<<"队尾元素：--姓名："<<v.back().m_name<<"队尾元素：--年龄："<<v.back().m_age<<endl;
//        //出队
//        v.pop();
//    }
//    cout<<"队列大小:"<<v.size()<<endl;
//}
//
//
//int main() {
//  test01();
//}