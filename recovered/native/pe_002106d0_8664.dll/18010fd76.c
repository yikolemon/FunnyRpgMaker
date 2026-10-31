/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010fd76 */

void FUN_18010fd76(void)

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
  
  lVar2 = DAT_180419160;
  if (*(int *)(DAT_180419160 + 0xd9c) < 0) {
    uVar5 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar2 + 0xda0) != 0) {
      FUN_1802a82f0(uVar5,*(longlong *)(lVar2 + 0xda0),(longlong)*(int *)(lVar2 + 0xd98) << 3);
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0xda0));
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
        if (lVar7 == 0) goto LAB_18010fe48;
      }
      else if ((lVar7 == 0) || (0.0 < (float)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20))) {
LAB_18010fe48:
        if ((*(longlong *)(lVar1 + 0x78) == 0) || (cVar3 = FUN_18010f205(), cVar3 != '\0')) {
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
            lVar6 = FUN_1800fe7f8((longlong)iVar8 << 3);
            if (*(longlong *)(lVar2 + 0xda0) != 0) {
              FUN_1802a82f0(lVar6,*(longlong *)(lVar2 + 0xda0),
                            (longlong)*(int *)(lVar2 + 0xd98) << 3);
              FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0xda0));
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

