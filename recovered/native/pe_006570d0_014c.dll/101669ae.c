/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101669ae */

void FUN_101669ae(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_28;
  
  iVar4 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x2308);
  iVar3 = *(int *)(iVar2 + 0xc);
  iVar6 = *(int *)(iVar3 + 0x14);
  if (iVar6 < 0) {
    uVar5 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0x18) != 0) {
      FUN_1025b2d0(uVar5,*(int *)(iVar3 + 0x18),*(int *)(iVar3 + 0x10) << 4);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x18));
    }
    *(undefined4 *)(iVar3 + 0x18) = uVar5;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar6 = 0;
  }
  *(undefined4 *)(iVar3 + 0x10) = 0;
  iVar11 = (int)*(short *)(iVar2 + 0x1b6);
  if (iVar6 < iVar11) {
    uVar5 = FUN_100fa1fa(iVar11 << 4);
    if (*(int *)(iVar3 + 0x18) != 0) {
      FUN_1025b2d0(uVar5,*(int *)(iVar3 + 0x18),*(int *)(iVar3 + 0x10) << 4);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x18));
    }
    *(undefined4 *)(iVar3 + 0x18) = uVar5;
    *(int *)(iVar3 + 0x14) = iVar11;
  }
  iVar6 = FUN_10113594("##AngledHeaders");
  if (*(short *)(iVar2 + 0x4c) == 0) {
    iVar11 = iVar2 + 0x16c;
  }
  else {
    iVar11 = *(int *)(iVar2 + 0x18c) + *(short *)(iVar2 + 0x4c) * 0x18 + -0x18;
  }
  local_28 = (int)*(short *)(iVar2 + 0x1cc);
  if ((*(short *)(iVar2 + 0x1cc) == -1) &&
     (local_28 = (int)*(short *)(iVar2 + 0x1c2), *(short *)(iVar2 + 0x1c2) == -1)) {
    local_28 = -1;
    if (((*(short *)(iVar2 + 0x1be) != -1) &&
        ((*(int *)(iVar11 + 0x10) == 0 && (*(short *)(iVar2 + 0x1c0) == -1)))) &&
       ((*(int *)(iVar4 + 0x1528) == 0 ||
        (((*(int *)(iVar4 + 0x1528) == iVar6 || (*(char *)(iVar2 + 0x1fc) != '\0')) ||
         (*(char *)(iVar4 + 0x2250) == '\x01')))))) {
      local_28 = (int)*(short *)(iVar2 + 0x1be);
    }
  }
  uVar5 = FUN_100fcb39(0x30,0x3f800000);
  uVar7 = FUN_100fcb39(0,0x3f800000);
  iVar11 = *(int *)(iVar2 + 0x40);
  if (0 < iVar11) {
    uVar12 = 0;
    do {
      if ((*(uint *)(*(int *)(iVar2 + 0x28) + (uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
        sVar1 = *(short *)(*(int *)(iVar2 + 0x18) + uVar12 * 2);
        if ((*(byte *)(*(int *)(iVar2 + 0x10) + 2 + sVar1 * 0x74) & 4) != 0) {
          uVar9 = 0;
          if (local_28 == sVar1) {
            uVar9 = FUN_100fcb39(0x19,0x3f800000);
          }
          iVar11 = *(int *)(iVar3 + 0x10);
          if (iVar11 == *(int *)(iVar3 + 0x14)) {
            if (iVar11 == 0) {
              iVar8 = 8;
            }
            else {
              iVar8 = iVar11 / 2 + iVar11;
            }
            iVar10 = iVar11 + 1;
            if (iVar11 + 1 < iVar8) {
              iVar10 = iVar8;
            }
            iVar8 = FUN_100fa1fa(iVar10 << 4);
            if (*(int *)(iVar3 + 0x18) != 0) {
              FUN_1025b2d0(iVar8,*(int *)(iVar3 + 0x18),*(int *)(iVar3 + 0x10) << 4);
              FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x18));
            }
            *(int *)(iVar3 + 0x18) = iVar8;
            *(int *)(iVar3 + 0x14) = iVar10;
            iVar11 = *(int *)(iVar3 + 0x10);
          }
          else {
            iVar8 = *(int *)(iVar3 + 0x18);
          }
          iVar11 = iVar11 * 0x10;
          *(short *)(iVar8 + iVar11) = sVar1;
          *(undefined4 *)(iVar8 + 4 + iVar11) = uVar7;
          *(undefined4 *)(iVar8 + 8 + iVar11) = uVar5;
          *(undefined4 *)(iVar8 + 0xc + iVar11) = uVar9;
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar11 = *(int *)(iVar2 + 0x40);
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar11);
  }
  FUN_10166c96(iVar6,*(undefined4 *)(iVar4 + 0xd84),0,*(undefined4 *)(iVar3 + 0x18),
               *(undefined4 *)(iVar3 + 0x10));
  return;
}

