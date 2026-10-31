/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002d2ce */

undefined8 FUN_14002d2ce(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_2 + 0xa0);
  uStack_20 = *(undefined8 *)(param_2 + 0xa8);
  local_18 = *(undefined8 *)(param_2 + 0xb0);
  uStack_10 = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = FUN_14001b88c((longlong)&local_28);
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_48);
}

