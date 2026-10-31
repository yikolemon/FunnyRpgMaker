/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400daf20 */

void FUN_1400daf20(short *param_1,short *param_2,short *param_3,short *param_4)

{
  short *psVar1;
  
  if (((byte)DAT_1401ca374 & 4) != 0) {
    FUN_1400dba50(param_1,(longlong)param_2 - (longlong)param_1,param_3,
                  (longlong)param_4 - (longlong)param_3);
    return;
  }
  do {
    if (param_1 == param_2) {
      return;
    }
    if (param_3 != param_4) {
      psVar1 = param_3;
      do {
        if (*param_1 == *psVar1) {
          return;
        }
        psVar1 = psVar1 + 1;
      } while (psVar1 != param_4);
    }
    param_1 = param_1 + 1;
  } while( true );
}

