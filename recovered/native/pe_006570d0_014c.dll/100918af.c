/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100918af */

void FUN_100918af(short *param_1,short *param_2,short *param_3,short *param_4)

{
  short *psVar1;
  
  if ((int)param_4 - (int)param_3 == 2) {
    FUN_10044e04(param_1,param_2,*param_3);
  }
  else {
    if (0x1e < (int)param_2 - (int)param_1) {
      FUN_10229d20(param_1,param_2,param_3,param_4);
      return;
    }
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      if (param_3 != param_4) {
        psVar1 = param_3;
        do {
          if (*param_1 == *psVar1) {
            return;
          }
          psVar1 = psVar1 + 1;
        } while (psVar1 != param_4);
      }
    }
  }
  return;
}

