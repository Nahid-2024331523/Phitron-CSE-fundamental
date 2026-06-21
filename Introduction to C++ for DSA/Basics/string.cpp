// //Taking Input
// #include<iostream>
// using namespace std;
// int main()
// {
//     char s[100];
//     cin>>s;        //it is like scanf()
//     cout<<s;
//     return 0;
// }



// //Taking Input(Full String)
// #include<iostream>
// using namespace std;
// int main()
// {
//     char s[100];
//     cin.getline(s,100);
//     cout<<s;
//     return 0;
// }



// //getline Problem
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     char s[100];
//     cin.getline(s,100);    //doesn't take input
//     cout<<n<<endl<<s;
//     return 0;
// }



// //ignore Function
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     cin.ignore();
//     char s[100];
//     cin.getline(s,100);
//     cout<<n<<endl<<s;
//     return 0;
// }



// //input without size
// #include<iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     cout<<s;
//     return 0;
// }



// //string increase size automatically
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello";
//     s="hi i am nahid";
//     cout<<s;
//     return 0;
// }



// //string size
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello i am nahid";
//     cout<<s.size();
//     return 0;
// }



// //probable maximum string size
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello i am nahid";
//     cout<<s.size()<<endl;
//     cout<<s.max_size();
//     return 0;
// }



// //string capacity
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello";
//     cout<<s.capacity();
//     return 0;
// }



// //clear string
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello i am nahid";
//     s.clear();
//     cout<<s<<endl<<s.size();
//     return 0;
// }



// //empty string check
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello i am nahid";
//     if(s.empty()==true){
//         cout<<"empty";
//     }
//     else{
//         cout<<"not empty";
//     }
//     return 0;
// }



// //string resize
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello i am nahid";
//     s.resize(4);
//     cout<<s;
//     return 0;
// }



// //string resize
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello";
//     s.resize(9,'x');
//     cout<<s;
//     return 0;
// }



// //element access(a[i])
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     cout<<s[4];
//     return 0;
// }



//element access(at(i))
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     cout<<s.at(2);
//     return 0;
// }



//element access(1st & last)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     cout<<s[0]<<" "<<s[s.size()-1]<<endl;
//     cout<<s.front()<<" "<<s.back();
//     return 0;
// }



// //string append
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1="hello everyone ";
//     string s2="i am nahid";
//     s1+=s2;
//     cout<<s1;
//     return 0;
// }



// //string append
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1="hello everyone ";
//     string s2="i am nahid";
//     s1.append(s2);
//     cout<<s1;
//     return 0;
// }



// //character append
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="nahi";
//     s.push_back('d');
//     cout<<s;
//     return 0;
// }



// //character append
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="nahi";
//     s+='d';
//     cout<<s;
//     return 0;
// }



// //last character delete
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="nahida";
//     s.pop_back();
//     cout<<s;
//     return 0;
// }



// //assign string
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1="i am nahid";
//     string s2="i am from cumilla";
//     s1=s2;
//     cout<<s1;
//     return 0;
// }



// //assign string
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1="i am nahid";
//     string s2="i am from cumilla";
//     s1.assign(s2);
//     cout<<s1;
//     return 0;
// }



// //assign string
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s1="i am nahid";
//     s1.assign("i am from cumilla");
//     cout<<s1;
//     return 0;
// }



// //erase string(specific index to end)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="bashir shahrier";
//     s.erase(6);
//     cout<<s;
//     return 0;
// }



// //erase string(specific index)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="bashir shahrier bhuiyan nahid";
//     s.erase(15,8);
//     cout<<s;
//     return 0;
// }



// //replace string after delete
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="bashir bhuiyan nahid";
//     s.replace(7,7,"shahrier");
//     cout<<s;
//     return 0;
// }



// //replace string without delete
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="bashir nahid";
//     s.replace(7,0,"shahrier ");
//     cout<<s;
//     return 0;
// }



// // insert string
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="bashir nahid";
//     s.insert(6," shahrier");
//     cout<<s;
//     return 0;
// }



// //string element print
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="bashir shahrier nahid";
//     for(int i=0 ; i<s.size() ; i++){
//         cout<<s[i]<<" ";
//     }
//     return 0;
// }



// //string element print
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="bashir shahrier nahid";
//     for(string:: iterator i=s.begin() ; i<s.end() ; i++){
//         cout<<*i<<" ";
//     }
//     return 0;
// }



// //string element print
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="bashir shahrier nahid";
//     for(auto i=s.begin() ; i<s.end() ; i++){
//         cout<<*i<<" ";
//     }
//     return 0;
// }



// //string input with spaces
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     cout<<s;
//     return 0;
// }



// //ignore(getline problem)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin>>n;
//     cin.ignore();
//     string s;
//     getline(cin,s);
//     cout<<s<<endl<<n;
//     return 0;
// }



// //stringstream
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     cout<<s<<endl;
//     stringstream ss(s);
//     string word;
//     ss>>word;
//     cout<<word<<endl;
//     ss>>word;
//     cout<<word<<endl;
//     ss>>word;
//     cout<<word<<endl;
//     return 0;
// }



// //stringstream
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin,s);
//     cout<<s<<endl;
//     stringstream ss(s);
//     string word;
//     int count=0;
//     while(ss>>word){
//         cout<<word<<endl;
//         count++;
//     }
//     cout<<count;
//     return 0;
// }



// //string constructor
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s("hello world");
//     cout<<s;
//     return 0;
// }



// //string constructor
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s("hello world",7);   //take first 7 elements
//     cout<<s;
//     return 0;
// }



// //string constructor
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s("hello world");
//     string s1(s,6);   //take input after 6 elements
//     cout<<s1;
//     return 0;
// }



// //string constructor
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s(10,'n');
//     cout<<s;
//     return 0;
// }



// //string sort
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s("helloworld");
//     sort(s.begin(),s.end());
//     cout<<s;
//     return 0;
// }



// //character print(range based for loop)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s("helloworld");
//     for(char c:s){
//         cout<<c<<endl;
//     }
//     return 0;
// }



// //string reverse
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s("hello world");
//     reverse(s.begin(),s.end());
//     cout<<s;
//     return 0;
// }