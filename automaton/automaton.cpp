/**
 * @file automaton.cpp
 * @author Miqueas (Sozhia) Garcia Gonzalez
 * CONTACT: sozhia.business@gmail.com
 * @brief Automaton class definition
 * @version 1.0
 * @date 2020-11-21
 * COLLEGE: Universidad de la Laguna
 * DEGREE: Computer Science
 * SUBJECT: CYA
 * REFERENCE: https://github.com/Sozhia/lib
 */
#include "./automaton.h"

/**
 * @brief Parameterized Automaton constructor  
 * 
 * @param alphabet finite set of input symbols
 * @param states_number number of states
 */
Automaton::Automaton(Alphabet &alphabet, unsigned int states_number) {
  alphabet_ = alphabet;
  states_ = new AutomatonState[states_number];
}
// DISEÑARLO POR TILES = 10/10 NO SEAS VAGO HDP
void Automaton::PrintAutomaton() {

}

