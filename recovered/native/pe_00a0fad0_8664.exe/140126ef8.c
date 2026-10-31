/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140126ef8 */

/* Library Function - Single Match
    __acrt_locale_initialize_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_locale_initialize_time(__crt_locale_data *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  __crt_lc_time_data *p_Var4;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    ppuVar3 = &PTR_DAT_140168590;
LAB_140126f6f:
    __acrt_locale_release_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
    uVar2 = 0;
    *(undefined ***)(param_1 + 0x120) = ppuVar3;
  }
  else {
    ppuVar3 = (undefined **)_calloc_base(1,0x2c0);
    p_Var4 = (__crt_lc_time_data *)0x0;
    if ((__crt_lc_time_data *)ppuVar3 != (__crt_lc_time_data *)0x0) {
      bVar1 = initialize_lc_time((__crt_lc_time_data *)ppuVar3,param_1);
      if (bVar1) {
        *(undefined4 *)((longlong)ppuVar3 + 0x15c) = 1;
        FUN_1401212e0(0);
        goto LAB_140126f6f;
      }
      __acrt_locale_free_time(ppuVar3);
      p_Var4 = (__crt_lc_time_data *)ppuVar3;
    }
    FUN_1401212e0(p_Var4);
    uVar2 = 1;
  }
  return uVar2;
}

