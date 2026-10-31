/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268972 */

/* Library Function - Single Match
    ___acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_allocate_buffer_for_argv(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x3fffffff) && (param_2 < (uint)(0xffffffff / (ulonglong)param_3))) {
    if (param_2 * param_3 < ~(param_1 * 4)) {
      uVar1 = FUN_10275d90(param_1 * 4 + param_2 * param_3,1);
      FUN_10274120(0);
      return uVar1;
    }
  }
  return 0;
}

