// //single string
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int roll;
//     int mark;
// };
// int main()
// {
//     int n; cin>>n;
//     student a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i].name>>a[i].roll>>a[i].mark;
//     }
//     for(i=0 ; i<n ; i++){
//         cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
//     }
//     return 0;
// }



// //string(with space)
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int roll;
//     int mark;
// };
// int main()
// {
//     int n; cin>>n;
//     student a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin.ignore();
//         getline(cin,a[i].name);
//         cin>>a[i].roll>>a[i].mark;
//     }
//     for(i=0 ; i<n ; i++){
//         cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
//     }
//     return 0;
// }



// //minimum marks(just the integer)
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int cls;
//     int mark;
// };
// int main()
// {
//     int n; cin>>n;
//     student a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i].name>>a[i].cls>>a[i].mark;
//     }
//     int mn=INT32_MAX;
//     for(i=0 ; i<n ; i++){
//         mn=min(a[i].mark,mn);
//     }
//     cout<<mn;
//     return 0;
// }



// //minimum marks(full object)
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int cls;
//     int mark;
// };
// int main()
// {
//     int n; cin>>n;
//     student a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i].name>>a[i].cls>>a[i].mark;
//     }
//     student mn;
//     mn.mark=INT32_MAX;
//     for(i=0 ; i<n ; i++){
//         if(a[i].mark<mn.mark){
//             mn=a[i];
//         }
//     }
//     cout<<mn.name<<" "<<mn.cls<<" "<<mn.mark;
//     return 0;
// }



// //sort object(assending)
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int cls;
//     int mark;
// };
// bool cmp(student l , student r)
// {
//     if(l.mark<r.mark){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main()
// {
//     int n; cin>>n;
//     student a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i].name>>a[i].cls>>a[i].mark;
//     }
//     sort(a,a+n,cmp);
//     for(i=0 ; i<n ; i++){
//         cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].mark<<endl;
//     }
// }


// //sort object(assending)
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int cls;
//     string sec;
//     int id;
//     int n1;
//     int n2;
// };
// bool cmp(student l , student r)
// {
//     return l.n2<r.n2;
// }
// int main()
// {
//     int n; cin>>n;
//     student a[n];
//     int i;
//     for(i=0 ; i<n ; i++){
//         cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].n1>>a[i].n2;
//     }
//     sort(a,a+n,cmp);
//     for(i=0 ; i<n ; i++){
//         cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].n1<<" "<<a[i].n2<<endl;
//     }
// }