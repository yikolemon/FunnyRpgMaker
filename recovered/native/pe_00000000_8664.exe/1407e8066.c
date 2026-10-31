/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e8066 */

void FUN_1407e8066(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong unaff_RBX;
  uint unaff_EBP;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = (ulonglong)unaff_EBP;
  uStack_30 = unaff_RBX >> 0x20;
  uVar2 = FUN_1407e7fe2();
  uVar6 = (ulonglong)uVar2;
  uVar3 = (ulonglong)*(uint *)((unaff_RBX >> 0x20) + 0x290);
  uVar7 = (ulonglong)(unaff_EBP & 0x7ffff);
  uVar4 = (ulonglong)*(uint *)(uVar3 + 0x70);
  uVar2 = *(uint *)(uVar4 + uVar7 * 4);
  *(uint *)(uVar4 + uVar7 * 4) = uVar2 & 0xbfffffff;
  uVar5 = uVar2 + 0x100000 & 0x3ff00000;
  if (uVar5 == 0) {
    uVar5 = 0x100000;
  }
  *(uint *)(uVar4 + uVar7 * 4) = uVar5 | uVar2 & 0x80000000 | *(uint *)(uVar3 + 0x80) & 0xfffff;
  iVar1 = *(int *)((ulonglong)*(uint *)((ulonglong)((int)&uStack_30 + 8) + 0x14) + 8);
  *(uint *)(uVar3 + 0x80) = unaff_EBP & 0x7ffff;
  *(int *)(uVar3 + 0x8c) = *(int *)(uVar3 + 0x8c) + 1;
  *(int *)(uVar3 + 0x90) =
       *(int *)(uVar3 + 0x90) +
       ((uint)*(ushort *)(uVar6 + 6) + iVar1) * ((uint)*(ushort *)(uVar6 + 4) + iVar1);
  *(undefined4 *)(uVar6 + 4) = 0;
  return;
}

