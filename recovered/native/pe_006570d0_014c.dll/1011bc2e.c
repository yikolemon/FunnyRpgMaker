/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011bc2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1011bc2e(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_1012cb50;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_1011c190(0);
  *(undefined4 *)(local_20 + 0x100) = 0;
  *(undefined4 *)(local_20 + 0x104) = 0;
  *(undefined4 *)(local_20 + 0x108) = 0;
  *(undefined4 *)(local_20 + 0x10c) = 0;
  *(undefined4 *)(local_20 + 0xf0) = 0;
  *(undefined4 *)(local_20 + 0xf4) = 0;
  *(undefined4 *)(local_20 + 0xf8) = 0;
  *(undefined4 *)(local_20 + 0xfc) = 0;
  *(undefined4 *)(local_20 + 0xe0) = 0;
  *(undefined4 *)(local_20 + 0xe4) = 0;
  *(undefined4 *)(local_20 + 0xe8) = 0;
  *(undefined4 *)(local_20 + 0xec) = 0;
  *(undefined4 *)(local_20 + 0xd0) = 0;
  *(undefined4 *)(local_20 + 0xd4) = 0;
  *(undefined4 *)(local_20 + 0xd8) = 0;
  *(undefined4 *)(local_20 + 0xdc) = 0;
  *(undefined4 *)(local_20 + 0xc0) = 0;
  *(undefined4 *)(local_20 + 0xc4) = 0;
  *(undefined4 *)(local_20 + 200) = 0;
  *(undefined4 *)(local_20 + 0xcc) = 0;
  uVar4 = _UNK_102b8e6c;
  uVar3 = _UNK_102b8e68;
  uVar2 = _UNK_102b8e64;
  *(undefined4 *)(local_20 + 0xb0) = _DAT_102b8e60;
  *(undefined4 *)(local_20 + 0xb4) = uVar2;
  *(undefined4 *)(local_20 + 0xb8) = uVar3;
  *(undefined4 *)(local_20 + 0xbc) = uVar4;
  uVar5 = _UNK_102b8bfc;
  uVar4 = _UNK_102b8bf8;
  uVar3 = _UNK_102b8bf4;
  uVar2 = _DAT_102b8bf0;
  iVar6 = 0xc0;
  do {
    puVar1 = (undefined4 *)(local_20 + iVar6);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    iVar6 = iVar6 + 0x10;
  } while (iVar6 != 0x110);
  ExceptionList = local_18;
  return local_20;
}

