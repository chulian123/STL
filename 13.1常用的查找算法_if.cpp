//
// Created by 之倾 on 2022/10/20.
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
////常用查找算法
////find
//
////查找 内置数据类型
//void test01() {
//    vector<int> v;
//    for (int i = 0; i < 10; i++) {
//        v.push_back(i);
//    }
//    //查找容器中 是否有5这个元素
//    vector<int>::iterator it = find(v.begin(), v.end(), 5);
//    if (it == v.end()) {
//        cout << "没有找到" << endl;
//    } else {
//        cout << "找到" << *it << endl;
//    }
//}
//
//class person {
//public:
//    person(string name, int age) {
//        this->m_name = name;
//        this->m_age = age;
//    }
//    //重载== 让底层知道如何对比person数据类型
//    bool operator==(const person &p){
//        if(this->m_name ==p.m_name && this->m_age ==p.m_age){
//            return true;
//        } else{
//            return false;
//        }
//
//
//    }
//
//    string m_name;
//    int m_age;
//};
//
////查找自定数据类型
//void test02() {
//    vector<person> v;
//    //创建数据
//    person p1("aaaa", 10);
//    person p2("bbbb", 10);
//    person p3("cccc", 2);
//    person p4("dddd", 10);
//    v.push_back(p1);
//    v.push_back(p2);
//    v.push_back(p3);
//    v.push_back(p4);
//
//   vector<person>::iterator it =find(v.begin(),v.end(),p2);
//    if (it == v.end())
//    {
//        cout << "没有找到!" << endl;
//    }
//    else
//    {
//        cout << "找到姓名:" << it->m_name << " 年龄: " << it->m_age << endl;
//    }
//
//}
//
//int main() {
//    test01();
//    test02();
//}