/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010b38b */

void FUN_1010b38b(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar4 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0xcac) < 0) {
    uVar5 = FUN_100fa1fa(0);
    if (*(int *)(iVar4 + 0xcb0) != 0) {
      FUN_1025b2d0(uVar5,*(int *)(iVar4 + 0xcb0),*(int *)(iVar4 + 0xca8) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar4 + 0xcb0));
    }
    *(undefined4 *)(iVar4 + 0xcb0) = uVar5;
    *(undefined4 *)(iVar4 + 0xcac) = 0;
  }
  *(undefined4 *)(iVar4 + 0xca8) = 0;
  if (*(int *)(iVar4 + 0x1214) == 0) {
    iVar8 = 0;
  }
  else {
    piVar7 = *(int **)(iVar4 + 0x121c);
    piVar1 = piVar7 + *(int *)(iVar4 + 0x1214);
    iVar8 = 0;
    do {
      iVar2 = *piVar7;
      iVar3 = *(int *)(iVar2 + 0x34);
      if (iVar3 != 0) {
        iVar11 = *(int *)(iVar2 + 0x3c);
        iVar10 = 0;
        do {
          iVar8 = *(int *)(iVar11 + iVar10);
          *(undefined2 *)(iVar8 + 0x4c) = *(undefined2 *)(iVar2 + 0x2a4);
          iVar9 = *(int *)(iVar4 + 0xca8);
          if (iVar9 == *(int *)(iVar4 + 0xcac)) {
            if (iVar9 == 0) {
              iVar6 = 8;
            }
            else {
              iVar6 = iVar9 / 2 + iVar9;
            }
            iVar12 = iVar9 + 1;
            if (iVar9 + 1 < iVar6) {
              iVar12 = iVar6;
            }
            iVar6 = FUN_100fa1fa(iVar12 * 4);
            if (*(int *)(iVar4 + 0xcb0) != 0) {
              FUN_1025b2d0(iVar6,*(int *)(iVar4 + 0xcb0),*(int *)(iVar4 + 0xca8) << 2);
              FUN_100fa2cb(*(undefined4 *)(iVar4 + 0xcb0));
            }
            *(int *)(iVar4 + 0xcb0) = iVar6;
            *(int *)(iVar4 + 0xcac) = iVar12;
            iVar9 = *(int *)(iVar4 + 0xca8);
          }
          else {
            iVar6 = *(int *)(iVar4 + 0xcb0);
          }
          *(int *)(iVar6 + iVar9 * 4) = iVar8;
          iVar8 = *(int *)(iVar4 + 0xca8) + 1;
          *(int *)(iVar4 + 0xca8) = iVar8;
          iVar10 = iVar10 + 4;
        } while (iVar3 << 2 != iVar10);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
  }
  iVar2 = *(int *)(iVar4 + 0x2690);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar4 + 0x2698);
    iVar11 = 0;
    do {
      uVar5 = *(undefined4 *)(iVar3 + iVar11);
      if (iVar8 == *(int *)(iVar4 + 0xcac)) {
        if (iVar8 == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = iVar8 / 2 + iVar8;
        }
        iVar9 = iVar8 + 1;
        if (iVar8 + 1 < iVar10) {
          iVar9 = iVar10;
        }
        iVar10 = FUN_100fa1fa(iVar9 * 4);
        if (*(int *)(iVar4 + 0xcb0) != 0) {
          FUN_1025b2d0(iVar10,*(int *)(iVar4 + 0xcb0),*(int *)(iVar4 + 0xca8) << 2);
          FUN_100fa2cb(*(undefined4 *)(iVar4 + 0xcb0));
        }
        *(int *)(iVar4 + 0xcb0) = iVar10;
        *(int *)(iVar4 + 0xcac) = iVar9;
        iVar8 = *(int *)(iVar4 + 0xca8);
      }
      else {
        iVar10 = *(int *)(iVar4 + 0xcb0);
      }
      *(undefined4 *)(iVar10 + iVar8 * 4) = uVar5;
      iVar8 = *(int *)(iVar4 + 0xca8) + 1;
      *(int *)(iVar4 + 0xca8) = iVar8;
      iVar11 = iVar11 + 4;
    } while (iVar2 << 2 != iVar11);
  }
  return;
}

