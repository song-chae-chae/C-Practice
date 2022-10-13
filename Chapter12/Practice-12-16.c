#include <stdio.h>
#include <string.h>

void main() {
	char string[] = "사자/호랑이/곰/토끼/기린/코끼리/낙타";
	char strSeparate[] = "/";
	char* strPos;
	char* context = NULL;

	strPos = strtok_s(string, strSeparate, &context);

	while (strPos != NULL) {
		puts(strPos);
		strPos = strtok_s(NULL, strSeparate, &context);
	}

}