/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1631 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_101c1631(int param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    *(ulonglong *)(param_1 + 0x2c) =
         *(ulonglong *)(param_1 + 0x2c) & CONCAT44(_UNK_10302e54,_DAT_10302e50);
    uVar5 = *(uint *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x24);
    uVar2 = uVar5 & 0xffffffc0;
    *(uint *)(param_1 + 0x20) = uVar2;
    uVar3 = iVar4 + 0x3fU & 0xffffffc0;
    *(uint *)(param_1 + 0x24) = uVar3;
    *(uint *)(param_1 + 0x18) = (uVar5 + *(int *)(param_1 + 0x18) + 0x3f & 0xffffffc0) - uVar2;
    *(uint *)(param_1 + 0x1c) = uVar3 - (iVar4 - *(int *)(param_1 + 0x1c) & 0xffffffc0U);
  }
  else {
    iVar4 = (int)DAT_10302e48;
    uVar1 = (ulonglong)DAT_10302e48 >> 0x20;
    uVar7 = _DAT_10301b70 + *(uint *)(param_1 + 0x2c) + *(int *)(param_1 + 0x18) & _DAT_10302e50;
    uVar8 = _UNK_10301b74 + *(uint *)(param_1 + 0x30) + *(int *)(param_1 + 0x1c) & _UNK_10302e54;
    uVar3 = *(uint *)(param_1 + 0x2c) & _DAT_10302e50;
    uVar6 = *(uint *)(param_1 + 0x30) & _UNK_10302e54;
    *(uint *)(param_1 + 0x2c) = uVar3;
    *(uint *)(param_1 + 0x30) = uVar6;
    uVar5 = iVar4 + *(int *)(param_1 + 0x20) & _UNK_10302e68;
    uVar2 = (int)uVar1 + *(int *)(param_1 + 0x24) & _UNK_10302e6c;
    *(uint *)(param_1 + 0x18) = uVar7 - uVar3;
    *(uint *)(param_1 + 0x1c) = uVar8 - uVar6;
    *(uint *)(param_1 + 0x20) = uVar5;
    *(uint *)(param_1 + 0x24) = uVar2;
  }
  *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 0x20U & 0xffffffc0;
  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x20U & 0xffffffc0;
  return;
}

