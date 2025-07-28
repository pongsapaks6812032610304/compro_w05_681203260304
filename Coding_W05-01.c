#include <stdio.h> 

int main() {                                                                             
    char name = 'O'; // ใช้ char สำหรับตัวอักษรเดียว
    int age = 18; // ใช้int สำหรับอายุ
    float weight = 55.5; // ใช้ foiat สำหรับน้ำหนัก

    printf("\nstudent %c is %d year old.\n", name, age); // %c แสดงตัวอักษร 1 ตัว และ %d แสดงจำนวนเต็ม
    printf("His weings is %.1f kg.\n", weight); // %.1f คือการแสดงทศนิยม 1 ตำแหน่ง

    return 0;
}
