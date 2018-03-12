#include<iostream>
using namespace std;
class first
{
    char a[50];
    public:
    void get()
    {
        cout<<"Enter the string:";
        cin>>a;
        cout<<"laptop\n";
    }
    };
    class second:public first
    {
        public:
        void put()
        {
        cout<<"laptop\n";
    }
};
class third:public second
{
    public:
    void add()
    {
        cout<<"laptop\n";
    }
};
int main()
{
    third t;
    t.get();
    t.put();
    t.add();
    return 0;
}



