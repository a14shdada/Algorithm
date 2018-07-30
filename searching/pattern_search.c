#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int pattern_search(char *text, char *pattern)
{
	int i,j,t, p;
	t = strlen(text);
	p = strlen(pattern);
	for(i=0; i<=(t-p); i++){
		j = 0; 
		while(j<p && text[i+j] == pattern[j])
			j = j + 1;
		if (j == p)
			return i;
	}
	return -1;
	
}

int main()
{
	int index;
	FILE *fp; 
	char *text;
	fp = fopen("./textfile.txt", "rb");
	fseek(fp, 0, SEEK_END);
	long fsize = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	text = (char *)calloc(1, fsize + 1);
	fread(text, fsize, 1, fp);
	text[fsize] = 0;
	fclose(fp);
	index = pattern_search(text, "return");
	if (index != -1) 
		printf("Pattern found at index:%d\n", index);
	else
		printf("Pattern not found\n");
	return 0;

}

