/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140111ad8 */

/* Library Function - Single Match
    _wsetlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale)

{
  undefined4 *puVar1;
  int local_res8 [2];
  wchar_t *local_res10;
  <lambda_7f2adfce497ff2baa965cd4f576ecfd1> local_res18 [8];
  longlong local_res20;
  wchar_t *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 *local_30;
  longlong *local_28;
  wchar_t **local_20;
  int *local_18;
  wchar_t **local_10;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  local_res8[0] = _Category;
  local_res10 = _Locale;
  if ((uint)_Category < 6) {
    local_res20 = FUN_140121578();
    FUN_1401223ec();
    __acrt_update_thread_locale_data();
    *(uint *)(local_res20 + 0x3a8) = *(uint *)(local_res20 + 0x3a8) | 0x10;
    local_38 = &local_res20;
    local_30 = &local_40;
    local_28 = &local_res20;
    local_20 = &local_48;
    local_18 = local_res8;
    local_10 = &local_res10;
    __crt_seh_guarded_call<void>::
    operator()<<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
              ((__crt_seh_guarded_call<void> *)local_res18,local_res18,
               (<lambda_2a444430fde8c29194d880d93eed5e8f> *)&local_30,
               (<lambda_8dff2cf36a5417162780cd64fa2883ef> *)&local_38);
  }
  else {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
    FUN_140120ee8();
    local_48 = (wchar_t *)0x0;
  }
  return local_48;
}

