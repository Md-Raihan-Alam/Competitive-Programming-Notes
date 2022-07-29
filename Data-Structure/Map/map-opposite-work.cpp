#include<iostream>
#include<map>
#include<cstdlib>
#include<cstring>
using namespace std;
class word{
    char str[20];
public:
    word(){strcpy(str,"");}
    word(char *s){strcpy(str,s);}
    char *get(){return str;}
};
//must define less than relative to word objects
bool operator<(word a,word b)
{
    return strcmp(a.get(),b.get())<0;
}
class opposite{
    char str[20];
    public:
    opposite(){strcmp(str," ");}
    opposite(char *s){strcpy(str,s);}
    char *get(){return str;}
};
int main()
{
    map<word,opposite> m;
    //put words and opposites into map
    m.insert(pair<word,opposite>(word("yes"),opposite("no")));
    m.insert(pair<word,opposite>(word("good"),opposite("bad")));
    m.insert(pair<word,opposite>(word("left"),opposite("right")));
    m.insert(pair<word,opposite>(word("up"),opposite("down")));
    //given a word,find the opposite
    char str[80];
    cout<<"Enter word:";
    cin>>str;
    map<word,opposite>::iterator p;
    p=m.find(word(str));
    if(p!=m.end())
        cout<<"Opposite:"<<p->second.get();
    else
        cout<<"Word not in map\n";
    return 0;
}