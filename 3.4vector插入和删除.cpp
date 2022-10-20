//
// Created by 之倾 on 2022/10/10.
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
////vector 插入和删除
////push_back(ele); //尾部插入元素ele
////pop_back(); //删除最后一个元素
////insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
////insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele
////erase(const_iterator pos); //删除迭代器指向的元素
////erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
////clear(); //删除容器中所有元素
//void printVector(vector<int>&v){
//    for(vector<int>:: iterator it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
//void test01(){
//    vector<int>v1;
//
//    //尾插
//    v1.push_back(10);
//    v1.push_back(20);
//    v1.push_back(30);
//    v1.push_back(40);
//    v1.push_back(50);
//    //遍历
//    printVector(v1);
//    //取中间值
//   v1.begin()+(v1.size()/2);
//
//    //尾删
//    v1.pop_back();//删除最后一个元素
//    printVector(v1);
//    //插入
//    v1.insert(v1.cbegin(),100);//最开始位置插入一个100
//    printVector(v1);
//    v1.insert(v1.begin(),2,1000);//开始的位置加入2个1000
//    printVector(v1);
//    v1.insert(v1.begin()+1,2,1000);//在开始的位置往后一位加入两个2000
//    printVector(v1);
//    //删除
//    v1.erase(v1.begin());
//    printVector(v1);
//    //两种清空方式
//    v1.erase(v1.begin(),v1.end());
//    v1.clear();
//    printVector(v1);
//}
//int main() {
//  test01();
//}