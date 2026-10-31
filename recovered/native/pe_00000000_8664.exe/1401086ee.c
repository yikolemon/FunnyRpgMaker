/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401086ee */

undefined8 FUN_1401086ee(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  
  if (*(int *)(param_2 + 8) != 0x80000) {
    if (*(int *)(param_2 + 8) != 0x40000) {
      return 0;
    }
    uVar2 = *(ulonglong *)(param_2 + 0x28);
    iVar1 = *(int *)(param_2 + 0x38);
    uVar11 = (longlong)iVar1 + uVar2;
    iVar3 = 0;
    do {
      iVar7 = iVar3;
      uVar6 = uVar11;
      if (uVar6 <= uVar2) break;
      uVar11 = uVar6 - 1;
      iVar3 = iVar7 + 1;
    } while ((0x3b < (ulonglong)*(byte *)(uVar6 - 1)) ||
            ((0x800100100000200U >> ((ulonglong)*(byte *)(uVar6 - 1) & 0x3f) & 1) == 0));
    uVar11 = 0;
    uVar15 = 0;
    plVar13 = (longlong *)0x0;
    for (uVar10 = 0; uVar14 = (uint)uVar11, (int)uVar10 < *(int *)(param_1 + 0x110);
        uVar10 = uVar10 + 1) {
      iVar3 = FUN_140108ae8(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + (ulonglong)uVar10 * 8),
                            uVar6,iVar7);
      if (iVar3 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x118);
        uVar8 = uVar14 + 1;
        plVar5 = plVar13;
        if (uVar14 == uVar15) {
          if (uVar14 == 0) {
            uVar15 = 8;
          }
          else {
            uVar15 = ((int)((int)(uVar11 >> 0x1f) + uVar14) >> 1) + uVar14;
          }
          if ((int)uVar15 <= (int)uVar8) {
            uVar15 = uVar8;
          }
          plVar5 = (longlong *)FUN_140077ab4((longlong)(int)uVar15 << 3);
          if (plVar13 != (longlong *)0x0) {
            FUN_1401c5180(plVar5,plVar13,(longlong)(int)uVar14 << 3);
            FUN_140077b90(plVar13);
          }
        }
        plVar5[(int)uVar14] = *(longlong *)(lVar9 + (ulonglong)uVar10 * 8);
        uVar11 = (ulonglong)uVar8;
        plVar13 = plVar5;
      }
    }
    if (uVar14 == 0) {
      FUN_140108340(param_1,"No match for \"%.*s\"!\n",iVar7,uVar6);
    }
    else {
      if (uVar14 != 1) {
        uVar11 = (ulonglong)iVar7;
        do {
          if (0 < (int)uVar14) {
            iVar3 = 0;
            lVar9 = 0;
            do {
              if (lVar9 == 0) {
                iVar3 = toupper((int)*(char *)(*plVar13 + uVar11));
              }
              else if ((iVar3 == 0) ||
                      (iVar4 = toupper((int)*(char *)(plVar13[lVar9] + uVar11)), iVar3 != iVar4)) {
                if (0 < (longlong)uVar11) {
                  FUN_1400bfea0(param_2,(((int)uVar2 + iVar1) - *(int *)(param_2 + 0x28)) - iVar7);
                  FUN_1400bfefc(param_2,*(undefined4 *)(param_2 + 0x38),*plVar13,
                                (uVar11 & 0xffffffff) + *plVar13);
                }
                FUN_140108340(param_1,"Possible matches:\n");
                for (uVar15 = 0; (int)uVar15 < (int)uVar14; uVar15 = uVar15 + 1) {
                  FUN_140108340(param_1,"- %s\n",plVar13[uVar15]);
                }
                goto code_r0x000140108956;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < (int)uVar14);
          }
          uVar11 = uVar11 + 1;
        } while( true );
      }
      FUN_1400bfea0(param_2,(((int)uVar2 + iVar1) - *(int *)(param_2 + 0x28)) - iVar7);
      FUN_1400bfefc(param_2,*(undefined4 *)(param_2 + 0x38),*plVar13,0);
      FUN_1400bfefc(param_2,*(undefined4 *)(param_2 + 0x38),&DAT_140edaed0,0);
    }
code_r0x000140108956:
    if (plVar13 == (longlong *)0x0) {
      return 0;
    }
    FUN_140077b90(plVar13);
    return 0;
  }
  uVar15 = *(uint *)(param_1 + 0x130);
  if (*(int *)(param_2 + 0x1c) == 0x204) {
    if (uVar15 == 0xffffffff) {
      return 0;
    }
    uVar10 = 0xffffffff;
    if ((int)(uVar15 + 1) < *(int *)(param_1 + 0x120)) {
      uVar10 = uVar15 + 1;
    }
code_r0x000140108a52:
    *(uint *)(param_1 + 0x130) = uVar10;
    if (uVar15 == uVar10) {
      return 0;
    }
    if ((int)uVar10 < 0) {
      puVar12 = &DAT_140edcdbf;
      goto code_r0x000140108a7c;
    }
  }
  else {
    if (*(int *)(param_2 + 0x1c) != 0x203) {
      return 0;
    }
    if (uVar15 == 0xffffffff) {
      uVar10 = *(int *)(param_1 + 0x120) - 1;
      goto code_r0x000140108a52;
    }
    if ((int)uVar15 < 1) {
      return 0;
    }
    uVar10 = uVar15 - 1;
    *(uint *)(param_1 + 0x130) = uVar10;
  }
  puVar12 = *(undefined **)(*(longlong *)(param_1 + 0x128) + (ulonglong)uVar10 * 8);
code_r0x000140108a7c:
  FUN_1400bfea0(param_2,0,*(undefined4 *)(param_2 + 0x30));
  FUN_1400bfefc(param_2,0,puVar12,0);
  return 0;
}

