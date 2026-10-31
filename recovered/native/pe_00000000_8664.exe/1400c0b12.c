/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c0b12 */

int FUN_1400c0b12(uint param_1,int *param_2,char *param_3,char *param_4,undefined4 param_5,
                 int param_6,undefined8 *param_7)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  
  lVar4 = DAT_140f2a910;
  iVar7 = 0;
  iVar10 = 0;
  iVar8 = (int)param_3;
  pcVar11 = param_3;
  if ((param_1 >> 0x18 & 1) == 0) {
    pcVar2 = param_3;
    if (param_4 == (char *)0x0) {
      do {
        pcVar11 = pcVar2;
        if (iVar7 <= param_6) {
          iVar10 = *param_2;
          if (iVar10 == param_2[1]) {
            if (iVar10 == 0) {
              iVar3 = 8;
            }
            else {
              iVar3 = iVar10 / 2 + iVar10;
            }
            iVar9 = iVar10 + 1;
            if (iVar10 + 1 < iVar3) {
              iVar9 = iVar3;
            }
            lVar4 = FUN_140077ab4((longlong)iVar9 << 2);
            if (*(longlong *)(param_2 + 2) != 0) {
              FUN_1401c5180(lVar4,*(longlong *)(param_2 + 2),(longlong)*param_2 << 2);
              FUN_140077b90(*(undefined8 *)(param_2 + 2));
            }
            *(longlong *)(param_2 + 2) = lVar4;
            param_2[1] = iVar9;
            iVar10 = *param_2;
          }
          else {
            lVar4 = *(longlong *)(param_2 + 2);
          }
          *(int *)(lVar4 + (longlong)iVar10 * 4) = (int)pcVar11 - iVar8;
          *param_2 = *param_2 + 1;
        }
        lVar4 = FUN_1401906f0(pcVar11,10);
        iVar10 = iVar7 + 1;
        pcVar2 = (char *)(lVar4 + 1);
        iVar7 = iVar10;
      } while (lVar4 != 0);
      sVar6 = strlen(pcVar11);
      pcVar11 = pcVar11 + sVar6;
      bVar1 = true;
      goto LAB_1400c0dcb;
    }
    bVar1 = false;
    iVar10 = iVar7;
    if (param_4 <= param_3) goto LAB_1400c0dcb;
    iVar10 = 0;
    do {
      if (iVar10 <= param_6) {
        iVar7 = *param_2;
        if (iVar7 == param_2[1]) {
          if (iVar7 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar7 / 2 + iVar7;
          }
          iVar9 = iVar7 + 1;
          if (iVar7 + 1 < iVar3) {
            iVar9 = iVar3;
          }
          lVar4 = FUN_140077ab4((longlong)iVar9 << 2);
          if (*(longlong *)(param_2 + 2) != 0) {
            FUN_1401c5180(lVar4,*(longlong *)(param_2 + 2),(longlong)*param_2 << 2);
            FUN_140077b90(*(undefined8 *)(param_2 + 2));
          }
          *(longlong *)(param_2 + 2) = lVar4;
          param_2[1] = iVar9;
          iVar7 = *param_2;
        }
        else {
          lVar4 = *(longlong *)(param_2 + 2);
        }
        *(int *)(lVar4 + (longlong)iVar7 * 4) = (int)pcVar11 - iVar8;
        *param_2 = *param_2 + 1;
      }
      lVar4 = FUN_1401c4fe0(pcVar11,10,(longlong)param_4 - (longlong)pcVar11);
      pcVar11 = (char *)(lVar4 + 1);
      if (lVar4 == 0) {
        pcVar11 = param_4;
      }
      iVar10 = iVar10 + 1;
    } while (pcVar11 < param_4);
  }
  else {
    bVar1 = false;
    if (param_4 <= param_3) goto LAB_1400c0dcb;
    iVar10 = 0;
    do {
      if (iVar10 <= param_6) {
        iVar7 = *param_2;
        if (iVar7 == param_2[1]) {
          if (iVar7 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar7 / 2 + iVar7;
          }
          iVar9 = iVar7 + 1;
          if (iVar7 + 1 < iVar3) {
            iVar9 = iVar3;
          }
          lVar5 = FUN_140077ab4((longlong)iVar9 << 2);
          if (*(longlong *)(param_2 + 2) != 0) {
            FUN_1401c5180(lVar5,*(longlong *)(param_2 + 2),(longlong)*param_2 << 2);
            FUN_140077b90(*(undefined8 *)(param_2 + 2));
          }
          *(longlong *)(param_2 + 2) = lVar5;
          param_2[1] = iVar9;
          iVar7 = *param_2;
        }
        else {
          lVar5 = *(longlong *)(param_2 + 2);
        }
        *(int *)(lVar5 + (longlong)iVar7 * 4) = (int)pcVar11 - iVar8;
        *param_2 = *param_2 + 1;
      }
      pcVar11 = (char *)FUN_1400e64e3(*(undefined8 *)(lVar4 + 0x1310),
                                      *(undefined4 *)(lVar4 + 0x1320),pcVar11,param_4,param_5,2);
      pcVar11 = pcVar11 + (*pcVar11 == '\n');
      iVar10 = iVar10 + 1;
    } while (pcVar11 < param_4);
  }
  bVar1 = false;
LAB_1400c0dcb:
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = pcVar11;
    param_4 = pcVar11;
  }
  if (iVar10 == 0) {
    iVar10 = *param_2;
    if (iVar10 == param_2[1]) {
      if (iVar10 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar10 / 2 + iVar10;
      }
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar7) {
        iVar3 = iVar7;
      }
      lVar4 = FUN_140077ab4((longlong)iVar3 << 2);
      if (*(longlong *)(param_2 + 2) != 0) {
        FUN_1401c5180(lVar4,*(longlong *)(param_2 + 2),(longlong)*param_2 << 2);
        FUN_140077b90(*(undefined8 *)(param_2 + 2));
      }
      *(longlong *)(param_2 + 2) = lVar4;
      param_2[1] = iVar3;
      iVar10 = *param_2;
    }
    else {
      lVar4 = *(longlong *)(param_2 + 2);
    }
    *(undefined4 *)(lVar4 + (longlong)iVar10 * 4) = 0;
    *param_2 = *param_2 + 1;
    iVar10 = 1;
  }
  if (((param_3 < param_4) && (!bVar1 && param_4[-1] == '\n')) &&
     (iVar7 = iVar10 + 1, bVar1 = iVar10 <= param_6, iVar10 = iVar7, bVar1)) {
    iVar7 = *param_2;
    if (iVar7 == param_2[1]) {
      if (iVar7 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar7 / 2 + iVar7;
      }
      iVar9 = iVar7 + 1;
      if (iVar7 + 1 < iVar3) {
        iVar9 = iVar3;
      }
      lVar4 = FUN_140077ab4((longlong)iVar9 << 2);
      if (*(longlong *)(param_2 + 2) != 0) {
        FUN_1401c5180(lVar4,*(longlong *)(param_2 + 2),(longlong)*param_2 << 2);
        FUN_140077b90(*(undefined8 *)(param_2 + 2));
      }
      *(longlong *)(param_2 + 2) = lVar4;
      param_2[1] = iVar9;
      iVar7 = *param_2;
    }
    else {
      lVar4 = *(longlong *)(param_2 + 2);
    }
    *(int *)(lVar4 + (longlong)iVar7 * 4) = (int)param_4 - iVar8;
    *param_2 = *param_2 + 1;
  }
  return iVar10;
}

