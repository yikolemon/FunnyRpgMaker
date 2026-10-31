/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496780 */

undefined4 __cdecl FUN_00496780(short *param_1,int param_2,int param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 == 0) {
      *param_1 = 0;
      p_Var2 = FUN_0048f66d();
      *(undefined4 *)p_Var2 = 0x16;
      FUN_00495c88();
      return 0x16;
    }
    psVar3 = param_1;
    do {
      sVar1 = *(short *)((param_3 - (int)param_1) + (int)psVar3);
      *psVar3 = sVar1;
      if (sVar1 == 0) {
        return 0;
      }
      param_2 = param_2 + -1;
      psVar3 = psVar3 + 1;
    } while (param_2 != 0);
    *param_1 = 0;
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 0x22;
    FUN_00495c88();
    return 0x22;
  }
  p_Var2 = FUN_0048f66d();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_00495c88();
  return 0x16;
}

