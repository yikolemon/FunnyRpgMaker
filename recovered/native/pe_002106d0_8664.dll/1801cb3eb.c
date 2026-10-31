/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cb3eb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cb3eb(longlong param_1,char param_2)

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
    iVar5 = (int)DAT_1803296f8;
    uVar1 = (ulonglong)DAT_1803296f8 >> 0x20;
    uVar7 = _DAT_180328040 + *(uint *)(param_1 + 0x44) + *(int *)(param_1 + 0x30) & _DAT_180329700;
    uVar8 = _UNK_180328044 + *(uint *)(param_1 + 0x48) + *(int *)(param_1 + 0x34) & _UNK_180329704;
    uVar4 = *(uint *)(param_1 + 0x44) & _DAT_180329700;
    uVar2 = *(uint *)(param_1 + 0x48) & _UNK_180329704;
    *(uint *)(param_1 + 0x44) = uVar4;
    *(uint *)(param_1 + 0x48) = uVar2;
    uVar3 = iVar5 + *(int *)(param_1 + 0x38) & _UNK_180329718;
    uVar6 = (int)uVar1 + *(int *)(param_1 + 0x3c) & _UNK_18032971c;
    *(uint *)(param_1 + 0x30) = uVar7 - uVar4;
    *(uint *)(param_1 + 0x34) = uVar8 - uVar2;
    *(uint *)(param_1 + 0x38) = uVar3;
    *(uint *)(param_1 + 0x3c) = uVar6;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x20U & 0xffffffc0;
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x20U & 0xffffffc0;
  return;
}

