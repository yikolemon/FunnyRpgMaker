/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fd2b4 */

void FUN_100fd2b4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar3 = (uint *)FUN_100fd097(param_1);
  iVar2 = DAT_1039d74c;
  if ((*puVar3 & 0xffff) == 0x802) {
    uVar6 = *puVar3 >> 0x10;
    puVar1 = (undefined4 *)(DAT_1039d74c + 0xcc0 + uVar6);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    iVar4 = *(int *)(DAT_1039d74c + 0x1f80);
    if (iVar4 == *(int *)(DAT_1039d74c + 0x1f84)) {
      if (iVar4 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar4 / 2 + iVar4;
      }
      iVar7 = iVar4 + 1;
      if (iVar4 + 1 < iVar5) {
        iVar7 = iVar5;
      }
      iVar5 = FUN_100fa1fa(iVar7 * 0xc,uVar8,uVar9,0,0);
      if (*(int *)(iVar2 + 0x1f88) != 0) {
        FUN_1025b2d0(iVar5,*(int *)(iVar2 + 0x1f88),*(int *)(iVar2 + 0x1f80) * 0xc);
        FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x1f88));
      }
      *(int *)(iVar2 + 0x1f88) = iVar5;
      *(int *)(iVar2 + 0x1f84) = iVar7;
      iVar4 = *(int *)(iVar2 + 0x1f80);
    }
    else {
      iVar5 = *(int *)(DAT_1039d74c + 0x1f88);
    }
    *(undefined4 *)(iVar5 + iVar4 * 0xc) = param_1;
    *(ulonglong *)(iVar5 + 4 + iVar4 * 0xc) = CONCAT44(uVar9,uVar8);
    *(int *)(iVar2 + 0x1f80) = *(int *)(iVar2 + 0x1f80) + 1;
    *(undefined4 *)(iVar2 + 0xcc4 + uVar6) = param_2;
  }
  else {
    FUN_100fcef5("Calling PushStyleVar() variant with wrong type!");
  }
  return;
}

