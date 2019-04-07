OBJ = 
OBJDIR = ../../obj/Math/

CURVE = Curve
FRUSTUM = Frustum

all : childs $(OBJ)

childs:
	@(cd $(CURVE) && $(MAKE))
	@(cd $(FRUSTUM) && $(MAKE))

$(OBJDIR)%.o :  %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)