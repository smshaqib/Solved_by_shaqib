#include<bits/stdc++.h>
using namespace std;

int main(){

    //declare string
    string s;

    //assign value
    s = "abcdf";

    //printing the size

    cout<<s.size()<<endl;


    //printing string
    cout<<s<<endl;


    //pushing char back to a string
    s+= 'b';
    s+= 'c';

    cout<<s<<endl;

    //taking input
    //    cin>>s;
    //    cout<<s;

    s = "asdfg";

    string s1;
    cout<<s.empty()<<endl;  /// 0
    cout<<s1.empty()<<endl;  /// 1



    //assigning an string in another string variable
    s1 = s;
    s.clear();

    cout<<s.empty()<<endl; /// 1
    cout<<s1.empty()<<endl; /// 0



    /// Assigning k in 0th index
    s = "asdfg";
    s[0] = 'k';
    cout<<s<<endl;  ///kasdfg;

    s = "abc";
    s1 = "def";

    //String concatenation

    string tmp = s+s1;
    cout<<tmp<<endl; ///abcdef


    //string iterator

    string::iterator it;
    for(it = s.begin(); it!=s.end(); it++)cout<<*it<<endl;

    //for each loop

    for(auto c: s)cout<<c;
    cout<<endl;


    s = "asd";
    tmp  = s;

    if(tmp==s)cout<<"Yes Match\n";
    else "No match\n";




    //string reverse and checking is a string is a palindrome or not

    s  = "asddsa";

    tmp = s;

    reverse(tmp.begin(),tmp.end());

    if(tmp==s)cout<<"Yes Palindrome"<<endl;
    else "Not Palindrome";


    s = "gfds";

    //sorting in increasing order
    sort(s.begin(),s.end());
    cout<<s<<endl; ///dfgs

    //sorting in non-increasing order
    sort(s.rbegin(),s.rend());
    cout<<s<<endl; ///sgfd



    //getting all unique element of a string

    s = "aaadddsss";

    int n = unique(s.begin(),s.end()) - s.begin();
    //here n is the size

    for(int i=0; i<n; i++)cout<<s[i]; ///ads

    cout<<endl;



    //getting maximum element of a string

    cout<< *max_element(s.begin(),s.end()) <<endl; ///s
    cout<< *min_element(s.begin(),s.end()) <<endl; ///a



    //when we need to take input with space;
    //input: my name is shaqib

    cout<<"Input with space. ex- My name is shaqib: ";
    char c;
    cin>>c;

    getline(cin,s);

    s = c+s;

    cout<<s<<endl;



    //if we need to sort some string on lexicographical order:

    vector <string> v;

    v.push_back("sheikh Mohammad shaqib");
    v.push_back("Hello world");
    v.push_back("My name is khan");

    sort(v.begin(),v.end());

    for(auto u: v)cout<<u<<endl;


    /*
    my name is shaqib
    Hello world
    My name is khan
    sheikh Mohammad shaqib
    */


    s = "asdf";

    s.pop_back(); /// removes last char of string

    cout<<s.back()<<endl; /// print last char of string


    s.clear();



    v = {"shaqib","momo","momo","ratul","rayhan"};

    int sz = unique(v.begin(),v.end()) - v.begin();

    cout<<sz<<endl; ///num of unique element


    for(int i=0; i<sz; i++)cout<<v[i]<<" ";
    cout<<endl;


    int a = 123;
    s = to_string(a);
    cout<<s<<endl; ///123

    s[0]='3';
    cout<<s<<endl; ///323

    //converting string to integer


    s = "123";
    a = stoi(s);

    cout<<a<<endl; ///123

    a+=1;

    cout<<a<<endl; ///124


    //deleting a substring from string

    s = "shaKAKAhriar";

    s.erase(s.begin()+3, s.begin()+7);
    cout<<s<<endl;


    //copying a substring of a string to a string

    tmp = "Gagha Alam Gadha";
    s = "Shahriar ";

    copy( tmp.begin()+6, tmp.begin()+10, back_inserter (s) ); /// copying "Alam substring to s back
    cout<<s<<endl;/// Shahriar Alam


    //Erasing all occuraence of a specific char from string

    s = "aaassdddaaasdd";
    s.erase( remove (s.begin(), s.end(), 'a' ), s.end() );
    cout<<s<<endl;


    //Checking is a string is substring of another srting in O(n*m)

    s = "ashshasdakks";


    if(s.find("asd")!=-1)cout<<"Substring found";

    else "Not Found";



}
