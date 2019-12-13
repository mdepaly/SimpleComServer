// dllmain.h : Deklaration der Modulklasse.

class CSimpleComServerModule : public ATL::CAtlDllModuleT< CSimpleComServerModule >
{
public :
	DECLARE_LIBID(LIBID_SimpleComServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SIMPLECOMSERVER, "{a0d20991-ab27-4ee0-b089-62a40734915a}")
};

extern class CSimpleComServerModule _AtlModule;
