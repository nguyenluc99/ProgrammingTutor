#include "../header.h"
#define MA_ROWS 4
#define MA_COLS 5
#ifdef _WIN32_
int getSth0(){
    //
};
#elif __GNUC__
int getSth0(){
    // .//
    return 0;
};
#elif
int getSth0(){
    .//
};
#endif
int abc[100] = {1, 2, 3};


typedef struct Student
{
    //?
    int age; // 4
    char* name; // 4 + 8
    char ch;  // +1
    double grade; // 7 + 8
    char ch2;   // 1 + 7
    // 33 -> 40

    // // 24 bytes
    // char* name; // 8
    // int age; // 4
    // char ch; // 1
    // char ch2; //1
    // double grade; // 2 + 8
} Student;

void printStInfor(Student st)
{
    int x = 1;
    printf("Name: %s, age: %d, grade: %.1lf\n", st.name, st.age, st.grade);
    printf("x is %d\n", x);
}
int getAge(Student st)
{
    int age = st.age;
    return age;
}

typedef struct Node
{
    bool isBoom; // true means this slot contain boom.
    int numBoomAround; // number of booms nearby
    bool isHidden; // true means has not been explored
} Node;

int main()
{
    Node matrix[MA_ROWS][MA_COLS];

    for (int i = 0; i < MA_ROWS; i++)
    {
        for (int j = 0; j < MA_COLS; j++)
        {
            printf("%d ")
        }
    }
    int st = getSth0();

    // int num;
    // Student Vinh;
    // Vinh.name = "Nguyen Thi Vinh";
    // Vinh.age = 18;
    // Vinh.grade = 9.5;
    // printStInfor(Vinh);
    // printf("address of num %p, Vinh %p\n", &num, &Vinh);

    // // printf("Size of char* %lu\n", sizeof(char*));
    // // printf("Size of int %lu\n", sizeof(int));
    // // printf("Size of double %lu\n", sizeof(double));
    // // printf("Size of char %lu\n", sizeof(char));
    // // printf("Size of Student %lu\n", sizeof(Student));

    // Student *Huy = (Student*) malloc(sizeof(Student));
    // Student *Huy2 = (Student*) malloc(sizeof(Student));
    // // int* num = (int*) malloc(sizeof(int)); //
    // Huy->name = "Huy zz ";
    // Huy->age = 20;
    // Huy->grade = 8;
    // printf("address of Huy %p\n", Huy);
    // printf("address of Huy2 %p\n", Huy2);
    // int age = getAge(*Huy);

    return 0;
}

