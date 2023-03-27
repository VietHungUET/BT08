A4

int main()  {

   char **s;

   char foo[] = "Hello World";

   *s = foo;  ->Lỗi *s truy cập vào vùng nhớ không xác định

   printf("s is %s\n",s);

   s[0] = foo; ->Lỗi s chưa khởi tạo

   printf("s[0] is %s\n",s[0]);

   return(0);

}
