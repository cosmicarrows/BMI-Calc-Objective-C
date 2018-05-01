//
//  main.c
//  BMICalc
//
//  Created by Laurence Wingo on 12/9/12.
//  Copyright (c) 2012 Laurence Wingo. All rights reserved.
//

#include <stdio.h>



typedef struct{
    float heightInMeters;
    int weightInKilos;
} Person;


float bodyMassIndex(Person j){
    return j.weightInKilos / (j.heightInMeters * j.heightInMeters);
}




int main(int argc, const char * argv[])





{
    
    Person personA;
    personA.weightInKilos = 96;
    personA.heightInMeters = 1.8;
    float bmi = bodyMassIndex(personA);
    printf("person has a BMI of %.2f\n", bmi);
    printf("person A weighs %i kilograms\n", personA.weightInKilos);
    printf("person A is %.2f meters tall\n", personA.heightInMeters);
    return 0;

}

