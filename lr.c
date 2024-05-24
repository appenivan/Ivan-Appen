#include"lr.h"
#include<stdio.h>
int lab1(){
float L, v1, v2, t; // искомое расстояние между пунктами, скорость машины, скорость мотоцикла, время встречи
printf ("v1=");// вывод на экран подсказки: v1=
scanf("%f",&v1); // ввод с клавиатуры значения переменной v1
printf ("v2=");// вывод на экран подсказки: v2=
scanf("%f",&v2); // ввод с клавиатуры значения переменной v2
printf ("t=");// вывод на экран подсказки: t=
scanf("%f",&t); // ввод с клавиатуры значения переменной t
L=(v1+v2)*t; // формула для рассчета расстояния
printf("distance = %f",L); // вывод на экран значения переменной L
return 0;
}

int lab1_1 ()
{
    float L, v1, v2, t;
    printf ("v1=\tv2=\tt=\n");
    scanf("%f %f %f", &v1, &v2, &t);
    L=(v1+v2)*t;
    printf("distance = %f",L);
    return 0;
}


int lab2()
{
    float s; // сумма ряда
    float a; // очередной элемент ряда
    int n; // число элементов ряда
    float i; //Номер очередного элемента ряда
    int z; // знак элемента
    int st; //
    printf("n=");
    scanf("%d", &n);
    s=0;
    z=1;
    i=0;
    st=1;
    while(i<n)
    {
        a=(i+1)/st;
        s=s+a*z;
        z=-z;
        i=i+1;
        st=st*2;
    }
    printf("s= %f",s);
    return 0;
}

int lab2_1()
{
    float eps;
    float s; // сумма ряда
    float a; // очередной элемент ряда
    int n; // число элементов ряда
    float i; //Номер очередного элемента ряда
    int z; // знак элемента
    int st;
    int znam;
    printf("n=");
    scanf("%d", &n);
    printf("eps=");
    scanf("%f",&eps);
    s=0;
    znam=1;
    z=1;
    i=0;
    st=1;
    while(i<n)
    {
        if (((n/2)+1)/znam>eps)
        {
            a=(i+1)/st;
            s=s+a*z;
            z=-z;
            i=i+1;
            st=st*2;
            znam=znam*2;
        }
        else break;
    }
    printf("s= %f",s);
    return 0;
}


int lab3()
# define YES 1
# define NO 0
{
    int counter, found, flag; // found-индикатор того, что искомый признак обнаружен; flag-признак слова
    char c;
    counter = found= 0;
    flag=NO;
    while ((c=getchar())!='.')
    {
        if ((c==' ')||(c==',')||(c=='\n'))
        {
            flag=NO;
        }
        else
        {
            if ((flag==YES) && (c==found))
            {
                counter++;
                flag=NO;
            }
            else
            flag=YES;
            found=c;
        }
    }
    printf("N=%d\n", counter);
    return 0;
}

#define YES 1
#define NO 0
int lab3_1( )
{
    int c; // текущий символ из потока
    int prev_c; // предыдущий символ
    int flag; // признак слова
    int cnt; // счётчик
    int found; // индикатор того, что искомый признак
    cnt = 0;
    flag = NO;
    found = NO;
    prev_c = ' ';
    while( (c = getchar()) != '.' )
     {
         if( c == ' ' || c == '.' || c == '\n' || c == ',' )
         {
             if( flag == YES )
             {
                 if( found == YES )
                 {
                     cnt = cnt + 1;
                 }
                 }
                 flag = NO;
         }
         else
         {
         if( prev_c != c )
         found = YES;
         else
         found = NO;
         flag = YES;
         }
         prev_c = c;
     }
    printf("number of words = %d\n", cnt );
 return 0;
}


int lab4()
{
    char arr[100],word[100];
    int i=0,j=0, k=0,g=0;
    fgets(arr,sizeof(arr),stdin);
    for(i=0;arr[i]!='\0';i++){
        if((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')){
            word[j++]=arr[i];
        }else{
        word[j]='\0';
        for(k=0;word[k]!='\0';k++){
            if(word[0]=='a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' ||
               word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U'){
                    word[k]='\0';
        }
        }
        printf("%s ", word);
        j=0;
        }
    }

    return 0;
}

int lab4_1()
{
    char arr[100],word[100];
    char glas[12]="aeyuioAEYUIO";
    int i=0,j=0, k=0,g=0,s=0;
    fgets(arr,sizeof(arr),stdin);
    for(i=0;arr[i]!='\0';i++){
        if((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')){
            word[j++]=arr[i];
        }else{
            g=0;
            s=0;
        word[j]='\0';
        for(k=0;word[k]!='\0';k++){
            if(word[k]=='a' || word[k] == 'e' || word[k] == 'i' || word[k] == 'o' || word[k] == 'u' ||
               word[k] == 'A' || word[k] == 'E' || word[k] == 'I' || word[k] == 'O' || word[k] == 'U'){
                  g++;
        }else{
        s++;}
        }
        if(g!=j && s!=j){
        printf("%s ", word);}
        j=0;
        }
    }

    return 0;
}


int lab5()
{
    int arr[10];
    int min=0, max=0;
    printf("enter 10 integers: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < arr[min]) {
            min = i;
        }
        if (arr[i] > arr[max]) {
            max = i;
        }
    }
    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;
    printf("\n result:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

struct data
{double avg;
int min;
int max;
};
int lab5_1()
{
    struct data x;
    x.min=0;
    x.max=0;
    int arr[10];
    printf("enter 10 integers: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < arr[x.min]) {
            x.min = i;
        }
        if (arr[i] > arr[x.max]) {
            x.max = i;
        }
    }
    x.avg = (arr[x.min] + arr[x.max]) / 2;
    int temp = arr[x.min];
    arr[x.min] = arr[x.max];
    arr[x.max] = temp;
    printf("\n result:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("max= %d, min= %d, avg= %.1f",arr[x.min], arr[x.max], x.avg);
    return 0;
}


int lab6()
{
    int N, K;
    printf("Enter the size of the array (N K): ");
    scanf("%d %d", &N, &K);
    int array[N][K];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int min_element = array[0][0];
    int min_row = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (array[i][j] < min_element) {
                min_element = array[i][j];
                min_row = i;
            }
        }
    }

    for (int i = min_row + 1; i < N; i++) {
        for (int j = 0; j < K; j++) {
            array[i][j] = 0;
        }
    }

    printf("The modified array is: \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int lab6_1(){
int n=3,k=3,b,key,c = 0;
    int arr[n][k],array[n*k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            scanf("%d", &arr[i][j]);
        }
    }printf("\n");
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            array[c++] = arr[i][j];
        }
    }
    for (int i = 1; i < n*k; i++) {
        key = array[i];
        b = i - 1;
        while (b >= 0 && array[b] > key) {
            array[b + 1] = array[b];
            b = b - 1;
        }
        array[b + 1] = key;
    }
    c=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            arr[i][j] = array[c++];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
return 0;
}


int lab7()
{
    int n;
    scanf("%d", &n);
    int k = 0;
    int m = 1;
   while (n > 9) {
        int a = n % 10;
        int b = (n / 10) % 10;
        k += m * (10 * a + b);
        m *= 100;
        n /= 100;
    }
    int swap=k + m * n;
    printf("%d", swap);
    return 0;
}
