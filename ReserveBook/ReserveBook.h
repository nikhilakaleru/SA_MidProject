// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the RESERVEBOOK_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// RESERVEBOOK_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef RESERVEBOOK_EXPORTS
#define RESERVEBOOK_API __declspec(dllexport)
#else
#define RESERVEBOOK_API __declspec(dllimport)
#endif

// This class is exported from the dll
class RESERVEBOOK_API CReserveBook {
public:
	CReserveBook(void);
	void printTesting();
	// TODO: add your methods here.
};

extern RESERVEBOOK_API int nReserveBook;

RESERVEBOOK_API int fnReserveBook(void);
