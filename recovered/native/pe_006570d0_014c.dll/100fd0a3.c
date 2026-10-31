/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fd0a3 */

void FUN_100fd0a3(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  puVar3 = (uint *)FUN_100fd097(param_1);
  iVar2 = DAT_1039d74c;
  if ((*puVar3 & 0xffff) == 0x801) {
    uVar6 = *puVar3 >> 0x10;
    uVar1 = *(undefined4 *)(DAT_1039d74c + 0xcc0 + uVar6);
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
      iVar5 = FUN_100fa1fa(iVar7 * 0xc);
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
    *(undefined4 *)(iVar5 + 4 + iVar4 * 0xc) = uVar1;
    *(int *)(iVar2 + 0x1f80) = *(int *)(iVar2 + 0x1f80) + 1;
    *(undefined4 *)(iVar2 + 0xcc0 + uVar6) = param_2;
  }
  else {
    FUN_100fcef5("Calling PushStyleVar() variant with wrong type!");
  }
  return;
}

