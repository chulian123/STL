//
// Created by 之倾 on 2022/10/9.
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//void printVector(vector<int>&v){
//    for(vector<int>:: iterator it=v.begin();it!=v.end();it++){
//        cout<<*it<<" ";
//    }
//    cout<<endl;
//}
////vector容器的容量和大小操作
//void test01(){
//    vector<int>v1;
//    for (int i = 0; i < 10; i++) {
//        v1.push_back(i);
//    }
//    if(v1.empty())//为真代表容器为空
//    {
//        cout<<"v1为空"<<endl;
//    } else{
//        cout<<"v1不为空"<<endl;
//        cout<<"v1的容量为"<<v1.capacity()<<endl;//容量大于大小
//        cout<<"v1的大小为"<<v1.size()<<endl;
//    }
//    v1.resize(15,100);//利用重载版本，可以制定默认填充值，参数2
//    printVector(v1);//如果重新制定比原来长了，默认用0来填充新的位置
//
//    v1.resize(5);
//    printVector(v1);//如果重新制定比原来短了，超出部分会删除掉
//}
//
//
//
//int main() {
//   test01();
//}
