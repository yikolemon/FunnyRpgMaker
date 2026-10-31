/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ad65 */

/* Library Function - Single Match
    ___acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * __cdecl ___acrt_locale_add_lc_time_reference(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_004f9790)) {
    LOCK();
    ppuVar1 = param_1 + 0x2c;
    puVar2 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
    return puVar2 + 1;
  }
  return (undefined *)0x7fffffff;
}

