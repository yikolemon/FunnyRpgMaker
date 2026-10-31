/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ae2c0 */

double FUN_1400ae2c0(int param_1)

{
  double dVar1;
  __acrt_ptd *p_Var2;
  double dVar3;
  
  dVar3 = DAT_1400b6b38;
  if (param_1 != 0) {
    dVar3 = DAT_1400e72b0;
  }
  dVar1 = DAT_1400b6b38 / 0.0;
  p_Var2 = FUN_140095e5c();
  *(undefined4 *)p_Var2 = 0x22;
  return dVar1 * dVar3;
}

