void goodExample(int b, char *c){ 
     a = (char*)malloc(b+1);
     if(!strcmp(c,"dateadded")){
         printf("not equal.");
         free(a);
     }    
     else {
         printf("equal.");
         free(a);
     }
	 print("此文件已经被改动过啦！")
}
