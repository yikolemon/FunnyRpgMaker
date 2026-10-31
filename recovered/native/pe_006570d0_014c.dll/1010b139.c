/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010b139 */

void FUN_1010b139(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0xcb8) < 0) {
    uVar4 = FUN_100fa1fa(0);
    if (*(int *)(iVar2 + 0xcbc) != 0) {
      FUN_1025b2d0(uVar4,*(int *)(iVar2 + 0xcbc),*(int *)(iVar2 + 0xcb4) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0xcbc));
    }
    *(undefined4 *)(iVar2 + 0xcbc) = uVar4;
    *(undefined4 *)(iVar2 + 0xcb8) = 0;
  }
  *(undefined4 *)(iVar2 + 0xcb4) = 0;
  if (0 < *(int *)(iVar2 + 0x1fe0)) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x1fe8) + iVar6 * 4);
      *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0x14);
      if ((*(int *)(iVar1 + 0x60) < *(int *)(iVar2 + 4)) || (*(float *)(iVar1 + 0x10) <= 0.0)) {
        if (iVar6 == 0) goto LAB_1010b1f3;
      }
      else if ((iVar6 == 0) || (0.0 < *(float *)(iVar1 + 0x14))) {
LAB_1010b1f3:
        if ((*(int *)(iVar1 + 0x58) == 0) || (cVar3 = FUN_1010a68d(), cVar3 != '\0')) {
          iVar8 = *(int *)(iVar2 + 0xcb4);
          if (iVar8 == *(int *)(iVar2 + 0xcb8)) {
            if (iVar8 == 0) {
              iVar5 = 8;
            }
            else {
              iVar5 = iVar8 / 2 + iVar8;
            }
            iVar7 = iVar8 + 1;
            if (iVar8 + 1 < iVar5) {
              iVar7 = iVar5;
            }
            iVar5 = FUN_100fa1fa(iVar7 * 4);
            if (*(int *)(iVar2 + 0xcbc) != 0) {
              FUN_1025b2d0(iVar5,*(int *)(iVar2 + 0xcbc),*(int *)(iVar2 + 0xcb4) << 2);
              FUN_100fa2cb(*(undefined4 *)(iVar2 + 0xcbc));
            }
            *(int *)(iVar2 + 0xcbc) = iVar5;
            *(int *)(iVar2 + 0xcb8) = iVar7;
            iVar8 = *(int *)(iVar2 + 0xcb4);
          }
          else {
            iVar5 = *(int *)(iVar2 + 0xcbc);
          }
          *(int *)(iVar5 + iVar8 * 4) = iVar1;
          *(int *)(iVar2 + 0xcb4) = *(int *)(iVar2 + 0xcb4) + 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar2 + 0x1fe0));
  }
  iVar2 = **(int **)(iVar2 + 0x1fe8);
  *(undefined2 *)(iVar2 + 0x55) = 0;
  *(undefined1 *)(iVar2 + 0x57) = 0;
  return;
}

