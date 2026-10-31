/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140095ea4 */

void FUN_140095ea4(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = FUN_140095e80();
  *(uint *)p_Var2 = param_1;
  uVar1 = FUN_140095ecc(param_1);
  p_Var2 = FUN_140095e5c();
  *(uint *)p_Var2 = uVar1;
  return;
}

