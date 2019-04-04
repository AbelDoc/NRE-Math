OBJ = 
OBJDIR = ../../obj/Math/

MATRIX = Matrix
PLANE = Plane
QUATERNION = Quaternion
VECTOR = Vector

all : childs $(OBJ)

childs:
	@(cd $(MATRIX) && $(MAKE))
	@(cd $(PLANE) && $(MAKE))
	@(cd $(QUATERNION) && $(MAKE))
	@(cd $(VECTOR) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)