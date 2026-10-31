/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d20b2 */

void FUN_1400d20b2(int param_1,char *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1 < 0x7ffc) {
    if ((0x12 < param_1 - 0x3a4U) || ((0x60011U >> (param_1 - 0x3a4U & 0x1f) & 1) == 0)) {
      if (param_1 - 0x4b0U < 2) {
        lVar5 = FUN_14011cf50(param_2);
        uVar7 = lVar5 * 2;
        if (param_3 - 2U <= uVar7) {
          return;
        }
        param_2 = param_2 + lVar5 * 2;
        goto LAB_1400d2170;
      }
      if (param_1 != 0x4e4) {
        return;
      }
    }
  }
  else if (1 < param_1 - 0x7ffcU) {
    if (param_1 - 0x7ffeU < 2) {
      param_2 = param_2 + -4;
      uVar7 = 0xfffffffffffffffc;
      do {
        uVar7 = uVar7 + 4;
        piVar1 = (int *)(param_2 + 4);
        param_2 = param_2 + 4;
      } while (*piVar1 != 0);
      if (param_3 - 4U <= uVar7) {
        return;
      }
      goto LAB_1400d2170;
    }
    if (param_1 != 0xfde9) {
      return;
    }
  }
  uVar7 = strlen(param_2);
  if (param_3 - 1U <= uVar7) {
    return;
  }
  param_2 = param_2 + uVar7;
LAB_1400d2170:
  uVar7 = param_3 - uVar7;
  if (param_1 < 0x7ffc) {
    if ((0x12 < param_1 - 0x3a4U) || ((0x60011U >> (param_1 - 0x3a4U & 0x1f) & 1) == 0)) {
      if (param_1 - 0x4b0U < 2) {
        if (uVar7 < 2) {
          return;
        }
        lVar5 = 0;
        if (uVar7 != 2) {
          uVar6 = 0;
          do {
            sVar2 = *(short *)(param_4 + lVar5 * 2);
            if (sVar2 == 0) break;
            *(short *)(param_2 + lVar5 * 2) = sVar2;
            lVar5 = lVar5 + 1;
            uVar6 = uVar6 + 2;
          } while (uVar6 < uVar7 - 2);
        }
        (param_2 + lVar5 * 2)[0] = '\0';
        (param_2 + lVar5 * 2)[1] = '\0';
        return;
      }
      if (param_1 != 0x4e4) {
        return;
      }
    }
  }
  else if (1 < param_1 - 0x7ffcU) {
    if (param_1 - 0x7ffeU < 2) {
      if (uVar7 < 4) {
        return;
      }
      lVar5 = 0;
      if (uVar7 != 4) {
        uVar6 = 0;
        do {
          iVar3 = *(int *)(param_4 + lVar5 * 4);
          if (iVar3 == 0) break;
          *(int *)(param_2 + lVar5 * 4) = iVar3;
          lVar5 = lVar5 + 1;
          uVar6 = uVar6 + 4;
        } while (uVar6 < uVar7 - 4);
      }
      param_2 = param_2 + lVar5 * 4;
      param_2[0] = '\0';
      param_2[1] = '\0';
      param_2[2] = '\0';
      param_2[3] = '\0';
      return;
    }
    if (param_1 != 0xfde9) {
      return;
    }
  }
  if (uVar7 == 0) {
    return;
  }
  lVar4 = 0;
  lVar8 = uVar7 - 1;
  lVar5 = lVar4;
  if (lVar8 != 0) {
    do {
      lVar5 = lVar4;
      if (*(char *)(param_4 + lVar4) == '\0') break;
      param_2[lVar4] = *(char *)(param_4 + lVar4);
      lVar4 = lVar4 + 1;
      lVar5 = lVar8;
    } while (lVar8 != lVar4);
  }
  param_2[lVar5] = '\0';
  return;
}

