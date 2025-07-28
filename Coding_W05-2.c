#include <stdio.h>

int main() {
    // ประกาสตัวปร
    char name[30]; // ตัวแปร char สำหรับเก็บชื่อแบบ string 
    int age; // ตัวแปร int สำหรับเก็บอายุจำนวนเต็ม
    float height; // ตัวแปร floae สำหรับเก็บส่วนสูงทศนิยม
    char subject; // ตัวแปร char สำหรับเก็บวิชา
    float gpa; // ตัวแปร float สำหรับเก็บคะแนน
    char grade; // ตัวแปร char สำหรับเก็บเกรดตัวอักษร

    printf("Enter your name, age, height, (e.g. P 18 170): "); // แสดงข้อความให้ผู้ใช้ป้อนข้อมูล
    scanf("%s %d %f", name, &age, &height); // รับค่าจากผู้ใช้ โดยใช้ scanf เก็บข้อมูล, ชื่อ, อายุ และส่วนส่วง
    // %s สำหรับ string, %d สำหรับจำนวนเต็ม, %f สำหรับทศนิยม & .= ใช้เพื่อส่งที่อยู่ของตัวแปรไปยัง scanf

    printf("Enter your  subject, gpa, grade (e.g. C 3.50 A): "); // แสดงข้อความให้ผู้ใช้ป้อนข้อมูล
    scanf(" %c %f %c", &subject, &gpa, &grade); // รับค่าจากผู้ใช้ โดยใช้ scanf

    printf("\n%s is %d yers old and %.1f centimeters tall.\n", name, age, height); // แสดงผลข้อมูลที่รับมา
    printf("In subject %c, %s got %.2f which is symbolized as \'%c\'.\n", subject, name, gpa, grade); 
    // แสดงผลข้อมูลที่รับมาวิชา, ชื่อ, คะแนน และเกรดตัวอักษร
    return 0; // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}