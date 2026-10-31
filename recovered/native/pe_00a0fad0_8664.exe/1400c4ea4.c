/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c4ea4 */

int FUN_1400c4ea4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = DAT_1401d4818 + *(longlong *)(param_1 + 0x60);
  lVar7 = DAT_1401d4810 + *(longlong *)(param_1 + 0x58);
  lVar8 = FUN_1400c4ff6(param_1 + 0x78);
  lVar9 = FUN_1400c4ff6(&DAT_1401d4830);
  lVar11 = *(longlong *)(param_1 + 0xc0);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  lVar10 = FUN_1400c4ff6(param_1 + 0xd0);
  lVar7 = ((lVar9 + lVar8 + (lVar12 - lVar7) + lVar11) - lVar1) + lVar10 + 0x18;
  lVar1 = *(longlong *)(param_1 + 0xf8);
  for (lVar11 = *(longlong *)(param_1 + 0xf0); lVar11 != lVar1; lVar11 = lVar11 + 0x20) {
    lVar8 = FUN_1400c4ff6(lVar11);
    lVar7 = lVar7 + lVar8 + 4;
  }
  iVar2 = FUN_1400c4ff6(param_1 + 0x108);
  iVar2 = (int)lVar7 + iVar2 + 4;
  if (8 < *(uint *)(param_1 + 0x70)) {
    iVar3 = FUN_1400c4ff6(param_1 + 0x128);
    iVar2 = iVar2 + iVar3 + 4;
    if (9 < *(uint *)(param_1 + 0x70)) {
      iVar3 = FUN_1400c4ff6(param_1 + 0x148);
      iVar4 = FUN_1400c4ff6(param_1 + 0x168);
      iVar5 = FUN_1400c4ff6(param_1 + 0x188);
      iVar6 = FUN_1400c4ff6(param_1 + 0x1a8);
      iVar2 = iVar2 + iVar4 + iVar3 + iVar5 + iVar6 + 0x10;
      if (0xd < *(uint *)(param_1 + 0x70)) {
        iVar3 = FUN_1400c4ff6(param_1 + 0x1c8);
        iVar2 = iVar2 + iVar3 + 4;
      }
    }
  }
  return ((iVar2 + *(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x220)) -
         (*(int *)(param_1 + 0x1f8) + *(int *)(param_1 + 0x218))) + 0x14;
}

