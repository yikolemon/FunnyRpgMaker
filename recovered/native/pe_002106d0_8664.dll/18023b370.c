/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023b370 */

void FUN_18023b370(short *param_1,short *param_2,short *param_3,short *param_4)

{
  short *psVar1;
  
  if (((byte)DAT_1804039dc & 4) != 0) {
    FUN_18023c030(param_1,(longlong)param_2 - (longlong)param_1,param_3,
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

