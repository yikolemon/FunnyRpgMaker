/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140050bbc */

void FUN_140050bbc(longlong param_1,undefined8 param_2,longlong *param_3,uint *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_58)) {
      FUN_140050c74((undefined8 *)(*(longlong *)(param_1 + 0x3e0) + 0x4f0),(uint)param_2,param_3,
                    param_4);
      return;
    }
  }
  else {
    (**(code **)*puVar1)(puVar1[1],param_2,&local_30);
    *param_3 = local_30;
    *param_4 = local_28;
    if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_58)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_58);
}

