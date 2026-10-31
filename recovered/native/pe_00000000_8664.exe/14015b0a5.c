/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015b0a5 */

int FUN_14015b0a5(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  if (*(longlong *)(lVar1 + 0x78) == 0) {
    local_28 = *(longlong *)(*(longlong *)(lVar1 + 0x2b8) + 0x78);
  }
  else {
    iVar3 = FUN_140129ba0(*(longlong *)(lVar1 + 0x2b8),&local_28);
    if (iVar3 != 0) {
      local_28 = *(longlong *)(param_1 + 0xf8);
      goto LAB_14015b104;
    }
  }
  *(longlong *)(param_1 + 0xf8) = local_28;
  iVar3 = 0;
LAB_14015b104:
  FUN_140128b46(**(undefined8 **)(local_28 + 0xf0));
  FUN_140128b39(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0));
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
  }
  return iVar3;
}

