/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008375a */

int FUN_18008375a(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    iVar2 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar2 = FUN_18008380e(param_1);
    *(int *)(param_1 + 0x14) = iVar2;
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    local_11 = (undefined1)iVar2;
    puVar1 = *(undefined1 **)(param_1 + 0x40);
    if (puVar1 == *(undefined1 **)(param_1 + 0x48)) {
      FUN_18004dc74(param_1 + 0x38,puVar1,&local_11);
    }
    else {
      *puVar1 = local_11;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 10) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
      *(undefined8 *)(param_1 + 0x28) = 0;
      iVar2 = 10;
    }
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

