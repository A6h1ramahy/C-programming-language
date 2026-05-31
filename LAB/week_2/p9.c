# include <stdio.h>
int main() 
{
    int mass,velocity,kinetic_energy;

    printf("\n\nMass of the body : ");
    scanf("%d",&mass);

    printf("Velocity of the body : ");
    scanf("%d",&velocity);

    kinetic_energy=0.5*mass*velocity*velocity;
    printf("\nKinetic energy of the body is : %d \n\n",kinetic_energy);

    return 0;
}
