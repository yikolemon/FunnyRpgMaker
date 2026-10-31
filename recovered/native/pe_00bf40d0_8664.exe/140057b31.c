/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140057b31 */

void FUN_140057b31(byte *param_1,byte *param_2,int param_3,char param_4,int *param_5)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if ((*param_5 != 0) && (param_5[1] != 0)) {
    FUN_140057bdc(local_38,param_5,param_4);
    if (param_3 == 2) {
      FUN_140057d84(local_38,param_1,param_2);
    }
    else if (param_3 == 1) {
      FUN_140057ca7(local_38,param_1,param_2);
    }
    else if (param_3 == 0) {
      FUN_140057c1c(local_38,(char *)param_1,(int)param_2);
    }
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_58);
}

