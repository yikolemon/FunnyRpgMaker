/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047874 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140047874(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar1 = _UNK_1400f4398;
  *(undefined8 *)(param_1 + 0x40) = _DAT_1400f4390;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = _UNK_1400f43a8;
  *(undefined8 *)(param_1 + 0x50) = _DAT_1400f43a0;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar2 = (uint)local_14 ^ (uint)local_10 ^ *(uint *)(param_1 + 0x10);
  uVar5 = uVar2 >> 0x14 ^ uVar2 >> 10;
  uVar3 = uVar5 ^ uVar2;
  *(uint *)(param_1 + 0x60) = uVar3;
  if ((int)uVar2 < 0) {
    iVar4 = -uVar3;
  }
  else {
    iVar4 = 0x75bcd15;
    if (uVar5 != uVar2) goto LAB_1400478e3;
  }
  *(int *)(param_1 + 0x60) = iVar4;
LAB_1400478e3:
  if (DAT_14012ea80 != (local_8 ^ (ulonglong)auStack_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_8 ^ (ulonglong)auStack_38);
  }
  return 0;
}

