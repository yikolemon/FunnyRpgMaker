/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a6d90 */

undefined8 FUN_1400a6d90(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  longlong lVar4;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) {
          lVar4 = param_3 - (longlong)psVar3;
          do {
            sVar1 = *(short *)(lVar4 + (longlong)psVar3);
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
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  p_Var2 = FUN_140095e5c();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1400a0ea0();
  return 0x16;
}

