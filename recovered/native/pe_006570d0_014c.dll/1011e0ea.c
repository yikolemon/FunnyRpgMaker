/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011e0ea */

void FUN_1011e0ea(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = DAT_1039d74c;
  FUN_1011e120();
  *(undefined4 *)(iVar5 + 0x27ec) = 0x3f000000;
  *(int *)(iVar5 + 0x1f70) = param_1;
  puVar1 = (undefined4 *)(iVar5 + 0xe00 + param_1 * 0x10);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(iVar5 + 0x27f0) = *puVar1;
  *(undefined4 *)(iVar5 + 0x27f4) = uVar2;
  *(undefined4 *)(iVar5 + 0x27f8) = uVar3;
  *(undefined4 *)(iVar5 + 0x27fc) = uVar4;
  return;
}

