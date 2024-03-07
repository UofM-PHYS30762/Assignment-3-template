#ifndef PARTICLE_H
#define PARTICLE_H

#include<iostream>
#include<string>
#include<cmath>

/*
using std::string;

// Beginning of particle class
class particletemplate
{
private:
  string particle_name;
  //...other data members (see slides on BB)

public:
  // Constructors
  // Here you need a default constructor, and a parameterised constructor

  // Destructor

  // Getter functions (accessors) to 
  // This should include function returning beta value 

  // Setter functions, to change value of data members
  // Make sure you check input validity before changing something
  // Hint: you can use the input checking functions you used in assignment 1

  // Function to print info about a particle
  void print_data();

};


// Beginning of detector class

// Functionalities needed, in addition to constructor/destructor/setters/getters (see slides on BB):
// - write a function that takes a particle 
//   and returns a bool and a print-out on whether this type of detector detected the particle
//   depending on the detector/particle combination (see slides on BB)
// - have data members that keep track of how many particles were detected by this particular detector, 
//   and of which type
// - write a function (accessor) that prints how many particles passed through this detector

// End of detector class

*/

class particle {
private:
    std::string particle_type; // "electron" or "muon"
    double rest_mass; // in MeV
    int charge; // +1 for particles, -1 for antiparticles
    double velocity; // in m/s
    double beta; // velocity/speed_of_light
    const double light_speed = 2.99792458e8; // speed of light

public:
    // Constructors
    particle() = default; 
    particle(std::string type, double mass, int particle_charge, double vel) 
        : particle_type(type), rest_mass(mass), charge(particle_charge), velocity(vel) {
            set_velocity(vel); 
        }
    // Destructor
    ~particle(){}
    //~particle(){std::cout<<"Destoying Particle"<<std::endl;}


    // Setters
    void set_particle_type(const std::string& type) { particle_type = type; }
    void set_rest_mass(double mass) { rest_mass = mass; }
    void set_charge(int particle_charge) { charge = particle_charge; }
    void set_velocity(double vel) { 
        velocity = (vel >= 0 && vel <= light_speed) ? vel : 0;
        beta = velocity / light_speed;
    }

    // Getters
    std::string get_particle_type() const { return particle_type; }
    double get_rest_mass() const { return rest_mass; }
    int get_charge() const { return charge; }
    double get_velocity() const { return velocity; }
    double get_beta() const { return beta; }

    // Print function declared in the particle.cpp
    void print_data() const;
};

//const double Particle::light_speed = 2.99792458e8; const particle &l


#endif