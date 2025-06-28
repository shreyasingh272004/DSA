#include<bits/stdc++.h>
using namespace std;
int main(){
   //PAIRS
   /*pair<int,int> p={1,2};//pairs
   cout<<p.first<<" "<<p.second<<endl;
   pair<int,pair<int,int>> p={5,{6,7}};//nested pairs
   cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
   pair<int,int> arr[]={{1,2},{2,5},{6,7}};//array pairs
   cout<<arr[1].second<<endl;   
   cout<<arr[0].second<<endl;*/


   //VECTORS
   //1
   vector<int> v;
   v.push_back(1);
   v.emplace_back(2);
   //2
   vector<pair<int,int>>vec;
   vec.push_back({1,2});
   vec.emplace_back(1,2);
   //3
   vector<int> v1(5,100);
   vector<int> v2(5);
   vector<int> v3(5,20);
   vector<int> v4(v1);

   //accessing elements in vector 
   vector<int> v5={10,20,30,40,50};
   cout<<v5[3]<<endl;//output using index





   //Iterators-pounts to memory address of vector
   vector<int> v7={20,10,15,6,7};
   vector<int>::iterator it=v7.begin();
   it++;//moves the iterator to next memory address
   cout<<*(it)<<" "<<endl;//value output at the it index
   it=it+3;
   cout<<*(it)<<endl;//7

   //v.end()-
   vector<int> v6={1,2,3,4,5,6};
   vector<int>::iterator it1=v6.end();//points to a value outside of the vector v6 like smthng after 6 randomly
   cout<<*(it1)<<endl;//prints the random value out of array size
   it1--;//now this will print 6 
   cout<<*(it1)<<endl;


   //v.rend()-  i.e reverse end
   vector<int> v8={1,2,3,4,5};
   vector<int>::reverse_iterator it3=v8.rend();//points to the last element of the vector
   it3--;//1
   cout<<*(it3)<<endl;

   //v.rbegin()- reverse begin
   vector<int> v9={10,20,30,40,50};
   vector<int>::reverse_iterator it4=v9.rbegin();//points to the first element of the vector
   cout<<*(it4)<<endl;//50
   it4++;//40
   cout<<*(it4)<<endl;//40


   //vector loop
   vector<int> v10={1,2,3,4,5};
   for(vector<int>::iterator it5=v10.begin();it5!=v10.end();it5++){
      cout<<*it5<<endl;
   }


   //loop alternative of above loop statment
   for(auto it6=v10.begin();it6!=v10.end();it6++){
      cout<<*it6<<endl;
   }


   //2nd alternative of above loop statement
   for(auto it7:v10){
      cout<<it7<<endl;
   }
   //deleting elements in vector
   vector<int> v11={94,24,32,42,53};
   v11.insert(v11.begin(),300);//adds 300 at the beginning of the vector
   /*for(auto it8:v11){
      cout<<it8<<endl;
}*/
   v11.erase(v11.begin());//deletes the element at index 0
   v11.erase(v11.begin()+2);//deletes the element at index 2
   v11.erase(v11.begin()+1,v11.end());//deletes the elements from index 1 to the end of the vector
   v11.pop_back();//deletes the last element of the vector
    for(auto it8:v11){
      cout<<it8<<endl;
}

   //insert function
   vector<int> v12={7,44,5,7,8,33};
   v12.insert(v12.begin()+2,100);//inserts 100 at index 2
   v12.insert(v12.begin()+3,2,200);//inserts 200 at index 3 two times
   for(auto it9:v12){
      cout<<it9<<endl;
   }
   cout<<v12.size();

   //swap
   vector<int> v13={1,2,3,4,5};
   vector<int> v14={6,7,8,9,10};
   v13.swap(v14);//swaps the elements of v13 and v14
   for(auto it10:v13){
      cout<<it10<<endl;
   }
}
// STL is a powerful library in C++ that provides a set of common data structures and algorithms.
// It includes containers like vectors, lists, sets, maps, and algorithms for sorting, searching, etc.


