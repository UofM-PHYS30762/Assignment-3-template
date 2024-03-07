#include<iostream>
#include<string>
#include<cmath>

#include "particle.h"

// Member functions for particle

void particle::print_data() const
{
    std::cout.precision(3);
    std::cout << "Particle [type, mass, charge, velocity, beta] : " << get_particle_type() << ","
    << get_rest_mass() << "," << get_charge() << "," << get_velocity() << "," << get_beta() << "," << std::endl;
    
}