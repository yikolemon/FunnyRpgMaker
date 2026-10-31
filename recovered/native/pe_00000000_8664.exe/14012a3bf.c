/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012a3bf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012a3bf(longlong param_1,char param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == '\0') {
    *(ulonglong *)(param_1 + 0x44) = *(ulonglong *)(param_1 + 0x44) & 0xffffffc0ffffffc0;
    uVar4 = *(uint *)(param_1 + 0x38);
    iVar5 = *(int *)(param_1 + 0x3c);
    uVar2 = uVar4 & 0xffffffc0;
    *(uint *)(param_1 + 0x38) = uVar2;
    uVar3 = iVar5 + 0x3fU & 0xffffffc0;
    *(uint *)(param_1 + 0x3c) = uVar3;
    *(uint *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) + uVar4 + 0x3f & 0xffffffc0) - uVar2;
    *(uint *)(param_1 + 0x34) = uVar3 - (iVar5 - *(int *)(param_1 + 0x34) & 0xffffffc0U);
  }
  else {
    iVar5 = (int)DAT_140e94ef8;
    uVar1 = (ulonglong)DAT_140e94ef8 >> 0x20;
    uVar7 = _DAT_140e8d810 + *(uint *)(param_1 + 0x44) + *(int *)(param_1 + 0x30) & _DAT_140e94f00;
    uVar8 = _UNK_140e8d814 + *(uint *)(param_1 + 0x48) + *(int *)(param_1 + 0x34) & _UNK_140e94f04;
    uVar4 = *(uint *)(param_1 + 0x44) & _DAT_140e94f00;
    uVar2 = *(uint *)(param_1 + 0x48) & _UNK_140e94f04;
    *(uint *)(param_1 + 0x44) = uVar4;
    *(uint *)(param_1 + 0x48) = uVar2;
    uVar3 = iVar5 + *(int *)(param_1 + 0x38) & _UNK_140e94f18;
    uVar6 = (int)uVar1 + *(int *)(param_1 + 0x3c) & _UNK_140e94f1c;
    *(uint *)(param_1 + 0x30) = uVar7 - uVar4;
    *(uint *)(param_1 + 0x34) = uVar8 - uVar2;
    *(uint *)(param_1 + 0x38) = uVar3;
    *(uint *)(param_1 + 0x3c) = uVar6;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x20U & 0xffffffc0;
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x20U & 0xffffffc0;
  return;
}

