#include "s3e.h"
#include "IwGx.h"
#include "Iw2D.h"

// "main" is the S3E entry point
int main() {
	// to exit correctly, applications should poll for quit requests
	while(!s3eDeviceCheckQuitRequest())	{
		
		s3eDebugOutputString("Hello!");
		// S3E applications should yield frequently
		s3eDeviceYield();
	}

	return 0;
}
