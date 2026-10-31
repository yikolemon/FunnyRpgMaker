/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004de6c */

void FUN_18004de6c(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
    puVar1 = (undefined1 *)(param_1 + 0x50);
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 0x50);
  }
  *puVar1 = 0;
  puVar1 = *(undefined1 **)(param_1 + 0x38);
  puVar2 = *(undefined1 **)(param_1 + 0x40);
  if (puVar1 != *(undefined1 **)(param_1 + 0x40)) {
    *(undefined1 **)(param_1 + 0x40) = puVar1;
    puVar2 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  local_9 = *(undefined1 *)(param_1 + 0x14);
  if (puVar2 == *(undefined1 **)(param_1 + 0x48)) {
    FUN_18004dc74(param_1 + 0x38,puVar2,&local_9);
  }
  else {
    *puVar2 = local_9;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

