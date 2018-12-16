/******************************************************************************/
/*  Author: Jonathan Wong                                                     */
/*  Email:  jonathan.li.wong@gmail.com                                        */
/******************************************************************************/
#ifndef __WORD_H__
#define __WORD_H__

#include <string>

class Word {
 public:
  virtual void formal_conjugate() const;

 private:
  std::string m_word;
};

class Irregular : public Word {

// shiot
// tiguet
// pieup
// eu
// rieul
// rue

  // polite, informal, formal conjugations

};

