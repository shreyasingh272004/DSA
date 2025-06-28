#include<bits/stdc++.h>
using namespace std;

    //LISTS
    void explainlist(){
        list<int> ls;
        ls.push_back(2);
        ls.emplace_back(4);
        ls.push_front(5);
        ls.emplace_front(7);
        cout << "List elements: ";
        for(auto it = ls.begin(); it != ls.end(); it++) {
            cout << *it << " ";
        }
    }
    

    //DEQUE
    void explaindeque(){
        deque<int> dq;
        dq.push_back(1);
        dq.emplace_back(2);
        dq.push_front(4);
        dq.emplace_front(3);
        cout << "\nDeque elements: ";
        for(auto it = dq.begin(); it != dq.end(); it++) {
            cout << *it << " ";
        }
        dq.back();
        dq.front();
        cout << "\nFront element: " << dq.front() << "\nBack element: " << dq.back() << endl;
    }


    //stack
    void explainstack(){
        stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(4);
        st.emplace(5);
        cout<<"Top element is="<<st.top()<<endl;
        st.pop();
        cout<<"Top element after pop is="<<st.top()<<endl;
        cout<<"Size of stack is="<<st.size()<<endl;
        cout<<"Is stack empty? "<<(st.empty() ? "Yes" : "No")<<endl;
        st.empty();
        stack<int>st1,st2;
        st1.swap(st2);
        cout<<"Size of stack after swap is="<<st1.size()<<endl;
    }


    //queue
    void explainqueue(){
        queue<int> q;
        q.push(1);
        q.emplace(2);
        q.push(3);
        q.emplace(4);
        cout<<"Front element is="<<q.front()<<endl;
        cout<<"Back element is="<<q.back()<<endl;
        q.pop();
        cout<<"Front element after pop is="<<q.front()<<endl;
        cout<<"Size of queue is="<<q.size()<<endl;
        cout<<"Is queue empty? "<<(q.empty() ? "Yes" : "No")<<endl;
    }


    //priority queue
    void explainpriority_queue(){
        priority_queue<int>pq1;
        pq1.push(10);
        pq1.push(20);
        pq1.push(5);
        pq1.push(15);
        cout<<"Top element is="<<pq1.top()<<endl;
        pq1.pop();
        cout<<"Top element after pop is="<<pq1.top()<<endl;
        cout<<"Size of priority queue is="<<pq1.size()<<endl;
        cout<<"Is priority queue empty? "<<(pq1.empty() ? "Yes" : "No")<<endl;
        priority_queue<int, vector<int>, greater<int>>pq;
        pq.push(5);
        pq.push(2);
        pq.push(8);
        pq.push(10);
        cout<<pq.top();
    }


    //set
    void explainset(){
        set<int> s;
        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(3);
        s.insert(4);
        s.emplace(5);
        auto it=s.find(3);
        auto it1=s.find(6);
        s.erase(2);
        int cnt=s.count(1);
        cout << "Count of 1 in set: " << cnt << endl;
        cout<< "\nElements in set: ";
         for(auto it = s.begin(); it != s.end(); it++) {
            cout << *it << " ";
        }
        cout << "\nSize of set: " << s.size() << endl;
        cout << "Is set empty? " << (s.empty() ? "Yes" : "No") << endl;
    }

    //multiset
    void explainmultiset(){
        multiset<int> ms;
        ms.insert(1);
        ms.insert(2);
        ms.insert(3);
        ms.insert(3);
        ms.insert(4);
        ms.emplace(5);
        auto it = ms.find(3);
        auto it1 = ms.find(6);
        ms.erase(2);
        int cnt = ms.count(1);
        cout << "Count of 1 in multiset: " << cnt << endl;
        cout << "\nElements in multiset: ";
         for(auto it = ms.begin(); it != ms.end(); it++) {
            cout << *it << " ";
        }
        cout << "\nSize of multiset: " << ms.size() << endl;
        cout << "Is multiset empty? " << (ms.empty() ? "Yes" : "No") << endl;
    }

    //unordered_set
    void explainunordered_set(){
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    cout << "\nElements in unordered set: ";
    for(auto it2 = us.begin(); it2 != us.end(); it2++) {
        cout << *it2 << " ";
    }   
}

    //map
    void explainMap(){
        map<int,int>mpp;
        map<int,pair<int,int>>mpp1;
        map<pair<int,int>,int>mpp2;
        mpp[1]=2;
        mpp.emplace(3,1);
        mpp.insert({2,4});
        for(auto it2:mpp){
            cout<<it2.first<<" "<<it2.second<<endl;
        }
        cout<<mpp[1];
        cout<<mpp[2];
    

        auto it2=mpp.find(3);
        cout<<(*it2).second;
        cout<<mpp.at(3);

        auto it4=mpp.find(5);

        auto it5=mpp.lower_bound(2);

        auto it6=mpp.upper_bound(3);
    }
    
    

int main(){
    explainlist(); 
    explaindeque();
    explainstack();
    explainqueue();
    explainpriority_queue();
    explainset();
    explainmultiset();
    explainMap();
    return 0;
}