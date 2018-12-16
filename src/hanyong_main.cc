/******************************************************************************/
/*  Author: Jonathan Wong                                                     */
/*  Email:  jonathan.li.wong@gmail.com                                        */
/******************************************************************************/
#include <cassert>
#include <iostream>
#include <string>

#include "hanyong_ctx.h"

void process_options(int argc, char** argv) {
  (void)argc;
  (void)argv;

  /* use getopt here */
}

int main(int argc, char* argv[]) {
  hanyong::hanyong_ctx* ctx = hanyong::hanyong_ctx::context();
  ::process_options(argc, argv);

  (void)ctx;

  std::cout << "hanyong begin!" << std::endl;
  return 0;
}
