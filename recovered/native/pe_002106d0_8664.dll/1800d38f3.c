/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d38f3 */

undefined8 FUN_1800d38f3(longlong *param_1,int param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  *param_1 = 0;
  uVar8 = 4;
  uVar11 = 0;
  uVar4 = 0;
  do {
    lVar3 = *(longlong *)(param_4 + uVar4 * 8);
    if (lVar3 == 0) {
      return 0;
    }
    uVar7 = ~uVar8;
    lVar12 = 0;
    while (*(char *)(lVar3 + lVar12) != '\0') {
      uVar7 = uVar7 - 1;
      lVar12 = lVar12 + 1;
      if (lVar12 == 0x1000) {
        return 0;
      }
    }
    uVar8 = -uVar7;
    uVar4 = uVar4 + 1;
  } while (uVar4 != param_3);
  uVar7 = -uVar7;
  piVar5 = (int *)thunk_FUN_180239630();
  *piVar5 = uVar7 + 0x10;
  piVar5[1] = param_2;
  piVar5[2] = param_3;
  if (uVar7 < 0x10001) {
    uVar8 = 0;
    uVar4 = 0;
    do {
      if ((0x10000 < uVar8) || (uVar7 <= uVar8 + 2)) goto code_r0x0001800d3b11;
      uVar9 = (ulonglong)uVar8;
      lVar3 = *(longlong *)(param_4 + uVar4 * 8);
      uVar10 = (ulonglong)(uVar7 - uVar8);
      lVar12 = -0x7ffffffd;
      do {
        cVar2 = *(char *)(lVar3 + 0x7ffffffd + lVar12);
        lVar1 = lVar12;
        if (cVar2 == '\0') goto code_r0x0001800d3a60;
        *(char *)((longlong)piVar5 + lVar12 + uVar9 + 0x80000009) = cVar2;
        lVar1 = lVar12 + 1;
      } while ((lVar12 - uVar10 != -0x7ffffffe) && (bVar15 = lVar12 != 0, lVar12 = lVar1, bVar15));
      if (lVar1 - uVar10 == -0x7ffffffd) {
        *(undefined1 *)((longlong)piVar5 + lVar1 + uVar9 + 0x80000008) = 0;
        goto code_r0x0001800d3b11;
      }
code_r0x0001800d3a60:
      *(undefined1 *)((longlong)piVar5 + lVar1 + uVar9 + 0xc + 0x7ffffffd) = 0;
      iVar13 = -1;
      uVar14 = 1;
      uVar6 = 0;
      while (*(char *)((longlong)piVar5 + uVar6 + uVar9 + 0xc) != '\0') {
        iVar13 = iVar13 + -1;
        uVar6 = uVar6 + 1;
        uVar14 = uVar14 + 1;
        if (uVar10 == uVar6) goto code_r0x0001800d3b11;
      }
      if (3 < (uint)-iVar13) {
        lVar3 = uVar9 + 0xb;
        uVar10 = (ulonglong)uVar14;
        do {
          uVar6 = uVar10 - 1;
          if (((*(char *)((longlong)piVar5 + uVar6 + uVar9 + 10) == '6') &&
              (*(char *)((longlong)piVar5 + uVar6 + lVar3) == '4')) &&
             (*(char *)((longlong)piVar5 + uVar6 + uVar9 + 0xc) == '.')) {
            *(undefined1 *)((longlong)piVar5 + (uVar10 - 2) + lVar3) = 0x33;
            *(undefined1 *)((longlong)piVar5 + uVar6 + lVar3) = 0x32;
            break;
          }
          uVar10 = uVar6;
        } while ((uVar6 & 0xfffffffc) != 0);
      }
      uVar8 = uVar8 - iVar13;
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_3);
    *param_1 = (longlong)piVar5;
    uVar11 = 1;
  }
  else {
code_r0x0001800d3b11:
    thunk_FUN_1802464a0(piVar5);
  }
  return uVar11;
}

