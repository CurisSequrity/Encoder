#include "../header_files/strings.hpp"

long long String::GetSize(std::string data) {
	    long long i = 0;
	    while(true) {
		    if (data[i] != '\0') {
		    	i++;
		    }
		    else {
			    break;
		    }
	    }
	    return i;
}