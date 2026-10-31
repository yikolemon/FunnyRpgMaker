/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012b343 */

void __fastcall FUN_1012b343(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  
  if (param_1[6] != 0) {
    param_1[1] = *(undefined4 *)(param_1[6] + 4);
  }
  iVar3 = DAT_1039d74c;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xdf;
  if (param_1[7] != 0) {
    FUN_1012b343();
  }
  if (param_1[8] != 0) {
    FUN_1012b343();
  }
  param_1[3] = 0;
  iVar4 = param_1[9];
  if (iVar4 < 1) {
    uVar6 = 0;
  }
  else {
    iVar8 = 0;
    do {
      iVar1 = *(int *)(param_1[0xb] + iVar8 * 4);
      bVar5 = 0;
      bVar9 = false;
      if (param_1[0x24] + 1 == *(int *)(iVar3 + 4)) {
        bVar5 = *(byte *)(iVar1 + 0xfa) ^ 1;
        if ((((*(byte *)(param_1 + 0x2b) & 0x40) == 0) && (param_1[0x28] != *(int *)(iVar1 + 0xb8)))
           || (*(char *)(iVar1 + 0x104) != '\x01')) {
          bVar9 = false;
        }
        else {
          bVar9 = (*(byte *)(iVar1 + 0xe) & 4) == 0;
        }
      }
      if ((bVar5 == 0 && !bVar9) && (*(byte *)(iVar1 + 0x409) >> 3 & 1) == 0) {
        param_1[3] = param_1[3] | *(uint *)(iVar1 + 0x30);
        iVar8 = iVar8 + 1;
      }
      else {
        *(byte *)(iVar1 + 0x409) = *(byte *)(iVar1 + 0x409) & 0xf7;
        if ((param_1[9] == 1) && ((*(byte *)((int)param_1 + 0x11) & 8) == 0)) {
          FUN_1012a2e4();
          param_1[5] = 1;
          FUN_1011b729(*param_1);
          return;
        }
        FUN_1011b729(*param_1);
        iVar4 = param_1[9];
      }
    } while (iVar8 < iVar4);
    uVar6 = param_1[3];
  }
  uVar2 = param_1[2];
  uVar6 = uVar6 | param_1[1];
  param_1[4] = uVar6 | uVar2;
  bVar5 = *(byte *)((int)param_1 + 0xad);
  bVar7 = bVar5;
  if (((bVar5 & 2) != 0) && (bVar7 = bVar5 | 4, ((uVar6 | uVar2) & 0x2040) != 0x40 || iVar4 != 1)) {
    bVar7 = bVar5;
  }
  bVar5 = bVar7 & 0xfd;
  *(byte *)((int)param_1 + 0xad) = bVar5;
  if ((((bVar7 & 4) != 0) && (param_1[0x1f] != 0)) &&
     ((*(byte *)(param_1[0x1f] + 0x31) & 0x20) != 0)) {
    bVar5 = bVar7 & 0xf9;
    *(byte *)((int)param_1 + 0xad) = bVar5;
  }
  if (iVar4 < 2) {
    if ((bVar5 & 4) == 0) goto LAB_1012b4ec;
    param_1[2] = uVar2 ^ 0x2000;
    param_1[4] = uVar6 | uVar2 ^ 0x2000;
  }
  else {
    param_1[2] = uVar2 & 0xffffdfff;
    param_1[4] = uVar6 | uVar2 & 0xffffdfff;
    if ((uVar2 >> 0xd & 1) == 0) goto LAB_1012b4ec;
  }
  FUN_10118556();
  bVar5 = *(byte *)((int)param_1 + 0xad);
LAB_1012b4ec:
  *(byte *)((int)param_1 + 0xad) = bVar5 & 0xfb;
  FUN_10129a86();
  return;
}

