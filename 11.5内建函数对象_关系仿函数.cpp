//
// Created by 之倾 on 2022/10/20.
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;
//class Mycompare{
//public:
//    bool operator()(int v1,int v2){
//        return v1>v2;
//    }
//};
////大小对比
//void test01() {
//    vector<int> v;
//    v.push_back(10);
//    v.push_back(60);
//    v.push_back(40);
//    v.push_back(50);
//    v.push_back(80);
//    v.push_back(50);
//
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//    //降序操作
//    sort(v.begin(),v.end(),Mycompare());
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//    //新操作
//    sort(v.begin(),v.end(),greater<int>());
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//}
//
//int main() {
//    test01();
//}