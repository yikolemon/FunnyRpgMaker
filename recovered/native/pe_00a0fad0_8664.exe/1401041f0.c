/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401041f0 */

/* Library Function - Single Match
    _Getcoll
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_Collvec * __cdecl _Getcoll(_Collvec *__return_storage_ptr__)

{
  UINT UVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  
  UVar1 = ___lc_collate_cp_func();
  __return_storage_ptr__->_Page = UVar1;
  ppwVar2 = ___lc_locale_name_func();
  pwVar3 = ppwVar2[1];
  __return_storage_ptr__->_LocaleName = pwVar3;
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = (wchar_t *)FUN_140115620();
    __return_storage_ptr__->_LocaleName = pwVar3;
  }
  return __return_storage_ptr__;
}

