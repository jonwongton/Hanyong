.PHONY: all clean hanyong

HANYONG_HOME = $(abspath .)
INC_DIR      = $(abspath $(HANYONG_HOME)/include)
OBJ_DIR      = $(abspath $(HANYONG_HOME)/obj)
SRC_DIR      = $(abspath $(HANYONG_HOME)/src)

CXX       = g++
CFLAGS    = -std=c++11 -Wall -Werror -Wextra -O0 -g -pthread -fPIC
INC_FLAGS = $(addprefix -I, $(INC_DIR))

HANYONG_TARGET = $(HANYONG_HOME)/hanyong

HANYONG_SRC =           \
        hanyong_ctx.cc  \
        hanyong_main.cc

HANYONG_OBJ = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(basename $(HANYONG_SRC))))

all: hanyong

hanyong: $(HANYONG_TARGET)

$(HANYONG_TARGET): $(HANYONG_OBJ)
	$(CXX) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc | $(OBJ_DIR)
	$(CXX) $(CFLAGS) $(INC_FLAGS) -o $@ -c $<

$(OBJ_DIR):
	@mkdir $@

clean:
	@rm -rf $(HANYONG_TARGET) $(OBJ_DIR)

