/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014992c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14014992c(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar1 = _UNK_140e9b5d8;
  *(undefined8 *)(param_1 + 0x40) = _DAT_140e9b5d0;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar4 = _UNK_140e9b5ec;
  uVar3 = _UNK_140e9b5e8;
  uVar2 = _UNK_140e9b5e4;
  *(undefined4 *)(param_1 + 0x50) = _DAT_140e9b5e0;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  uVar5 = (uint)local_14 ^ (uint)local_10 ^ *(uint *)(param_1 + 0x10);
  uVar8 = uVar5 >> 0x14 ^ uVar5 >> 10;
  uVar6 = uVar8 ^ uVar5;
  *(uint *)(param_1 + 0x60) = uVar6;
  if ((int)uVar5 < 0) {
    iVar7 = -uVar6;
  }
  else {
    iVar7 = 0x75bcd15;
    if (uVar8 != uVar5) goto LAB_14014999b;
  }
  *(int *)(param_1 + 0x60) = iVar7;
LAB_14014999b:
  if (DAT_140f17b40 != (local_8 ^ (ulonglong)auStack_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
  }
  return 0;
}

