#include <stdio.h>   

int main() {      
    char name[31];       // สร้างตัวแปร name เพื่อมาเก็บค่า ชื่อ โดยใช้ String ที่สามารถเก็บได้ 30 ตัวอักษร 
    int age;             // สร้างตัวแปร age เพื่อมาเก็บค่า อายุ โดยใช้ int 
    float height;        // สร้างตัวแปร height เพื่อมาเก็บค่า ส่วนสูง โดยใช้ float 

    char subject;        // สร้างตัวแปร Subject เพื่อมาเก็บค่า ชื่อวิชา โดยใช้ char
    float grade;         // สร้่างตัวแปร grade เพื่อมาเก็บค่า เกรด โดยใช้ float 
    char symbol;         // สร้างตัวแปร Symbol เพื่อมาเก็บค่า เกรดแบบไม่มีประจุ โดยใช้ char 

    char buffer[100];    // สร้างที่พักข้อมมูลชั่วคราวใน Ram สำหรับเก็บข้อความที่ input มาโดย Keyborad ขนาด 100 ตัวอักษร

    printf("Enter name, age, height: ");                        // แสดงข้อความเพื่อให้กรอกข้อมูลของ ชื่อ, อายุ, ส่วนสูง
    fgets(buffer, sizeof(buffer), stdin);                       // ใช้ fgets เพื่ออ้านข้อมูลจาก Keyborad และนำไปเก็บไว้ใน buffer
    sscanf(buffer, "%s %d %f", name, &age, &height);            // รับ ชื่อ(แบบ string ขนาด 30), อายุ(เป็นเลขจำนวนเต็ม), ส่วนสูง(เป็นทศนิยม 1 ตำแหน่ง)

    printf("Enter subject, grade, symbol: ");                   // แสดงข้อความเพื่อให้กรอกข้อมูลของ ตัวอักษรตัวแรกของชื่อวิชา, เกรด, เกดรแบบไม่มีประจุ
    fgets(buffer, sizeof(buffer), stdin);                       // ใช้ fgets เพื่ออ้านข้อมูลจาก Keyborad และนำไปเก็บไว้ใน buffer
    sscanf(buffer, "%c %f %c", &subject, &grade, &symbol);      // รับ ชื่อวิชา(ตัวอักษรพิมพ์ใหญ่ตัวแรกของของวิชา), เกรดที่ได้(เป็นทศนิยม 2 ตำแหน่ง), ตัวอักษร(1 ตัว แทนเกรดแบบไม่มีประจุ)

    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height);                           // แสดงผลลัพธ์ของค่า ชื่อ, อายุ, ส่วนสูง
    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n", subject, name[0], grade, symbol);   // แสดงผลลัพธ์ของค่า ชื่อวิชา, ตัวอักษรตัวแรกของชื่อ, เกรดที่ได้, เกรดแบบไม่มีประจุ

    return 0;           // ทำการ reset ค่าของ code เพื่อสิ้นสุดกระบวนการ
}
