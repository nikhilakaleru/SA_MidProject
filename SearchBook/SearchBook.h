// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the SEARCHBOOK_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// SEARCHBOOK_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SEARCHBOOK_EXPORTS
#define SEARCHBOOK_API __declspec(dllexport)
#else
#define SEARCHBOOK_API __declspec(dllimport)
#endif

// This class is exported from the dll
class SEARCHBOOK_API CSearchBook {
public:
	CSearchBook(void);
	void printSearch();
	// TODO: add your methods here.
};

extern SEARCHBOOK_API int nSearchBook;

SEARCHBOOK_API int fnSearchBook(void);
