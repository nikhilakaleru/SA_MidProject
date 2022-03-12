// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LIBRARYMANAGEMENT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LIBRARYMANAGEMENT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LIBRARYMANAGEMENT_EXPORTS
#define LIBRARYMANAGEMENT_API __declspec(dllexport)
#else
#define LIBRARYMANAGEMENT_API __declspec(dllimport)
#endif

// This class is exported from the dll
class LIBRARYMANAGEMENT_API CLibraryManagement {
public:
	CLibraryManagement(void);
	void printLibraryMngmt();
	// TODO: add your methods here.
};


extern LIBRARYMANAGEMENT_API int nLibraryManagement;

LIBRARYMANAGEMENT_API int fnLibraryManagement(void);
