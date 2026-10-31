/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a6f60 */

undefined4 FUN_1400a6f60(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1400a6fc3;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1400a6fc3;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      psVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *psVar4 = 0;
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = 0;
        p_Var2 = FUN_140095e5c();
        *(undefined4 *)p_Var2 = 0x22;
        FUN_1400a0ea0();
        return 0x22;
      }
      param_1[param_2 + -1] = 0;
      return 0x50;
    }
    *param_1 = 0;
  }
LAB_1400a6fc3:
  p_Var2 = FUN_140095e5c();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1400a0ea0();
  return 0x16;
}

