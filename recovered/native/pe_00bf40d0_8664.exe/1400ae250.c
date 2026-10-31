/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ae250 */

double FUN_1400ae250(int param_1)

{
  __acrt_ptd *p_Var1;
  double dVar2;
  
  dVar2 = DAT_140113f18;
  if (param_1 != 0) {
    dVar2 = DAT_140113f20;
  }
  dVar2 = dVar2 * DAT_140113f18;
  p_Var1 = FUN_140095e5c();
  *(undefined4 *)p_Var1 = 0x22;
  return dVar2;
}

