PROJ_NAME = contact
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = build

SRC = src/addrecord.c src/deleterecord.c src/modifyrecord.c src/back.c src/printlist.c  src/start.c src/menu.c main.c src/searchrecord.c 

TEST_SRC = src/addrecord.c src/deleterecord.c src/modifyrecord.c src/back.c src/printlist.c  src/start.c src/menu.c src/searchrecord.c test/test.c unity/unity.c

INC = -I inc -I unity
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc $(INC)  $(SRC)  -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))


coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC)  $(INC) -o mani.$(EXEC)
	./mani.$(EXEC)
	gcov -a addrecord.c deleterecord.c modifyrecord.c back.c printlist.c start.c menu.c searchrecord.c


#doc:
#	make doc -C doc
	

staticcheck:
	cppcheck --enable=all .


codesize:
	size $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o test.$(EXEC)
	./test.$(EXEC)
valgrind:
	valgrind ./test.$(EXEC)
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	$(RM) *.gcov 
	$(RM) *.gcda
	$(RM) *.gcno
#	make clean -C doc
