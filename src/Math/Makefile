OBJ = 
OBJDIR = ../../obj/Math/

FRUSTUM = Frustum
MATRIX = Matrix
PLANE = Plane
QUATERNION = Quaternion
SEGMENT = Segment
VECTOR = Vector

all : childs $(OBJ)

childs:
	@(cd $(FRUSTUM) && $(MAKE))
	@(cd $(MATRIX) && $(MAKE))
	@(cd $(PLANE) && $(MAKE))
	@(cd $(QUATERNION) && $(MAKE))
	@(cd $(SEGMENT) && $(MAKE))
	@(cd $(VECTOR) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)