#include <stdio.h>

int main() {
    char name = 'O';         //เพิ่มตัวอักษรตัวแรกของชื่อ
    int age = 18;            //เพิ่มอายุ
    double weight = 83.00;   //เพิ่มนํ้าหนัก

    printf("Student %c is %d years old.\n", name, age);       // แสดงข้อความบรรทัดแรก: ชื่อและอายุ
    printf("His weighs is %.1f kg.\n", weight);               // แสดงข้อความบรรทัดที่สอง: น้ำหนัก

    return 0;
}