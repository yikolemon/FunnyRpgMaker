/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041dc21 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041dc21(int param_1,int param_2)

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
         *(ulonglong *)(param_1 + 0x2c) & CONCAT44(_UNK_004d73f4,_DAT_004d73f0);
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
    iVar4 = (int)DAT_004d73e8;
    uVar1 = (ulonglong)DAT_004d73e8 >> 0x20;
    uVar7 = _DAT_004d72b0 + *(uint *)(param_1 + 0x2c) + *(int *)(param_1 + 0x18) & _DAT_004d73f0;
    uVar8 = _UNK_004d72b4 + *(uint *)(param_1 + 0x30) + *(int *)(param_1 + 0x1c) & _UNK_004d73f4;
    uVar3 = *(uint *)(param_1 + 0x2c) & _DAT_004d73f0;
    uVar6 = *(uint *)(param_1 + 0x30) & _UNK_004d73f4;
    *(uint *)(param_1 + 0x2c) = uVar3;
    *(uint *)(param_1 + 0x30) = uVar6;
    uVar5 = iVar4 + *(int *)(param_1 + 0x20) & _UNK_004d7408;
    uVar2 = (int)uVar1 + *(int *)(param_1 + 0x24) & _UNK_004d740c;
    *(uint *)(param_1 + 0x18) = uVar7 - uVar3;
    *(uint *)(param_1 + 0x1c) = uVar8 - uVar6;
    *(uint *)(param_1 + 0x20) = uVar5;
    *(uint *)(param_1 + 0x24) = uVar2;
  }
  *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 0x20U & 0xffffffc0;
  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x20U & 0xffffffc0;
  return;
}

