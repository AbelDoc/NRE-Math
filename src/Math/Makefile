OBJ = 
OBJDIR = ../../obj/Math/

MATRIX = Matrix
VECTOR = Vector

all : childs $(OBJ)

childs:
	@(cd $(MATRIX) && $(MAKE))
	@(cd $(VECTOR) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)