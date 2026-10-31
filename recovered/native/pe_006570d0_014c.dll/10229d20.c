/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229d20 */

short * FUN_10229d20(short *param_1,short *param_2,short *param_3,short *param_4)

{
  short *psVar1;
  
  if (((byte)DAT_10389df8 & 4) != 0) {
    psVar1 = (short *)FUN_1022a9d0(param_1,(int)param_2 - (int)param_1,param_3,
                                   (int)param_4 - (int)param_3);
    return psVar1;
  }
  do {
    if (param_1 == param_2) {
      return param_1;
    }
    if (param_3 != param_4) {
      psVar1 = param_3;
      do {
        if (*param_1 == *psVar1) {
          return param_1;
        }
        psVar1 = psVar1 + 1;
      } while (psVar1 != param_4);
    }
    param_1 = param_1 + 1;
  } while( true );
}

