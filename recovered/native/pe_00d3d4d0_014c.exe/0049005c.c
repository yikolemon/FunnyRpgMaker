/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049005c */

undefined4 __cdecl FUN_0049005c(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (((param_1 != 0x4000) && (param_1 != 0x8000)) && (param_1 != 0x10000)) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    return 0x16;
  }
  LOCK();
  DAT_00521f18 = param_1;
  UNLOCK();
  return 0;
}

