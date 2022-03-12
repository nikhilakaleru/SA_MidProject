// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the RENEW_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// RENEW_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef RENEW_EXPORTS
#define RENEW_API __declspec(dllexport)
#else
#define RENEW_API __declspec(dllimport)
#endif

// This class is exported from the dll
class RENEW_API CRenew {
public:
	CRenew(void);
	void printRenewContent();
	// TODO: add your methods here.
};

extern RENEW_API int nRenew;

RENEW_API int fnRenew(void);
