/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180203580 */

void FUN_180203580(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
      FUN_180203638(*(longlong *)(param_1 + 0x3e0) + 0x4f0,param_2,param_3,param_4);
      return;
    }
  }
  else {
    (**(code **)*puVar1)(puVar1[1],param_2,&local_30);
    *param_3 = local_30;
    *param_4 = local_28;
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

