//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
////常用的算法查找 find_if
////第一种 查找内置数据类型
//class foundfive{
//public:
//    bool operator()(int val){
//        return val>5;
//    }
//};
//
//void  test01(){
//    vector<int>v;
//    for (int i = 0; i < 10; i++) {
//        v.push_back(i);
//    }
//    //
//    vector<int>::iterator  it = find_if(v.begin(),v.end(),foundfive());
//    if (it == v.end()){
//        cout<<"没有找到"<<endl;
//    } else{
//        cout<<"找到:"<<*it<<endl;
//    }
//}
////第二种 查找自定义数据类型
//class person{
//public:
//    person(string name, int age){
//        this->m_name =name;
//        this->m_age =age;
//    }
//    string m_name;
//    int m_age;
//};
//class find20{
//public:
//    bool operator()(person &p){
//        return p.m_age>20;
//    }
//};
//
//void  test02(){
//   vector<person>v;
//   //创造数据
//    person p1("aaaa", 10);
//    person p2("bbbb", 10);
//    person p3("cccc", 2);
//    person p4("dddd", 25);
//    v.push_back(p1);
//    v.push_back(p2);
//    v.push_back(p3);
//    v.push_back(p4);
//    //查找大于20
//    vector<person>::iterator it=find_if(v.begin(),v.end(), find20());
//    if(it ==v.end()){
//        cout << "没有找到!" << endl;
//    }
//    else
//    {
//        cout << "找到姓名:" << it->m_name << " 年龄: " << it->m_age << endl;
//  }
//
//}
//int main(){
//    test01();
//     test02();
// }