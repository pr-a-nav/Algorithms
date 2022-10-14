#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main() {

      unordered_map<string,int> m;

      pair<string,int> pair("ELon's IQ",5);
      m.insert(pair);

      m["My IQ"]=160;

      pair<string,int> pair("RAchit's IQ",170);
      m.insert(pair);

      
      cout <<m["My IQ"] <<endl;

      cout <<m["ELon's IQ"] <<endl;

      cout <<m["RAchit's IQ"] <<endl;

      return 0;

};