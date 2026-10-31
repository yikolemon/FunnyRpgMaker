/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1b80 */

undefined8 FUN_1400a1b80(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar3);
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      p_Var2 = FUN_140095e5c();
      *(undefined4 *)p_Var2 = 0x22;
      FUN_1400a0ea0();
      return 0x22;
    }
    *param_1 = 0;
  }
  p_Var2 = FUN_140095e5c();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1400a0ea0();
  return 0x16;
}

