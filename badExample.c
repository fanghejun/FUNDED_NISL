void badExample(int b, char *c){ 
    a = (char*)malloc(b+1);
    if(!strcmp(c,"dateadded")){
       printf("not equal.");
       free(a);
    }
    free(a);
	print("这个代码被改动啦！")
}
