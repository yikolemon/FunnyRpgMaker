/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002fde9 */

int FUN_18002fde9(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  iVar4 = (int)param_2[0x15];
  lVar9 = (longlong)iVar4;
  lVar8 = (int)param_2[1] + lVar9;
  iVar1 = (int)param_1[0x15];
  lVar5 = (longlong)iVar1;
  lVar11 = (int)param_1[1] + lVar5;
  iVar10 = (int)lVar11;
  iVar7 = (int)lVar8;
  if (iVar7 < iVar10) {
    iVar7 = iVar10;
  }
  iVar10 = (int)param_3[0x15];
  lVar6 = (longlong)iVar10;
  iVar14 = (int)param_3[1];
  iVar3 = (int)(iVar14 + lVar6);
  if (iVar7 + 1 < iVar3) {
LAB_18002fe34:
    iVar1 = -1;
  }
  else if (iVar3 < iVar7) {
LAB_18002fe42:
    iVar1 = 1;
  }
  else {
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    if (iVar10 <= iVar4) {
      iVar4 = iVar10;
    }
    iVar1 = 0;
    if (iVar4 < iVar3) {
      puVar15 = (uint *)(*param_3 + (longlong)iVar14 * 4);
      lVar2 = iVar14 + lVar6;
      uVar17 = 0;
      do {
        puVar15 = puVar15 + -1;
        if (lVar5 < lVar2) {
          uVar13 = 0;
          if (lVar2 <= lVar11) {
            uVar13 = (ulonglong)*(uint *)(*param_1 + lVar5 * -4 + -4 + lVar2 * 4);
          }
        }
        else {
          uVar13 = 0;
        }
        if (lVar9 < lVar2) {
          uVar12 = 0;
          if (lVar2 <= lVar8) {
            uVar12 = (ulonglong)*(uint *)(*param_2 + lVar9 * -4 + -4 + lVar2 * 4);
          }
        }
        else {
          uVar12 = 0;
        }
        uVar16 = uVar17;
        if (lVar2 <= iVar14 + lVar6 && lVar6 < lVar2) {
          uVar16 = uVar17 | *puVar15;
        }
        uVar12 = uVar12 + uVar13;
        if (uVar16 < uVar12) goto LAB_18002fe42;
        if (1 < uVar16 - uVar12) goto LAB_18002fe34;
        lVar2 = lVar2 + -1;
        uVar17 = uVar16 - uVar12 << 0x20;
      } while (iVar4 < lVar2);
      iVar1 = -(uint)(uVar16 != uVar12);
    }
  }
  return iVar1;
}

