#include <iostream>
#include <math.h>
#include "triangle.h"
#include "circle.h"
#include "square.h"
#include "list.h"
#include "list.cpp"
#include "Node.h"
using namespace std;

main(){
    int ans;
    while(true){
        cout << "-----------------" << endl;
        cout << "1) list int"  << endl;
        cout << "2) list float" << endl;
        cout << "3) list 2D shape" << endl;
        cout << "4) exit" << endl;
        cout << "Select: ";
        cin >> ans;

        switch (ans){
            case 1:{
                int n;
                while(true){
                    n = rand()%30;
                    if(n>20){
                        break;
                    }
                }

                list<int*> ilist;
                for(int i=0; i<n; i++){
                    int* s = new int;
                    *s = rand();
                    ilist.add(s);
                }

                ilist.sort();
                ilist.display();
                break;
            }
            //case 2 is list of float
            case 2:{
                int n;
                while(true){
                    n = rand()%30;
                    if(n>20){
                        break;
                    }
                }

                list<float*> flist;
                for(int i=0; i<n; i++){
                    int k = rand()%10;
                    int a = rand()%10;
                    float* s = new float;
                    if(a != 0){
                        *s = (float)k/a;
                    }else if(k != 0){
                        *s = (float)a/k;
                    }else{
                        *s = 0;
                    }
                    flist.add(s);
                }

                flist.sort();
                flist.display();
                break;
            }
            //case 3 is list of shape2D
            case 3:{
                int n;
                while(true){
                    n = rand()%30;
                    if(n>20){
                        break;
                    }
                }

                list<shape2D*> shapelist;
                for(int i=0; i<n; i++){
                    int k = rand()%3;
                    int a = rand()%10+1;
                    switch (k){
                        case 0:{
                            shapelist.add(new triangle(a));
                            break;
                        }
                        case 1:{
                            shapelist.add(new circle(a));
                            break;
                        }
                        case 2:{
                            shapelist.add(new square(a));
                            break;
                        }
                    }
                }

                cout << "shapes: " << n << endl;
                shapelist.sort();
                shapelist.display();
                break;
            }
        }
        if(ans == 4){
            break;
        }
    }
   return 0;
}