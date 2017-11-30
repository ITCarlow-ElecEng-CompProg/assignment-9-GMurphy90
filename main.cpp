/** Sphere Caculation
 *  Computer Programming
 *  C00187998
 *  Gerard Murphy
 *  06/11/17
 */

#include <iostream>
#include <math.h>/**< preprocessor directives */

using namespace std;

void SphereCalc(double rad,double *ptra, double *ptrv);/**< function prototype */

int main()/**< main() function */
{
    cout << "Sphere Calculations" << endl;/**< Title */

    double radius=0, area, volume;/**< variable declarations */
    double *ptr_area, *ptr_volume ;

    ptr_area = &area;
    ptr_volume = &volume;

    while (radius <=0)/**< while loop */
    {
       cout << "Enter a positive value for radius (m):";
       cin >> radius ;
    }

     Sphere(radius, ptr_area, ptr_volume);/**< call SphereCalc function and display result below */

    cout << "The area of the sphere is :" << *ptr_area << endl;
    cout << "The volume of the sphere is :" << *ptr_volume << endl;/**< result displayed */

    return 0;
}


 void Sphere(double rad, double *ptra, double *ptrv)/**< Sphere function and calcutions below */
 {


     *ptra = 4 * M_PI* pow(rad,2);
     *ptrv = (4/3)* M_PI* pow(rad,3);

     return;

 }
