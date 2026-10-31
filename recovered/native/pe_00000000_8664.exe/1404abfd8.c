/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404abfd8 */

/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * _updatetlocinfoEx_nolock(undefined8 *param_1,undefined *param_2)

{
  undefined *puVar1;
  
  if ((param_2 == (undefined *)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)*param_1;
    if (puVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref(param_2);
      if (((puVar1 != (undefined *)0x0) &&
          (__acrt_release_locale_ref(puVar1), *(int *)(puVar1 + 0x10) == 0)) &&
         (puVar1 != &DAT_140627370)) {
        __acrt_free_locale(puVar1);
      }
    }
  }
  return param_2;
}

