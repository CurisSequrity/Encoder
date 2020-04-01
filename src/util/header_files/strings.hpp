#pragma once

#include <iostream>

long long Sizeof(std::string* data) {
    // long long size = 0;
	//     while(true) {
	// 	    if (data->size != '\0') {
	// 	    	size++;
	// 	    }
	// 	    else {
	// 		    break;
	// 	    }
	//     }
	    return data->length();
}