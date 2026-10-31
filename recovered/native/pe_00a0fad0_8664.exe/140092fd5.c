/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140092fd5 */

short * FUN_140092fd5(short *param_1,short *param_2,short *param_3,short *param_4)

{
  short *psVar1;
  
  if ((longlong)param_4 - (longlong)param_3 == 2) {
    psVar1 = (short *)FUN_140042504(param_1,param_2,*param_3);
    return psVar1;
  }
  if ((longlong)param_2 - (longlong)param_1 < 0x1f) {
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
  psVar1 = (short *)FUN_1400daf20();
  return psVar1;
}

