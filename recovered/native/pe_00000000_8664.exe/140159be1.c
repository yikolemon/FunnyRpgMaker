/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140159be1 */

void FUN_140159be1(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,int *param_5
                  )

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((*param_5 != 0) && (param_5[1] != 0)) {
    FUN_140159c8c(local_38,param_5,param_4);
    if (param_3 == 2) {
      FUN_140159e34(local_38,param_1,param_2);
    }
    else if (param_3 == 1) {
      FUN_140159d57(local_38,param_1,param_2);
    }
    else if (param_3 == 0) {
      FUN_140159ccc(local_38,param_1,param_2);
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

