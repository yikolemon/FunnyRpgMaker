/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110007 */

void FUN_180110007(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  lVar5 = DAT_180419160;
  if (*(int *)(DAT_180419160 + 0xd8c) < 0) {
    uVar7 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar5 + 0xd90) != 0) {
      FUN_1802a82f0(uVar7,*(longlong *)(lVar5 + 0xd90),(longlong)*(int *)(lVar5 + 0xd88) << 3);
      FUN_1800fe8d4(*(undefined8 *)(lVar5 + 0xd90));
    }
    *(undefined8 *)(lVar5 + 0xd90) = uVar7;
    *(undefined4 *)(lVar5 + 0xd8c) = 0;
  }
  *(undefined4 *)(lVar5 + 0xd88) = 0;
  if ((longlong)*(int *)(lVar5 + 0x1300) == 0) {
    iVar10 = 0;
  }
  else {
    plVar9 = *(longlong **)(lVar5 + 0x1308);
    plVar1 = plVar9 + *(int *)(lVar5 + 0x1300);
    iVar10 = 0;
    do {
      lVar3 = *plVar9;
      iVar2 = *(int *)(lVar3 + 0x40);
      if ((longlong)iVar2 != 0) {
        lVar11 = *(longlong *)(lVar3 + 0x48);
        lVar13 = 0;
        do {
          lVar4 = *(longlong *)(lVar11 + lVar13);
          *(undefined2 *)(lVar4 + 0x54) = *(undefined2 *)(lVar3 + 0x2d4);
          iVar10 = *(int *)(lVar5 + 0xd88);
          if (iVar10 == *(int *)(lVar5 + 0xd8c)) {
            if (iVar10 == 0) {
              iVar6 = 8;
            }
            else {
              iVar6 = iVar10 / 2 + iVar10;
            }
            iVar12 = iVar10 + 1;
            if (iVar10 + 1 < iVar6) {
              iVar12 = iVar6;
            }
            lVar8 = FUN_1800fe7f8((longlong)iVar12 << 3);
            if (*(longlong *)(lVar5 + 0xd90) != 0) {
              FUN_1802a82f0(lVar8,*(longlong *)(lVar5 + 0xd90),
                            (longlong)*(int *)(lVar5 + 0xd88) << 3);
              FUN_1800fe8d4(*(undefined8 *)(lVar5 + 0xd90));
            }
            *(longlong *)(lVar5 + 0xd90) = lVar8;
            *(int *)(lVar5 + 0xd8c) = iVar12;
            iVar10 = *(int *)(lVar5 + 0xd88);
          }
          else {
            lVar8 = *(longlong *)(lVar5 + 0xd90);
          }
          *(longlong *)(lVar8 + (longlong)iVar10 * 8) = lVar4;
          iVar10 = *(int *)(lVar5 + 0xd88) + 1;
          *(int *)(lVar5 + 0xd88) = iVar10;
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar2 * 8 != lVar13);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  iVar2 = *(int *)(lVar5 + 0x2920);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(lVar5 + 0x2928);
    lVar11 = 0;
    do {
      uVar7 = *(undefined8 *)(lVar3 + lVar11);
      if (iVar10 == *(int *)(lVar5 + 0xd8c)) {
        if (iVar10 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar10 / 2 + iVar10;
        }
        iVar12 = iVar10 + 1;
        if (iVar10 + 1 < iVar6) {
          iVar12 = iVar6;
        }
        lVar13 = FUN_1800fe7f8((longlong)iVar12 << 3);
        if (*(longlong *)(lVar5 + 0xd90) != 0) {
          FUN_1802a82f0(lVar13,*(longlong *)(lVar5 + 0xd90),(longlong)*(int *)(lVar5 + 0xd88) << 3);
          FUN_1800fe8d4(*(undefined8 *)(lVar5 + 0xd90));
        }
        *(longlong *)(lVar5 + 0xd90) = lVar13;
        *(int *)(lVar5 + 0xd8c) = iVar12;
        iVar10 = *(int *)(lVar5 + 0xd88);
      }
      else {
        lVar13 = *(longlong *)(lVar5 + 0xd90);
      }
      *(undefined8 *)(lVar13 + (longlong)iVar10 * 8) = uVar7;
      iVar10 = *(int *)(lVar5 + 0xd88) + 1;
      *(int *)(lVar5 + 0xd88) = iVar10;
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar2 * 8 != lVar11);
  }
  return;
}

