#include <stdio.h>
#include <string.h>

const char* getCountryAbbreviation(const char* country) {
    if (strcmp(country, "United States") == 0) {
        return "USA";
    } else if (strcmp(country, "United Kingdom") == 0) {
        return "UK";
    } else if (strcmp(country, "Canada") == 0) {
        return "CAN";
    }
    // Add more countries and their abbreviations as needed...

    // If the country is not found in the above cases, return NULL
    return NULL;
}

int main() {
    const char* countryName = "United States";
    const char* abbreviation = getCountryAbbreviation(countryName);
    
    if (abbreviation != NULL) {
        printf("The abbreviation for %s is %s\n", countryName, abbreviation);
    } else {
        printf("Country abbreviation not found for %s\n", countryName);
    }

    return 0;
}
