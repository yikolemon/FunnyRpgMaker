/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140096cd0 */

undefined8 FUN_140096cd0(longlong param_1,longlong param_2)

{
  __acrt_ptd *p_Var1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1400a0ea0();
  }
  return 0x7fffffff;
}

