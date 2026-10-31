/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f6e87 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_100f6e87(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *local_403c;
  undefined4 local_4038;
  undefined4 uStack_4034;
  undefined4 uStack_4030;
  undefined4 uStack_402c;
  undefined4 local_4028;
  undefined1 local_4024 [16416];
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_403c;
  local_4028 = param_5;
  local_4038 = param_1;
  uStack_4034 = param_2;
  uStack_4030 = param_3;
  uStack_402c = param_4;
  local_403c = local_4024;
  FUN_100f57ad();
  if (DAT_10388d00 == (local_4 ^ (uint)&local_403c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

