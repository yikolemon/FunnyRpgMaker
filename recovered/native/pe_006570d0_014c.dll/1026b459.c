/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b459 */

/* Library Function - Single Match
    __wsetlocale
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl __wsetlocale(int _Category,wchar_t *_Locale)

{
  undefined4 *puVar1;
  undefined4 *local_2c;
  int *local_28;
  wchar_t **local_24;
  int *local_20;
  wchar_t **local_1c;
  int *local_18;
  undefined4 local_14;
  wchar_t *local_10;
  int local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_10 = (wchar_t *)0x0;
  local_14 = 0;
  if (5 < (uint)_Category) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return (wchar_t *)0x0;
  }
  local_c = FUN_102743cd();
  ___acrt_eagerly_load_locale_apis();
  FUN_1027c0cc();
  *(uint *)(local_c + 0x350) = *(uint *)(local_c + 0x350) | 0x10;
  local_18 = &local_c;
  local_2c = &local_14;
  local_28 = &local_c;
  local_24 = &local_10;
  local_20 = &_Category;
  local_1c = &_Locale;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_135d2772fca65dc1248eeaa1b56e886a>,<lambda_2a444430fde8c29194d880d93eed5e8f>&,<lambda_8dff2cf36a5417162780cd64fa2883ef>&>
            (&local_5,(<lambda_135d2772fca65dc1248eeaa1b56e886a> *)&local_5,
             (<lambda_2a444430fde8c29194d880d93eed5e8f> *)&local_2c,
             (<lambda_8dff2cf36a5417162780cd64fa2883ef> *)&local_18);
  return local_10;
}

