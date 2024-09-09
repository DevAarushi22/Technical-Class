#include<iostream>
using namespace std;

Int i= 0;

void explain_pair()
{
    pair<int,int> p={1,3}; //storing the two values in for different types.
    cout<<p.first;
    cout<<p.second;

    //nested pair
    pair<int, pair<int,int>>p={1,{3,4}};
    cout<<p.first; // accessing the 1st value ie. 1
    cout<<p.second.first; // accessing the 2nd value ie. 3
    cout<<p.second.second; // accessing the 3rd value ie. 4
}

Int arr[5]={1,2,3,4,5};

void explain_vector() //using vector we can add multiple values as it doesn't defines the size.
{
//Vector declaration:
    vector<int>v;
    v.push_back(1);//1 will be inserted into the vector.
    v.push_back(2);//2 will be inserted into the vector.
    v.push_back(3);//3 will be inserted into the vector.
    v.push_back(4);//4 will be inserted into the vector.

    //if we want to confined the value to the vector with a given size.
    vector<int>v(5);
    vector<int>v1(5,2); // it will intialzie the first 5 vector with 2.
    vector<int>v2(v1) //copying the vector v1 into v2.

    //traverse the vector
    v={1,2,3,4,5,6,7};
    vector<int>::iterator it=v.begin(); //it is pointing to the address of the first element.
    cout<<*(it);
    it++;//now it is pointing to the 2nd elememnt
    cout<<*(it); // print 2 which is in the 2nd position.
    cout<<v[0];//print 1 i.e. it means that it is present on the 1st position.
    cout<<v.back(); //this means we are accessing the last element i.e. 7

    for(vector<int>::iterator it=v.begin(); it!=v.end; it++)
    {
        cout<<*it;
    }

    for(auto it=v.begin(); it= !v.end; it++) //auto in a keyword which detectes the type of the data.
    {
        cout<<*it;
    }

    for(auto it:v) //iterate the whole vector and then traverse it.
    {
        cout<<it;
    }

    //{10, 20, 12, 23}
    v.erase(v.begin()+1); //{10, 12, 23} there the it first points to 10 then +1 so points to 20 and then erases it.

    //{10,20}
    v.pop_back();//{10} pops the last element hence 10 remains.

    //V1-> {10,20}
    //v2-> {30,40}
    v1.swap(v2); // swaps the value of v1 and v2.
    v1.clear(); //empties the vector.

}

//how to declare a stack:
stack<int>st; //it follows it LIFO structure, last in first out.
st.push(1); //1 is pushed into the stack.
st.push(2); // now the stack becomes {2,1}
st.push(3); // {3,2,1}
st.push(3);// {3,3,2,1}
st.push(5);//{5,3,3,2,1}

cout<<st.top(); //print the top value i.e. 5
st.pop(); //deletes the last value i.e. 5 which was inserted last therefore the stack will be {3,3,2,1}
cout<<st.top(); //3
cout<<st.size(); //4: gives the size of the stack


//declaration of queue
queue<int>q; //it follows FIFO structure, first in first out.
q.push(1); //1 is pushed into the queue.
q.push(2); //now the queue becomes {1,2}
q.push(4); //{1,2,4}
q.back()+=5; // updating the last value to 9 as 4+5=9.
cout<<q.back(); // print the value 9

//modified queue id {1,2,9}
cout<<q.front(); //prints 1
q.pop(); //the 1st element will be poped
//{2,9}
cout<<q.front();//prints 2

priority_queue<int>pq; //it works on max heap.
pq.push(5);//(5)
pq.push(2);//(5,2)
pq.push(8);//(8,5,2)
pq.push(10);//(10,8,5,2)
cout<<pq.top();//prints 10
pq.pop(); //(8,5,2)
cout<<pq.top();//prints 8