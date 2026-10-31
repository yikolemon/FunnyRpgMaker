/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ba4bb */

void FUN_1400ba4bb(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,undefined4 param_6)

{
  char cVar1;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = "%.0f deg";
  if (param_5 != (char *)0x0) {
    local_28 = param_5;
  }
  local_14 = (*param_2 * DAT_140211e10) / DAT_1402113a4;
  local_20 = param_6;
  cVar1 = FUN_1400ba2c0();
  if (cVar1 != '\0') {
    *param_2 = (local_14 * DAT_1402113a4) / DAT_140211e10;
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
}

