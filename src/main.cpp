#include <pole_detector.h>
int main(int argc, char const *argv[])
{
	if ( argc != 5 ) // argc should be 5 for correct execution
		cout<<"usage: "<< argv[0] <<" <path to pcd file> <maxDistanceStitches>  <minPoleHeight> <maxDistanceTrees>\n";
	else {
		PCLPoleDetector* poleDetector = new PCLPoleDetector;
		poleDetector->algorithmSingleCut(argv[1], atof(argv[2]), atof(argv[3]), atof(argv[4]));
	}

	return 0;
}