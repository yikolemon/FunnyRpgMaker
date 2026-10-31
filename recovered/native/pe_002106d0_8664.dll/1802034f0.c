/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802034f0 */

void FUN_1802034f0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (plVar1 == (longlong *)0x0) {
    if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
      FUN_180203628(*(longlong *)(param_1 + 0x3e0) + 0x4f0);
      return;
    }
  }
  else {
    local_18 = *param_2;
    local_10 = param_3;
    (**(code **)(*plVar1 + 8))(plVar1[1]);
    if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

