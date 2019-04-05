OBJ = $(OBJDIR)NRE_BezierCurve4D.o 
OBJDIR = ../../../../../obj/Math/Curve/Bezier/4D/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)