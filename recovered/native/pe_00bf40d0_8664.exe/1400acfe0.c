/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400acfe0 */

void FUN_1400acfe0(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x22;
    return;
  }
  return;
}

