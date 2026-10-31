/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cab28 */

undefined4 FUN_1801cab28(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)(param_1 + 0xf0) + 8) = uVar1 | 1;
  }
  else {
    FUN_1801c9b65(uVar2,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  local_30 = &local_24;
  local_38 = 0;
  uVar2 = FUN_1801c9c3f(uVar2,*(undefined4 *)(param_1 + 0x70),0,*(undefined4 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

