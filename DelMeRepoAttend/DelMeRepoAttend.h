// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DELMEREPOATTEND_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DELMEREPOATTEND_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DELMEREPOATTEND_EXPORTS
#define DELMEREPOATTEND_API __declspec(dllexport)
#else
#define DELMEREPOATTEND_API __declspec(dllimport)
#endif

// This class is exported from the dll
class DELMEREPOATTEND_API CDelMeRepoAttend {
public:
	CDelMeRepoAttend(void);
	// TODO: add your methods here.
};

extern DELMEREPOATTEND_API int nDelMeRepoAttend;

DELMEREPOATTEND_API int fnDelMeRepoAttend(void);

DELMEREPOATTEND_API int testMe(int i);
