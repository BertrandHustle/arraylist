CC = g++
DEPS = append.ut.cpp capacity.ut.cpp copy.ut.cpp extend.ut.cpp insert.ut.cpp prepend.ut.cpp remove.ut.cpp toString.ut.cpp valueAt.ut.cpp
OBJ = append.ut.o capacity.ut.o copy.ut.o extend.ut.o insert.ut.o prepend.ut.o remove.ut.o toString.ut.o valueAt.ut.o
TARGET = ../arraylist.cpp
LDFLAGS := -L/usr/lib -lgtest -lgtest_main -pthread 
TEST_DIR = ./testBinaries

%.o: %.c $(DEPS)
	$(CC) -c -o $(TEST_DIR)/$@ $< /usr/lib/libgtest.a /usr/lib/libgtest_main.a $(LDFLAGS)

test: $(OBJ)
	$(CC) -o $(TEST_DIR)/$@ $^ /usr/lib/libgtest.a /usr/lib/libgtest_main.a $(LDFLAGS)