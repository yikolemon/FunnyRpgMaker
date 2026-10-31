/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020b9b9 */

int FUN_18020b9b9(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  if (*(longlong *)(lVar1 + 0x78) == 0) {
    local_28 = *(longlong *)(*(longlong *)(lVar1 + 0x2b8) + 0x78);
  }
  else {
    iVar3 = FUN_1801cabcc(*(longlong *)(lVar1 + 0x2b8),&local_28);
    if (iVar3 != 0) {
      local_28 = *(longlong *)(param_1 + 0xf8);
      goto LAB_18020ba18;
    }
  }
  *(longlong *)(param_1 + 0xf8) = local_28;
  iVar3 = 0;
LAB_18020ba18:
  FUN_1801c9b72(**(undefined8 **)(local_28 + 0xf0));
  FUN_1801c9b65(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0));
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  return iVar3;
}

