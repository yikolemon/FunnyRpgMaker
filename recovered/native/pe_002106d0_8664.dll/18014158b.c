/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014158b */

void FUN_18014158b(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,undefined4 param_6)

{
  char cVar1;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = "%.0f deg";
  if (param_5 != (char *)0x0) {
    local_28 = param_5;
  }
  local_14 = (*param_2 * DAT_1802df0a0) / DAT_1802de654;
  local_20 = param_6;
  cVar1 = FUN_180141390();
  if (cVar1 != '\0') {
    *param_2 = (local_14 * DAT_1802de654) / DAT_1802df0a0;
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}

