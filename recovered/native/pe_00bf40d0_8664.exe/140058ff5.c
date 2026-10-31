/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140058ff5 */

int FUN_140058ff5(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x98);
  if (*(longlong *)(lVar1 + 0x78) == 0) {
    local_28 = *(longlong *)(*(longlong *)(lVar1 + 0x2b8) + 0x78);
  }
  else {
    iVar3 = FUN_14001d5a4(*(longlong *)(lVar1 + 0x2b8),&local_28);
    if (iVar3 != 0) {
      local_28 = *(longlong *)(param_1 + 0xf8);
      goto LAB_140059054;
    }
  }
  *(longlong *)(param_1 + 0xf8) = local_28;
  iVar3 = 0;
LAB_140059054:
  FUN_14001c54a((longlong *)**(undefined8 **)(local_28 + 0xf0));
  FUN_14001c53d(lVar2,*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0xf0));
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  if (DAT_14012ea80 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_48);
  }
  return iVar3;
}

