// HelloFiveMinds.cpp: Implementierung von CHelloFiveMinds

#include "pch.h"
#include "HelloFiveMinds.h"


// CHelloFiveMinds



STDMETHODIMP CHelloFiveMinds::Greet()
{
  // TODO: Fügen Sie hier Ihren Implementierungscode ein.
  ::MessageBox(::GetActiveWindow(), _T("Hello 5 Minds"), _T("Simple ComServer"), MB_OK);
  return S_OK;
}


STDMETHODIMP CHelloFiveMinds::Hello(BSTR name)
{
  // TODO: Fügen Sie hier Ihren Implementierungscode ein.

  return S_OK;
}
