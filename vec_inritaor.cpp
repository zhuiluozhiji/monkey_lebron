//实例：
#include <iostream>
#include <vector>
using namespace std;
int main()
{
 vector<char> v1;
 vector<char>::iterator iter1;
 vector<char>::iterator iter2;
 v1.push_back('m');
 v1.push_back('n');
 v1.push_back('o');
 v1.push_back('p');

 cout << "v1.front() = " << v1[0] << endl;
 cout << "v1.back() = " << v1.back() << endl;

 iter1 = v1.begin();
 cout << *iter1 << endl;
 cout <<*v1.begin()<<endl;
 iter2 = v1.end()-1;    //注意v1.end()指向的是最后一个元素的下一个位置，所以访问最后一个元素
                        //的正确操作为：v1.end() - 1;
 cout << *iter2 << endl;
 cout <<*(v1.end()-1)<<endl;
 return 0;
}

