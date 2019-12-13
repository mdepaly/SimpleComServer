// HelloFiveMinds.h: Deklaration von CHelloFiveMinds

#pragma once
#include "resource.h"       // Hauptsymbole



#include "SimpleComServer_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Singlethread-COM-Objekte werden auf der Windows CE-Plattform nicht vollständig unterstützt. Windows Mobile-Plattformen bieten beispielsweise keine vollständige DCOM-Unterstützung. Definieren Sie _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, um ATL zu zwingen, die Erstellung von Singlethread-COM-Objekten zu unterstützen und die Verwendung eigener Singlethread-COM-Objektimplementierungen zu erlauben. Das Threadmodell in der RGS-Datei wurde auf 'Free' festgelegt, da dies das einzige Threadmodell ist, das auf Windows CE-Plattformen ohne DCOM unterstützt wird."
#endif

using namespace ATL;


// CHelloFiveMinds

class ATL_NO_VTABLE CHelloFiveMinds :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CHelloFiveMinds, &CLSID_HelloFiveMinds>,
	public IDispatchImpl<IHelloFiveMinds, &IID_IHelloFiveMinds, &LIBID_SimpleComServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CHelloFiveMinds()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CHelloFiveMinds)
	COM_INTERFACE_ENTRY(IHelloFiveMinds)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



  STDMETHOD(Greet)();
  STDMETHOD(Hello)(BSTR name);
};

OBJECT_ENTRY_AUTO(__uuidof(HelloFiveMinds), CHelloFiveMinds)
