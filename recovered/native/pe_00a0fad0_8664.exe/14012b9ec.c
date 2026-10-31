/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012b9ec */

ulonglong thunk_FUN_14012bd4c(ulonglong param_1,int param_2)

{
  ulonglong uVar1;
  short sVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  LPCWSTR lpName;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar10 = 0;
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_140113dd4();
    *puVar5 = 0x16;
    return 0xffffffffffffffff;
  }
  uVar6 = FUN_140107f30(param_1,0x3d);
  if ((uVar6 == 0) || (uVar6 == param_1)) {
    puVar5 = (undefined4 *)FUN_140113dd4();
    *puVar5 = 0x16;
    FUN_1401212e0(param_1);
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(uVar6 + 2);
  if (DAT_140354cd0 == DAT_140354cd8) {
    DAT_140354cd0 = (longlong *)FUN_14012c198(DAT_140354cd0);
  }
  if (DAT_140354cd0 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_140354cc8 == 0)) {
      if (sVar2 == 0) goto LAB_14012be04;
      if (DAT_140354cc8 == 0) {
        DAT_140354cc8 = _calloc_base(1,8);
        FUN_1401212e0(0);
        if (DAT_140354cc8 == 0) goto LAB_14012be00;
        if (DAT_140354cd0 != (longlong *)0x0) goto LAB_14012bea8;
      }
      DAT_140354cd0 = (longlong *)_calloc_base(1,8);
      FUN_1401212e0(0);
      if (DAT_140354cd0 != (longlong *)0x0) goto LAB_14012be9f;
    }
    else {
      lVar7 = FUN_140114c08();
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_140113dd4();
        *puVar5 = 0x16;
      }
      else {
        if (DAT_140354cd0 == DAT_140354cd8) {
          DAT_140354cd0 = (longlong *)FUN_14012c198(DAT_140354cd0);
        }
LAB_14012be9f:
        if (DAT_140354cd0 != (longlong *)0x0) goto LAB_14012bea8;
      }
    }
  }
  else {
LAB_14012bea8:
    plVar8 = DAT_140354cd0;
    lVar11 = (longlong)(uVar6 - param_1) >> 1;
    lVar7 = *DAT_140354cd0;
    plVar9 = DAT_140354cd0;
    while (lVar7 != 0) {
      iVar3 = FUN_140129c10(param_1,lVar7,lVar11);
      if ((iVar3 == 0) &&
         ((*(short *)(*plVar9 + lVar11 * 2) == 0x3d || (*(short *)(*plVar9 + lVar11 * 2) == 0)))) {
        lVar7 = (longlong)plVar9 - (longlong)plVar8 >> 3;
        goto LAB_14012bef4;
      }
      plVar9 = plVar9 + 1;
      lVar7 = *plVar9;
    }
    lVar7 = -((longlong)plVar9 - (longlong)plVar8 >> 3);
LAB_14012bef4:
    uVar6 = uVar10;
    if ((-1 < lVar7) && (*plVar8 != 0)) {
      FUN_1401212e0(plVar8[lVar7]);
      if (sVar2 == 0) {
        for (; plVar8[lVar7] != 0; lVar7 = lVar7 + 1) {
          plVar8[lVar7] = plVar8[lVar7 + 1];
        }
        plVar8 = (longlong *)_recalloc_base(plVar8,lVar7,8);
        FUN_1401212e0(0);
        uVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_140354cd0 = plVar8;
        }
      }
      else {
        plVar8[lVar7] = param_1;
      }
LAB_14012bfbe:
      if (param_2 == 0) {
LAB_14012c05b:
        FUN_1401212e0(uVar6);
        return 0;
      }
      lVar7 = -1;
      do {
        lVar12 = lVar7;
        lVar7 = lVar12 + 1;
      } while (*(short *)(param_1 + lVar7 * 2) != 0);
      lpName = (LPCWSTR)_calloc_base(lVar12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        FUN_1401212e0(0);
      }
      else {
        iVar3 = FUN_140121bd0();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVar11] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(ulonglong)(sVar2 != 0) &
                                           (ulonglong)(lpName + lVar11 + 1)));
        if (BVar4 != 0) {
          FUN_1401212e0(lpName);
          goto LAB_14012c05b;
        }
        puVar5 = (undefined4 *)FUN_140113dd4();
        *puVar5 = 0x2a;
        FUN_1401212e0(lpName);
        uVar10 = 0xffffffff;
      }
      FUN_1401212e0(uVar6);
      return uVar10;
    }
    if (sVar2 == 0) goto LAB_14012be04;
    uVar1 = -lVar7 + 2;
    if (((ulonglong)-lVar7 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = (longlong *)_recalloc_base(plVar8,uVar1,8);
      FUN_1401212e0(0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-lVar7] = param_1;
        plVar8[1 - lVar7] = 0;
        DAT_140354cd0 = plVar8;
        goto LAB_14012bfbe;
      }
    }
  }
LAB_14012be00:
  uVar10 = 0xffffffffffffffff;
LAB_14012be04:
  FUN_1401212e0(param_1);
  return uVar10 & 0xffffffff;
}

