#include<stdio.h>
#include<limits.h>

int main()
{
	printf("-----------------------------------------------------------------------------------------------------------\n");
	printf("Data Type	                FS	          Size        Range	\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
	printf("char                        %%c            %d         %dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("Unsigned char               %%c            %d         %dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("Short int                   %%hd            %d         %dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("Unsigned Short int          %%hu            %d         %dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("int                         %%d            %d         %dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("Unsigned int                %%u            %d         %dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("Long int                    %%u            %d         %dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("Unsigned long int           %%lu            %d         %dto%d    \n",sizeof(char),SCHAR_MIN,SCHAR_MAX);


}


