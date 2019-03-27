OBJ = 
OBJDIR = ../../obj/Math/

VECTOR = Vector

all : childs $(OBJ)

childs:
	@(cd $(VECTOR) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)