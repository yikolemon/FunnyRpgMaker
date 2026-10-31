/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146247 */

void FUN_180146247(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined4 param_6)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  undefined8 local_30;
  undefined4 local_28;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = &local_10;
  if (param_4 <= 0.0) {
    local_38 = (double *)0x0;
  }
  pdVar1 = (double *)0x0;
  if (0.0 < param_3) {
    pdVar1 = &local_18;
  }
  local_28 = param_6;
  local_30 = param_5;
  local_18 = param_3;
  local_10 = param_4;
  FUN_180145a54(0,9,param_2,pdVar1);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}

