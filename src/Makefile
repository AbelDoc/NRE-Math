OBJ = $(OBJDIR)NRE_Main.o 
OBJDIR = ../obj/

MATH = Math

all : childs $(OBJ)

childs:
	@(cd $(MATH) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)