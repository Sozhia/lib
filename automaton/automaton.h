/**
 * @file automaton.h
 * @author Miqueas (Sozhia) Garcia Gonzalez
 * CONTACT: sozhia.business@gmail.com
 * @brief {Σ, Q, q0, F, δ} Automaton attributes
 * Σ : finite set of input symbols
 * Q : finite set of states
 * q0 : initial (or start) state
 * F : set of states distinguished as accepting (or final) states
 * δ : transition function
 * @version 1.0
 * @date 2020-11-21
 * COLLEGE: Universidad de la Laguna
 * DEGREE: Computer Science
 * SUBJECT: CYA
 * REFERENCE: https://github.com/Sozhia/lib
 */
#include "../set/alphabet.h"
#include "../set/word.h"
#include "./automaton_state.h"

class Automaton {
 private:
  std::vector <char> stimulations_; // Stimulations expected in this automaton 
  Alphabet alphabet_; // finite set of input symbols
  AutomatonState* states_; // finite set of states
  AutomatonState initial_state_; // initial (or start) state
  AutomatonState* accepting_; // set of states distinguished as accepting (or final) states
  
 public:
  Automaton();
  Automaton(Alphabet &alphabet, unsigned int states_number);
  void PrintAutomaton();
  void SetAutomatonState ();
  
};