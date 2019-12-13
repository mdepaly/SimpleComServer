

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for SimpleComServer.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SimpleComServer_i_h__
#define __SimpleComServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IHelloFiveMinds_FWD_DEFINED__
#define __IHelloFiveMinds_FWD_DEFINED__
typedef interface IHelloFiveMinds IHelloFiveMinds;

#endif 	/* __IHelloFiveMinds_FWD_DEFINED__ */


#ifndef __HelloFiveMinds_FWD_DEFINED__
#define __HelloFiveMinds_FWD_DEFINED__

#ifdef __cplusplus
typedef class HelloFiveMinds HelloFiveMinds;
#else
typedef struct HelloFiveMinds HelloFiveMinds;
#endif /* __cplusplus */

#endif 	/* __HelloFiveMinds_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IHelloFiveMinds_INTERFACE_DEFINED__
#define __IHelloFiveMinds_INTERFACE_DEFINED__

/* interface IHelloFiveMinds */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IHelloFiveMinds;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0e62cb80-1075-4637-af79-c19407ca58e9")
    IHelloFiveMinds : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Greet( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Hello( 
            /* [in] */ BSTR name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHelloFiveMindsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHelloFiveMinds * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHelloFiveMinds * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHelloFiveMinds * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHelloFiveMinds * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHelloFiveMinds * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHelloFiveMinds * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHelloFiveMinds * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Greet )( 
            IHelloFiveMinds * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Hello )( 
            IHelloFiveMinds * This,
            /* [in] */ BSTR name);
        
        END_INTERFACE
    } IHelloFiveMindsVtbl;

    interface IHelloFiveMinds
    {
        CONST_VTBL struct IHelloFiveMindsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHelloFiveMinds_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHelloFiveMinds_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHelloFiveMinds_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHelloFiveMinds_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHelloFiveMinds_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHelloFiveMinds_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHelloFiveMinds_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHelloFiveMinds_Greet(This)	\
    ( (This)->lpVtbl -> Greet(This) ) 

#define IHelloFiveMinds_Hello(This,name)	\
    ( (This)->lpVtbl -> Hello(This,name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHelloFiveMinds_INTERFACE_DEFINED__ */



#ifndef __SimpleComServerLib_LIBRARY_DEFINED__
#define __SimpleComServerLib_LIBRARY_DEFINED__

/* library SimpleComServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SimpleComServerLib;

EXTERN_C const CLSID CLSID_HelloFiveMinds;

#ifdef __cplusplus

class DECLSPEC_UUID("c7bec822-3a55-43c1-975c-ef9b6ad4074d")
HelloFiveMinds;
#endif
#endif /* __SimpleComServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


