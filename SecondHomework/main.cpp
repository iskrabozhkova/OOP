#include <iostream>
#include "JSONArray.h"
#include "JSONObject.h"

int main() {
	JSONObject<int> first("years: ", 6);
	JSONObject<double> second("number: ", 6);
	JSONObject<int> third("object: ", 15);

	JSONArray<int> arr;

	arr.addObject("years", 6);
	arr.addObject("number", 6);
	arr.addObject("object", 15);

	int result = arr.returnValue("number");
	std::cout << result;

	arr.writeInFile();
	return 0;
}
