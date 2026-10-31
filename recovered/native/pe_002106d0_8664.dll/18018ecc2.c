/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018ecc2 */

void FUN_18018ecc2(longlong param_1,int *param_2)

{
  uint *puVar1;
  void *_Buf2;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Buf1;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if (*(int *)(param_1 + 4) < 2) {
    return;
  }
  iVar15 = 0;
  FUN_180195542();
  FUN_18018f22a(param_2);
  iVar17 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar15 = 0;
    if ((longlong)*param_2 < 1) {
LAB_18018ed3a:
      _Buf1 = (void *)0x0;
      iVar11 = 0;
    }
    else {
      lVar13 = (longlong)*param_2 * 0x48 + *(longlong *)(param_2 + 2);
      _Buf1 = (void *)(lVar13 + -0x48);
      if (_Buf1 == (void *)0x0) goto LAB_18018ed3a;
      iVar11 = *(int *)(lVar13 + -0x20) + *(int *)(lVar13 + -0x24);
    }
    iVar17 = 0;
    if (*(int *)(param_1 + 4) != 1) {
      iVar17 = 0;
      lVar13 = 1;
      iVar15 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + lVar13 * 0x20);
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar13 * 0x20);
        uVar12 = (ulonglong)iVar5;
        if ((longlong)uVar12 < 1) {
LAB_18018ee4d:
          uVar6 = puVar1[4];
        }
        else {
          if ((*(int *)(*(longlong *)(puVar1 + 2) + -0x20 + uVar12 * 0x48) == 0) &&
             (*(longlong *)(*(longlong *)(puVar1 + 2) + uVar12 * 0x48 + -0x18) == 0)) {
            uVar12 = (ulonglong)(iVar5 - 1U);
            *puVar1 = iVar5 - 1U;
          }
          if (((int)uVar12 == 0) || (_Buf1 == (void *)0x0)) {
LAB_18018ee10:
            iVar5 = (int)uVar12;
            if (iVar5 < 1) goto LAB_18018ee4d;
          }
          else {
            _Buf2 = *(void **)(puVar1 + 2);
            iVar5 = memcmp(_Buf1,_Buf2,0x24);
            if ((iVar5 == 0) &&
               ((*(longlong *)((longlong)_Buf1 + 0x30) == 0 &&
                (*(longlong *)((longlong)_Buf2 + 0x30) == 0)))) {
              *(int *)((longlong)_Buf1 + 0x28) =
                   *(int *)((longlong)_Buf1 + 0x28) + *(int *)((longlong)_Buf2 + 0x28);
              iVar11 = iVar11 + *(int *)((longlong)_Buf2 + 0x28);
              FUN_1802a82f0();
              uVar12 = (ulonglong)(*puVar1 - 1);
              *puVar1 = *puVar1 - 1;
              goto LAB_18018ee10;
            }
          }
          lVar8 = *(longlong *)(puVar1 + 2);
          iVar5 = (int)uVar12;
          _Buf1 = (void *)(lVar8 + (uVar12 & 0xffffffff) * 0x48 + -0x48);
          uVar6 = puVar1[4];
          lVar10 = 0;
          lVar14 = 0;
          do {
            *(int *)(lVar8 + 0x24 + lVar10) = iVar11;
            lVar8 = *(longlong *)(puVar1 + 2);
            iVar11 = iVar11 + *(int *)(lVar8 + 0x28 + lVar10);
            lVar14 = lVar14 + 1;
            lVar10 = lVar10 + 0x48;
          } while (lVar14 < (int)*puVar1);
        }
        iVar15 = iVar15 + uVar6;
        iVar17 = iVar17 + iVar5;
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_1 + 4));
    }
  }
  iVar5 = *param_2 + iVar17;
  iVar11 = param_2[1];
  if (iVar11 < iVar5) {
    if (iVar11 == 0) {
      iVar11 = 8;
    }
    else {
      iVar11 = iVar11 / 2 + iVar11;
    }
    if (iVar11 <= iVar5) {
      iVar11 = iVar5;
    }
    uVar7 = FUN_1800fe7f8((longlong)iVar11 * 0x48);
    if (*(longlong *)(param_2 + 2) != 0) {
      FUN_1802a82f0(uVar7,*(longlong *)(param_2 + 2),(longlong)*param_2 * 0x48);
      FUN_1800fe8d4(*(undefined8 *)(param_2 + 2));
    }
    *(undefined8 *)(param_2 + 2) = uVar7;
    param_2[1] = iVar11;
  }
  *param_2 = iVar5;
  lVar13 = (longlong)param_2[4] + (longlong)iVar15;
  iVar11 = param_2[5];
  iVar16 = (int)lVar13;
  if (iVar11 < iVar16) {
    if (iVar11 == 0) {
      iVar11 = 8;
    }
    else {
      iVar11 = iVar11 / 2 + iVar11;
    }
    if (iVar11 <= iVar16) {
      iVar11 = iVar16;
    }
    lVar8 = FUN_1800fe7f8((longlong)iVar11 * 2);
    if (*(longlong *)(param_2 + 6) != 0) {
      FUN_1802a82f0(lVar8,*(longlong *)(param_2 + 6),(longlong)param_2[4] * 2);
      FUN_1800fe8d4(*(undefined8 *)(param_2 + 6));
    }
    *(longlong *)(param_2 + 6) = lVar8;
    param_2[5] = iVar11;
    iVar5 = *param_2;
  }
  else {
    lVar8 = *(longlong *)(param_2 + 6);
  }
  param_2[4] = iVar16;
  lVar13 = lVar8 + lVar13 * 2 + (longlong)iVar15 * -2;
  if (1 < *(int *)(param_1 + 4)) {
    lVar8 = (longlong)iVar5 * 0x48 + *(longlong *)(param_2 + 2) + (longlong)iVar17 * -0x48;
    lVar10 = 1;
    lVar14 = 0x38;
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar9 = (longlong)*(int *)(lVar2 + -0x18 + lVar14);
      if (lVar9 != 0) {
        lVar9 = lVar9 * 0x48;
        FUN_1802a82f0(lVar8,*(undefined8 *)(lVar2 + -0x10 + lVar14),lVar9);
        lVar8 = lVar8 + lVar9;
      }
      lVar9 = (longlong)*(int *)(lVar2 + -8 + lVar14);
      if (lVar9 != 0) {
        FUN_1802a82f0(lVar13,*(undefined8 *)(lVar2 + lVar14),lVar9 * 2);
        lVar13 = lVar13 + lVar9 * 2;
      }
      lVar10 = lVar10 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar10 < *(int *)(param_1 + 4));
    iVar5 = *param_2;
  }
  *(longlong *)(param_2 + 0x12) = lVar13;
  if (iVar5 != 0) {
    lVar13 = *(longlong *)(param_2 + 2);
    lVar8 = (longlong)iVar5;
    if (*(longlong *)(lVar13 + -0x18 + lVar8 * 0x48) == 0) goto LAB_18018f012;
  }
  FUN_18018f126(param_2);
  lVar13 = *(longlong *)(param_2 + 2);
  lVar8 = (longlong)*param_2;
LAB_18018f012:
  lVar13 = lVar13 + lVar8 * 0x48;
  if (*(int *)(lVar13 + -0x20) == 0) {
    *(int *)(lVar13 + -0x28) = param_2[0x20];
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x1a);
    uVar4 = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(lVar13 + -0x38) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(lVar13 + -0x30) = uVar4;
    *(undefined8 *)(lVar13 + -0x48) = uVar7;
    *(undefined8 *)(lVar13 + -0x40) = uVar3;
  }
  else {
    iVar15 = memcmp((undefined8 *)(lVar13 + -0x48),param_2 + 0x18,0x24);
    if (iVar15 != 0) {
      FUN_18018f126(param_2);
    }
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

