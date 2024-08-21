#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;
int main(){
    vector<string> v6 = { "hi","my","name","is","lee" };
    //for (vector<string>::iterator iter = v6.begin(); iter != v6.end(); iter++)
    for (auto iter = v6.begin(); iter != v6.end(); iter++)
    {
        cout << *iter << " ";
        //下面两种方法都行
        cout << (*iter).empty() << " ";
        cout << iter->empty() << endl; 
    }
    
    
    
    //below is another example
	string s[7] = {"aa","bb","cc","dd","ee","ff","gg"};
    vector<string> words(s,s+7);
    cout << "not insert things yet!" << endl; 
    for(auto w:words){  //pay attention to this for_iteration
    	cout << w<<" " ;
	}
	words.insert(words.begin()+3,"����"); //���뵽��words��̬����ĵ�����Ԫ��֮�� 
	cout << endl << "after insert" << endl ; 
	for(auto w:words){
    	cout << w<<" " ;
	}
	
	 
}
