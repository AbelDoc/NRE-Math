OBJ = $(OBJDIR)NRE_Main.o 
OBJDIR = ../obj/

HEADER = Header
MATH = Math

all : childs $(OBJ)

childs:
	@(cd $(HEADER) && $(MAKE))
	@(cd $(MATH) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)