OBJ = $(OBJDIR)NRE_BezierCurve3D.o 
OBJDIR = ../../../../../obj/Math/Curve/Bezier/3D/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)