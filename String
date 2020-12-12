#include "stdlib.h"
#include <cassert>

class strings
{
	private:
		int len;
		int memorylen;

	public:
		char* string;

		strings(char* string)
		{
			while (string[len] != '\0') //цикл от начала строки до конца
			{
				len++;
				this->len = len;
			 	memorylen = len * 2;
				this->string = new char[memorylen];
			}
			for (int i = 0; i < len; i++)
			{
				this->string[i] = string[i];
				this->string[len] = '\0';
			}
		}

		strings()
		{
			int len = 10;
			char c = '\0';
			char* first = &c;
		 	memorylen = 2*len;
			string = new char[memorylen];
			string[0] = first[0];
		}

		strings(char c)
		{
		 	memorylen = 10;
			string = new char[memorylen];
			string[0] = c;
			string[1] = '\0';
			len = 1;
		}

		strings()
		{
			delete[] string;
		}

		char operator[](int index)
		{
			assert(index >= 0 and index < len);
			return string[index];	
		}

		int length()
		{
			return this->len;
		}
	
		int countRepitChar(char c)
		{
			int count = 0;
			for (int i = 0; i < len; i++)
			{
				if (string[i] == c)
					count++;
			}
			return count;
		}

		int findFirstOfstr(char c)
		{
			int pos = -1;
			for (int i = 0; i < len; i++)
			{
				if (string[i] == c)
				{
					pos = i;
					break;
				}
			}
			return pos;
		}

	
		void operator+=(strings string2)
		{
			int newlen = len + string2.len;

			if ( newlen > memorylen)
			{
			 	memorylen *= 2;
			 	string = (char*) realloc(string, memorylen);
			}
			
			for (int i = 0; i < string2.len; i++)
			{
				string[i + len] = string2[i];
			}
			string[newlen] = '\0';

			len = newlen;
		}
};

