/******************************************************************************/
/*  Author: Jonathan Wong                                                     */
/*  Email:  jonathan.li.wong@gmail.com                                        */
/******************************************************************************/
#include "hanyong_ctx.h"

#include <string>

namespace hanyong {

hanyong_ctx* hanyong_ctx::context() {
  static hanyong_ctx s_ctx;
  return &s_ctx;
}

hanyong_ctx::hanyong_ctx() :
  m_input_file_name(),
  m_output_file_name() {
}

hanyong_ctx::~hanyong_ctx() {
}

std::string hanyong_ctx::input_file_name() const {
  return m_input_file_name;
}

std::string hanyong_ctx::output_file_name() const {
  return m_output_file_name;
}

void hanyong_ctx::input_file_name(const char* path) {
  if (path) {
    m_input_file_name = path;
  } else {
    m_input_file_name.clear();
  }
}

void hanyong_ctx::input_file_name(const std::string& path) {
  m_input_file_name = path;
}

void hanyong_ctx::output_file_name(const char* path) {
  if (path) {
    m_output_file_name = path;
  } else {
    m_output_file_name.clear();
  }
}

void hanyong_ctx::output_file_name(const std::string& path) {
  m_output_file_name = path;
}

} /* namespace hanyong */
