/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013d3e7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d3e7(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 local_28;
  float *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_18;
  undefined4 local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_28;
  local_18 = "%.0f deg";
  if (param_5 != (char *)0x0) {
    local_18 = param_5;
  }
  local_10 = (*param_2 * _DAT_102b9568) / DAT_102b956c;
  local_24 = &local_10;
  local_14 = param_6;
  local_1c = param_4;
  local_20 = param_3;
  local_28 = param_1;
  cVar1 = FUN_1013d285();
  if (cVar1 != '\0') {
    *param_2 = (local_10 * DAT_102b956c) / _DAT_102b9568;
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

