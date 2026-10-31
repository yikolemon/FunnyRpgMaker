/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f6d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014f6d0(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 == -1) {
    iVar6 = *(int *)(DAT_1039d74c + 4) + -1;
  }
  cVar2 = *(char *)(param_3 + 0x104);
  uVar3 = *(undefined4 *)(param_3 + 0xb8);
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 == *(int *)(param_1 + 8)) {
    if (iVar7 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar7 / 2 + iVar7;
    }
    iVar10 = iVar7 + 1;
    if (iVar7 + 1 < iVar8) {
      iVar10 = iVar8;
    }
    iVar8 = FUN_100fa1fa(iVar10 * 0x30);
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_1025b2d0(iVar8,*(int *)(param_1 + 0xc),*(int *)(param_1 + 4) * 0x30);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = iVar8;
    *(int *)(param_1 + 8) = iVar10;
    iVar7 = *(int *)(param_1 + 4);
  }
  else {
    iVar8 = *(int *)(param_1 + 0xc);
  }
  uVar9 = param_2 | 0x100000;
  if (cVar2 != '\0') {
    uVar9 = param_2;
  }
  iVar7 = iVar7 * 0x30;
  *(undefined4 *)(iVar8 + iVar7) = uVar3;
  *(uint *)(iVar8 + 4 + iVar7) = uVar9;
  *(int *)(iVar8 + 8 + iVar7) = param_3;
  *(int *)(iVar8 + 0xc + iVar7) = iVar6;
  *(undefined4 *)(iVar8 + 0x10 + iVar7) = 0xffffffff;
  *(undefined8 *)(iVar8 + 0x14 + iVar7) = 0;
  uVar5 = _UNK_102b966c;
  uVar4 = _UNK_102b9668;
  uVar3 = _UNK_102b9664;
  puVar1 = (undefined4 *)(iVar8 + 0x1c + iVar7);
  *puVar1 = _DAT_102b9660;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined4 *)(iVar8 + 0x2c + iVar7) = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

