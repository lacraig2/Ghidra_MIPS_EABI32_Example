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

int ten_args(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j){
    return a+b+c+d+e+f+g+h+i+j;
}

int eleven_args(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k){
    return a+b+c+d+e+f+g+h+i+j+k;
}

float float_ret(int a){
    return (float)a*1.0;
}

double double_ret(int a){
    return (double)a*1.0;
}

char string[] = "hello_world";

char* ret_ptr(int a){
    return &string[a];
}

int va_test ( const char * format, ... ){
    return 0;
}

int __start(int argc, char** argv, char** envp){
    int a = 0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9, k=10;
    int res_1 = one_arg(a);
    int res_2 = two_args(a,b);
    int res_3 = three_args(a,b,c);
    int res_4 = four_args(a,b,c,d);
    int res_5 = five_args(a,b,c,d,e);
    int res_6 = six_args(a,b,c,d,e,f);
    int res_7 = seven_args(a,b,c,d,e,f,g);
    int res_8 = eight_args(a,b,c,d,e,f,g,h);
    int res_9 = nine_args(a,b,c,d,e,f,g,h,i);
    int res_10 = ten_args(a,b,c,d,e,f,g,h,i,j);
    int res_11 = eleven_args(a,b,c,d,e,f,g,h,i,j,k);
    float fl = float_ret(1);
    double dbl = double_ret(1);
    char* cptr = ret_ptr(b);
    int va0 = va_test(cptr);
    int va1 = va_test(cptr,b);
    int va2 = va_test(cptr,b,c,d);
    int va3 = va_test(cptr,b,c,d,e);
    int va4 = va_test(cptr,b,c,d,e,f);

    return 0;
}