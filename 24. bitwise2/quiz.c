/*
 #define __USE_MINGW_ANSI_STDIO 1
 #include <stdio.h>
  
 int main()
 {
     unsigned char flag = 16;
     unsigned char num1, num2;
  
     scanf("%hhu %hhu", &num1, &num2);
  
     flag |= num1 << 3;
     flag &= ~(num2 >> 2);
     flag ^= 1<<7;
  
     printf("%u\n", flag);
  
     return 0;
 }

 */
