/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008908e */

void FUN_14008908e(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lVar2 = DAT_140f2a910;
  if (*(int *)(DAT_140f2a910 + 0xd9c) < 0) {
    uVar5 = FUN_140077ab4(0);
    if (*(longlong *)(lVar2 + 0xda0) != 0) {
      FUN_1401c5180(uVar5,*(longlong *)(lVar2 + 0xda0),(longlong)*(int *)(lVar2 + 0xd98) << 3);
      FUN_140077b90(*(undefined8 *)(lVar2 + 0xda0));
    }
    *(undefined8 *)(lVar2 + 0xda0) = uVar5;
    *(undefined4 *)(lVar2 + 0xd9c) = 0;
  }
  *(undefined4 *)(lVar2 + 0xd98) = 0;
  if (0 < *(int *)(lVar2 + 0x2178)) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x2180) + lVar7 * 8);
      *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar1 + 0x10);
      if ((*(int *)(lVar1 + 0x84) < *(int *)(lVar2 + 4)) ||
         ((float)*(undefined8 *)(lVar1 + 0x10) <= 0.0)) {
        if (lVar7 == 0) goto LAB_140089160;
      }
      else if ((lVar7 == 0) || (0.0 < (float)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20))) {
LAB_140089160:
        if ((*(longlong *)(lVar1 + 0x78) == 0) || (cVar3 = FUN_14008851d(), cVar3 != '\0')) {
          iVar9 = *(int *)(lVar2 + 0xd98);
          if (iVar9 == *(int *)(lVar2 + 0xd9c)) {
            if (iVar9 == 0) {
              iVar4 = 8;
            }
            else {
              iVar4 = iVar9 / 2 + iVar9;
            }
            iVar8 = iVar9 + 1;
            if (iVar9 + 1 < iVar4) {
              iVar8 = iVar4;
            }
            lVar6 = FUN_140077ab4((longlong)iVar8 << 3);
            if (*(longlong *)(lVar2 + 0xda0) != 0) {
              FUN_1401c5180(lVar6,*(longlong *)(lVar2 + 0xda0),
                            (longlong)*(int *)(lVar2 + 0xd98) << 3);
              FUN_140077b90(*(undefined8 *)(lVar2 + 0xda0));
            }
            *(longlong *)(lVar2 + 0xda0) = lVar6;
            *(int *)(lVar2 + 0xd9c) = iVar8;
            iVar9 = *(int *)(lVar2 + 0xd98);
          }
          else {
            lVar6 = *(longlong *)(lVar2 + 0xda0);
          }
          *(longlong *)(lVar6 + (longlong)iVar9 * 8) = lVar1;
          *(int *)(lVar2 + 0xd98) = *(int *)(lVar2 + 0xd98) + 1;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar2 + 0x2178));
  }
  lVar2 = **(longlong **)(lVar2 + 0x2180);
  *(undefined2 *)(lVar2 + 0x71) = 0;
  *(undefined1 *)(lVar2 + 0x73) = 0;
  return;
}

