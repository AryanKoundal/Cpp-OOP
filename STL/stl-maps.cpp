#include <iostream>

//  for maps
#include <map>

using namespace std;

int main()
{

  // creating object of map
  map<int, string> data;

  // inserting key, value pairs
  data.insert(pair<int, string>(1, "aryan"));
  data.insert(pair<int, string>(2, "koundal"));
  data.insert(pair<int, string>(3, "name"));

  // creating an interator for type map<int,string>
  map<int, string>::iterator itr;

  // printing the key value pairs
  cout << "key\tvalue"
       << "\n";
  for (itr = data.begin(); itr != data.end(); itr++)
  {
    cout << itr->first << "\t" << itr->second << "\n";
  }
  return 0;
}