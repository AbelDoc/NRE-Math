OBJ = 
OBJDIR = ../../obj/Math/

MATRIX = Matrix
QUATERNION = Quaternion
VECTOR = Vector

all : childs $(OBJ)

childs:
	@(cd $(MATRIX) && $(MAKE))
	@(cd $(QUATERNION) && $(MAKE))
	@(cd $(VECTOR) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)