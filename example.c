int one_arg(int a){
    return a;
}

int two_args(int a, int b){
    return a+b;
}

int three_args(int a, int b, int c){
    return a+b+c;
}

int four_args(int a, int b, int c, int d){
    return a+b+c+d;
}

int five_args(int a, int b, int c, int d, int e){
    return a+b+c+d+e;
}

int six_args(int a, int b, int c, int d, int e, int f){
    return a+b+c+d+e+f;
}

int seven_args(int a, int b, int c, int d, int e, int f, int g){
    return a+b+c+d+e+f+g;
}

int eight_args(int a, int b, int c, int d, int e, int f, int g, int h){
    return a+b+c+d+e+f+g+h;
}

int nine_args(int a, int b, int c, int d, int e, int f, int g, int h, int i){
    return a+b+c+d+e+f+g+h+i;
}

int __start(int argc, char** argv, char** envp){
    int a = 0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8;
    int res_1 = one_arg(a);
    int res_2 = two_args(a,b);
    int res_3 = three_args(a,b,c);
    int res_4 = four_args(a,b,c,d);
    int res_5 = five_args(a,b,c,d,e);
    int res_6 = six_args(a,b,c,d,e,f);
    int res_7 = seven_args(a,b,c,d,e,f,g);
    int res_8 = eight_args(a,b,c,d,e,f,g,h);
    int res_9 = nine_args(a,b,c,d,e,f,g,h,i);
    return 0;
}