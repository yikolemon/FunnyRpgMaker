/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027c049 */

/* Library Function - Single Match
    ___acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * ___acrt_locale_add_lc_time_reference(undefined **param_1)

{
  undefined *puVar1;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_10325310)) {
    LOCK();
    param_1 = param_1 + 0x2c;
    puVar1 = *param_1;
    *param_1 = *param_1 + 1;
    UNLOCK();
    return puVar1 + 1;
  }
  return (undefined *)0x7fffffff;
}

