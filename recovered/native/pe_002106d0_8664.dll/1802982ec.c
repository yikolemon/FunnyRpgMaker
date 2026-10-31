/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802982ec */

ulonglong thunk_FUN_1802982f4(ulonglong param_1,int param_2)

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
    puVar5 = (undefined4 *)FUN_18027e66c();
    *puVar5 = 0x16;
    return 0xffffffffffffffff;
  }
  uVar6 = FUN_1802a66e0(param_1,0x3d);
  if ((uVar6 == 0) || (uVar6 == param_1)) {
    puVar5 = (undefined4 *)FUN_18027e66c();
    *puVar5 = 0x16;
    FUN_180290e40(param_1);
    return 0xffffffffffffffff;
  }
  sVar2 = *(short *)(uVar6 + 2);
  if (DAT_180420ef0 == DAT_180420ef8) {
    DAT_180420ef0 = (longlong *)FUN_180298658(DAT_180420ef0);
  }
  if (DAT_180420ef0 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_180420ee8 == 0)) {
      if (sVar2 == 0) goto LAB_1802983ac;
      if (DAT_180420ee8 == 0) {
        DAT_180420ee8 = _calloc_base(1,8);
        FUN_180290e40(0);
        if (DAT_180420ee8 == 0) goto LAB_1802983a8;
        if (DAT_180420ef0 != (longlong *)0x0) goto LAB_180298450;
      }
      DAT_180420ef0 = (longlong *)_calloc_base(1,8);
      FUN_180290e40(0);
      if (DAT_180420ef0 != (longlong *)0x0) goto LAB_180298447;
    }
    else {
      lVar7 = FUN_18027efcc();
      if (lVar7 == 0) {
        puVar5 = (undefined4 *)FUN_18027e66c();
        *puVar5 = 0x16;
      }
      else {
        if (DAT_180420ef0 == DAT_180420ef8) {
          DAT_180420ef0 = (longlong *)FUN_180298658(DAT_180420ef0);
        }
LAB_180298447:
        if (DAT_180420ef0 != (longlong *)0x0) goto LAB_180298450;
      }
    }
  }
  else {
LAB_180298450:
    plVar8 = DAT_180420ef0;
    lVar11 = (longlong)(uVar6 - param_1) >> 1;
    lVar7 = *DAT_180420ef0;
    plVar9 = DAT_180420ef0;
    while (lVar7 != 0) {
      iVar3 = FUN_1802a0830(param_1,lVar7,lVar11);
      if ((iVar3 == 0) &&
         ((*(short *)(*plVar9 + lVar11 * 2) == 0x3d || (*(short *)(*plVar9 + lVar11 * 2) == 0)))) {
        lVar7 = (longlong)plVar9 - (longlong)plVar8 >> 3;
        goto LAB_18029849c;
      }
      plVar9 = plVar9 + 1;
      lVar7 = *plVar9;
    }
    lVar7 = -((longlong)plVar9 - (longlong)plVar8 >> 3);
LAB_18029849c:
    uVar6 = uVar10;
    if ((-1 < lVar7) && (*plVar8 != 0)) {
      FUN_180290e40(plVar8[lVar7]);
      if (sVar2 == 0) {
        for (; plVar8[lVar7] != 0; lVar7 = lVar7 + 1) {
          plVar8[lVar7] = plVar8[lVar7 + 1];
        }
        plVar8 = (longlong *)_recalloc_base(plVar8,lVar7,8);
        FUN_180290e40(0);
        uVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_180420ef0 = plVar8;
        }
      }
      else {
        plVar8[lVar7] = param_1;
      }
LAB_180298566:
      if (param_2 == 0) {
LAB_180298603:
        FUN_180290e40(uVar6);
        return 0;
      }
      lVar7 = -1;
      do {
        lVar12 = lVar7;
        lVar7 = lVar12 + 1;
      } while (*(short *)(param_1 + lVar7 * 2) != 0);
      lpName = (LPCWSTR)_calloc_base(lVar12 + 3);
      if (lpName == (LPCWSTR)0x0) {
        FUN_180290e40(0);
      }
      else {
        iVar3 = FUN_180291780();
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[lVar11] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(ulonglong)(sVar2 != 0) &
                                           (ulonglong)(lpName + lVar11 + 1)));
        if (BVar4 != 0) {
          FUN_180290e40(lpName);
          goto LAB_180298603;
        }
        puVar5 = (undefined4 *)FUN_18027e66c();
        *puVar5 = 0x2a;
        FUN_180290e40(lpName);
        uVar10 = 0xffffffff;
      }
      FUN_180290e40(uVar6);
      return uVar10;
    }
    if (sVar2 == 0) goto LAB_1802983ac;
    uVar1 = -lVar7 + 2;
    if (((ulonglong)-lVar7 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = (longlong *)_recalloc_base(plVar8,uVar1,8);
      FUN_180290e40(0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-lVar7] = param_1;
        plVar8[1 - lVar7] = 0;
        DAT_180420ef0 = plVar8;
        goto LAB_180298566;
      }
    }
  }
LAB_1802983a8:
  uVar10 = 0xffffffffffffffff;
LAB_1802983ac:
  FUN_180290e40(param_1);
  return uVar10 & 0xffffffff;
}

