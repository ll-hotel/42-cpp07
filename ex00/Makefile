CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
ifneq ("${DEBUG}", "")
	CXXFLAGS := ${DEBUG} ${CXXFLAGS}
endif
NAME = few_fun

SRC_DIR = .
OBJ_DIR = .obj
OBJS = $(patsubst %.cpp,${OBJ_DIR}/%.o,\
	   main.cpp \
	   )

DEPS = $(patsubst %.o,%.d,${OBJS})

.PHONY: all
all: ${NAME}

-include ${DEPS}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJS}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp | ${OBJ_DIR}
	${CXX} ${CXXFLAGS} -o $@ -c $<

${OBJ_DIR}:
	mkdir -p $(sort $(dir ${OBJS}))

.PHONY: clean
clean:
	rm -rf ${OBJ_DIR}

.PHONY: fclean
fclean: clean
	rm -f ${NAME}

.SILENT: re
.PHONY: re
re: fclean
	make --no-print-directory
