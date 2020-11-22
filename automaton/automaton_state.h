/**
 * @file state.h
 * @author Miqueas (Sozhia) Garcia Gonzalez
 * CONTACT: sozhia.business@gmail.com
 * @brief states 
 * @version 1.0
 * @date 2020-11-21
 * COLLEGE: Universidad de la Laguna
 * DEGREE: Computer Science
 * SUBJECT: CYA
 * REFERENCE: https://github.com/Sozhia/lib
 */
#include <vector>

class AutomatonState {
 private:
  unsigned int q_; // Identifier
  bool final_; // Final state
  bool start_; // Initial state
  std::vector<std::pair<char,unsigned int>> table_; // Input stimulation(s) & Next state(s) id
 public:
 /**
  * @brief Construct a new Automaton State object default
  * 
  */
  AutomatonState();
  AutomatonState(unsigned int id, bool final, bool initial); // Beneath
  /**
   * @brief Return 
   * 
   * @return true if it is final
   * @return false if it is not final
   */
  bool GetFinal() {return final_;}
  /**
   * @brief Return
   * 
   * @return true if it is start
   * @return false if it is not start
   */
  bool GetStart() {return start_;}
  /**
   * @brief Set an Input stimulation and next state
   * 
   * @param c stimulation
   * @param id next state
   */
  void SetInput(char c, unsigned int id) {table_.push_back(std::make_pair(c,id));}
  /**
   * @brief Get the state Id (qn)
   * 
   * @return unsigned int Id
   */
  unsigned int GetId() {return q_;}
  /**
   * @brief Set the state Id (qn)
   * 
   * @param id state Id
   */
  void SetId(unsigned int id) {q_ = id;}
  /**
   * @brief Set final_ to true if it is final state
   * 
   * @param f 
   */
  void SetFinal(bool f) {final_ = f;}
  /**
   * @brief Set start_ to true if it is initial state
   * 
   * @param s 
   */
  void SetStart(bool s) {start_ = s; q_ = 0;}
};
/**
   * @brief Construct a new Automaton State object
   * 
   * @param id State id qn where n = identifier: {q1, q2, q3, ...}
   * @param initial Is it an initial state?
   * @param inputs Is it a final state?
   * @param output Next state
   */
AutomatonState::AutomatonState(unsigned int id, bool final, bool initial) {
  q_ = id;
  if (final)
    SetFinal(1);
  
  if (initial)
    SetStart(1);
}