// //Basic Class & Object
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     char name[100];
//     int roll;
//     double gpa;
// };
// int main()
// {
//     student a;
//     char temp[100]="Bashir Shahrier Nahid";
//     strcpy(a.name,temp);
//     a.roll=23;
//     a.gpa=3.43;
//     cout<<a.name<<endl<<a.roll<<endl<<a.gpa;
//     return 0;
// }



// //Class & Object Input
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     char name[100];
//     int roll;
//     double gpa;
// };
// int main()
// {
//     student a,b;
//     cin>>a.name>>a.roll>>a.gpa;
//     cin>>b.name>>b.roll>>b.gpa;
//     cout<<a.name<<endl<<a.roll<<endl<<a.gpa;
//     cout<<b.name<<endl<<b.roll<<endl<<b.gpa;
//     return 0;
// }



// //Full Name
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     char name[100];
//     int roll;
//     double gpa;
// };
// int main()
// {
//     student a,b;
//     cin.getline(a.name,100);
//     cin>>a.roll>>a.gpa;
//     cin.ignore();
//     cin.getline(b.name,100);
//     cin>>b.roll>>b.gpa;
//     cout<<a.name<<endl<<a.roll<<endl<<a.gpa<<endl;
//     cout<<b.name<<endl<<b.roll<<endl<<b.gpa<<endl;
//     return 0;
// }



// //function inside class
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int roll;
//     student(string name,int roll)
//     {
//         this->name=name;
//         this->roll=roll;
//     }
//     void hello()
//     {
//         cout<<"hello from "<<name<<"("<<roll<<")"<<endl;
//     }
// };
// int main()
// {
//     student nahid("bashir shahrier nahid",23);
//     nahid.hello();
//     student jaber("jaber bin huda",22);
//     jaber.hello();
//     return 0;
// }



// //function inside class
// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int roll;
//     int cse;
//     int eee;
//     student(string name,int roll,int cse,int eee)
//     {
//         this->name=name;
//         this->roll=roll;
//         this->cse=cse;
//         this->eee=eee;
//     }
//     void total()
//     {
//         cout<<"total mark of "<<name<<"("<<roll<<")"<<" = "<<cse+eee<<endl;
//     }
// };
// int main()
// {
//     student nahid("bashir shahrier nahid",23,72,95);
//     nahid.total();
//     student jaber("jaber bin huda",22,88,84);
//     jaber.total();
//     return 0;
// }



// //copy dynamic object
// #include<bits/stdc++.h>
// using namespace std;
// class player
// {
//     public:
//     string country;
//     int jersey;
//     string club;
//     player(string country , int jersey , string club)
//     {
//         this->country=country;
//         this->jersey=jersey;
//         this->club=club;
//     }
// };
// int main()
// {
//     player* vini=new player("brazil",7,"real madrid");
//     player* yamal=new player("spain",10,"barcelona");
//     cout<<"before copy :"<<endl;
//     cout<<vini->country<<" "<<vini->jersey<<" "<<vini->club<<endl;
//     cout<<yamal->country<<" "<<yamal->jersey<<" "<<yamal->club<<endl;
//     *vini=*yamal;
//     cout<<"after copy :"<<endl;
//     cout<<vini->country<<" "<<vini->jersey<<" "<<vini->club<<endl;
//     return 0;
// }