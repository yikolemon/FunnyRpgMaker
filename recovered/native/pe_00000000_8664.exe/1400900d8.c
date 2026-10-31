/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400900d8 */

void FUN_1400900d8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar3 = DAT_140f2a910;
  *(int *)(DAT_140f2a910 + 0x2208) = param_1;
  iVar9 = *(int *)(lVar3 + 0x222c);
  if (iVar9 < 0) {
    iVar9 = 0;
    uVar5 = FUN_140077ab4(0);
    if (*(longlong *)(lVar3 + 0x2230) != 0) {
      FUN_1401c5180(uVar5,*(longlong *)(lVar3 + 0x2230),(longlong)*(int *)(lVar3 + 0x2228) << 3);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x2230));
    }
    *(undefined8 *)(lVar3 + 0x2230) = uVar5;
    *(undefined4 *)(lVar3 + 0x222c) = 0;
  }
  *(undefined4 *)(lVar3 + 0x2228) = 0;
  if (param_1 != 0) {
    if (param_1 == *(int *)(lVar3 + 0x1f9c)) {
      if ((longlong)*(int *)(lVar3 + 0x2118) < 1) {
        iVar9 = 0;
      }
      else {
        uVar10 = (longlong)*(int *)(lVar3 + 0x2118) + 1;
        iVar9 = 0;
        do {
          lVar7 = *(longlong *)(lVar3 + 0x2120);
          if (*(int *)(lVar7 + -0xc + uVar10 * 8) != *(int *)(*(longlong *)(lVar3 + 0x1608) + 0x10))
          break;
          if (iVar9 == *(int *)(lVar3 + 0x222c)) {
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
            if (*(longlong *)(lVar3 + 0x2230) != 0) {
              FUN_1401c5180(lVar6,*(longlong *)(lVar3 + 0x2230),
                            (longlong)*(int *)(lVar3 + 0x2228) << 3);
              FUN_140077b90(*(undefined8 *)(lVar3 + 0x2230));
            }
            *(longlong *)(lVar3 + 0x2230) = lVar6;
            *(int *)(lVar3 + 0x222c) = iVar8;
            iVar9 = *(int *)(lVar3 + 0x2228);
          }
          else {
            lVar6 = *(longlong *)(lVar3 + 0x2230);
          }
          *(undefined8 *)(lVar6 + (longlong)iVar9 * 8) = *(undefined8 *)(lVar7 + -0x10 + uVar10 * 8)
          ;
          iVar9 = *(int *)(lVar3 + 0x2228) + 1;
          *(int *)(lVar3 + 0x2228) = iVar9;
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
      }
    }
    else {
      if (param_1 != *(int *)(*(longlong *)(lVar3 + 0x2200) + 0x488)) {
        return;
      }
      uVar1 = *(undefined4 *)(*(longlong *)(lVar3 + 0x2200) + 0x10);
      if (iVar9 == 0) {
        lVar7 = FUN_140077ab4(0x40);
        if (*(longlong *)(lVar3 + 0x2230) != 0) {
          FUN_1401c5180(lVar7,*(longlong *)(lVar3 + 0x2230),(longlong)*(int *)(lVar3 + 0x2228) << 3)
          ;
          FUN_140077b90(*(undefined8 *)(lVar3 + 0x2230));
        }
        *(longlong *)(lVar3 + 0x2230) = lVar7;
        *(undefined4 *)(lVar3 + 0x222c) = 8;
        lVar6 = (longlong)*(int *)(lVar3 + 0x2228);
      }
      else {
        lVar7 = *(longlong *)(lVar3 + 0x2230);
        lVar6 = 0;
      }
      *(ulonglong *)(lVar7 + lVar6 * 8) = CONCAT44(uVar1,param_1);
      iVar9 = *(int *)(lVar3 + 0x2228) + 1;
      *(int *)(lVar3 + 0x2228) = iVar9;
    }
    for (lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x2200) + 0x440); lVar7 != 0;
        lVar7 = *(longlong *)(lVar7 + 0x440)) {
      uVar1 = *(undefined4 *)(lVar7 + 0x488);
      uVar2 = *(undefined4 *)(lVar7 + 0x10);
      if (iVar9 == *(int *)(lVar3 + 0x222c)) {
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
        if (*(longlong *)(lVar3 + 0x2230) != 0) {
          FUN_1401c5180(lVar6,*(longlong *)(lVar3 + 0x2230),(longlong)*(int *)(lVar3 + 0x2228) << 3)
          ;
          FUN_140077b90(*(undefined8 *)(lVar3 + 0x2230));
        }
        *(longlong *)(lVar3 + 0x2230) = lVar6;
        *(int *)(lVar3 + 0x222c) = iVar8;
        iVar9 = *(int *)(lVar3 + 0x2228);
      }
      else {
        lVar6 = *(longlong *)(lVar3 + 0x2230);
      }
      *(ulonglong *)(lVar6 + (longlong)iVar9 * 8) = CONCAT44(uVar2,uVar1);
      iVar9 = *(int *)(lVar3 + 0x2228) + 1;
      *(int *)(lVar3 + 0x2228) = iVar9;
    }
  }
  return;
}

