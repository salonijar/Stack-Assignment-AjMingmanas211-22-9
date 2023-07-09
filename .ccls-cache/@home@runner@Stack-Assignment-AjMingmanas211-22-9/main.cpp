#include <iostream>
using namespace std;
#include "stack.h"
#include <cstring>

int main(int argc, char argv[]) {
  Stack s;
  /s.push(5);
  s.push(1);
  s.push(7);
  s.push(6);
  s.pop();//6
  s.pop();//7
  s.push(3);
  s.push(4);
 s.pop();//4
  s.pop();//3
  s.pop();//1
    s.pop();//5
    s.pop();
    s.pop(); */
  for (int i=1;i<argc;i++){
    if(argv [i][0]=='x')
  }
  s.pop();
}else
 s.push(atoi(argv[i]));
}
}
#ifndef node_h
#define  node_h
#include <iostream>
using namespace std;

class NODE{
    int data;
    NODE nextPtr;
public:
    NODE(char);
    ~NODE();
  char get_value();
    void set_next(NODE);
    NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(char x){
    data=x;
    nextPtr=NULL;

}
int NODE::get_value(){
    return data;

}

NODE* NODE::get_next(){
    return nextPtr;

}

void NODE::set_next(NODE *t){
     nextPtr=t;

}

NODE::~NODE(){
     cout<<"deleting " <<data<<endl;

}


#endif