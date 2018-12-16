/******************************************************************************/
/*  Author: Jonathan Wong                                                     */
/*  Email:  jonathan.li.wong@gmail.com                                        */
/******************************************************************************/
#ifndef __HANYONG_CTX_H__
#define __HANYONG_CTX_H__

#include <string>

namespace hanyong {

class hanyong_ctx {
 public:
  static hanyong_ctx* context();
  ~hanyong_ctx();

  /* getters */
  std::string input_file_name() const;
  std::string output_file_name() const;

  /* setters */
  void input_file_name(const char*);
  void input_file_name(const std::string&);
  void output_file_name(const char*);
  void output_file_name(const std::string&);

 private:
  hanyong_ctx();

  std::string m_input_file_name;
  std::string m_output_file_name;
};

}; /* namespace hanyong */

#endif /* __HANYONG_CTX_H__ */
