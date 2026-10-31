/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b899f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b899f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int in_R9D;
  
  uVar7 = (ulonglong)((int)&stack0xfffffffffffffff0 - 0x40);
  uVar10 = (ulonglong)*(uint *)(uVar7 + 0x4c);
  iVar1 = *(int *)(uVar7 + 0x50);
  uVar4 = iVar1 + 0x1f >> 3 & 0xfffffffc;
  *(undefined8 *)(uVar7 + 0x1c) = 0;
  *(undefined8 *)(uVar7 + 0x24) = 0;
  *(undefined8 *)(uVar7 + 0xc) = 0;
  *(undefined8 *)(uVar7 + 0x14) = 0;
  *(undefined8 *)(uVar7 + 0x2c) = 0;
  *(undefined8 *)(uVar7 + 0x34) = 0;
  *(int *)(uVar7 + 0x24) = iVar1 * 0x74;
  *(int *)(uVar7 + 0x10) = iVar1 * 0x74;
  *(int *)(uVar7 + 0x28) = iVar1 * 2;
  uVar6 = iVar1 * 0x76 + 3U & 0xfffffffc;
  *(uint *)(uVar7 + 0x14) = uVar6;
  *(int *)(uVar7 + 0x2c) = iVar1 * 8;
  uVar11 = (ulonglong)(uVar6 + iVar1 * 8);
  do {
    *(int *)(uVar7 + 0x18) = (int)uVar11;
    *(uint *)(uVar7 + 0x30) = uVar4;
    uVar11 = (ulonglong)((int)uVar11 + uVar4);
  } while (in_R9D != 3);
  *(ulonglong *)(uVar7 - 8) = uVar11;
  *(undefined8 *)(uVar7 - 0x10) = 0x1407b8a1d;
  uVar5 = FUN_1407520ca();
  uVar8 = (ulonglong)((int)(uVar7 - 8) + 4);
  *(int *)(uVar10 + 8) = (int)uVar5;
  *(ulonglong *)(uVar8 - 8) = uVar11;
  *(undefined8 *)(uVar8 - 0x10) = 0;
  *(undefined8 *)(uVar8 - 0x18) = uVar5;
  *(undefined8 *)(uVar8 - 0x20) = 0x1407b8a2c;
  FUN_1408b3720();
  uVar4 = (int)(uVar8 - 0x18) + 0xc;
  uVar9 = (ulonglong)uVar4;
  iVar1 = *(int *)(uVar10 + 8);
  iVar2 = *(int *)(uVar9 + 0x24);
  *(int *)(uVar10 + 0x10) = iVar1;
  *(int *)(uVar10 + 0x14) = iVar2 + iVar1;
  iVar2 = *(int *)(uVar9 + 0x10);
  iVar3 = *(int *)(uVar9 + 0x28);
  *(int *)(uVar10 + 0x18) = iVar2 + iVar1;
  *(int *)(uVar10 + 0x1c) = iVar3 + iVar2 + iVar1;
  iVar2 = *(int *)(uVar9 + 0x14);
  iVar3 = *(int *)(uVar9 + 0x2c);
  *(int *)(uVar10 + 0x20) = iVar2 + iVar1;
  *(int *)(uVar10 + 0x24) = iVar3 + iVar2 + iVar1;
  *(int *)(uVar10 + 0x28) = *(int *)(uVar9 + 0x18) + iVar1;
  *(int *)(uVar10 + 0x2c) = *(int *)(uVar9 + 0x1c) + iVar1;
  *(int *)(uVar10 + 0x30) = iVar1 + *(int *)(uVar9 + 0x20);
  if (_DAT_150b41787 == (*(uint *)(uVar9 + 0x3c) ^ uVar4)) {
    return;
  }
  uVar6 = *(uint *)(uVar9 + 0x3c);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar9 - 8) = FUN_1407b8a9c;
  FUN_1408802b0(uVar6 ^ uVar4);
}

