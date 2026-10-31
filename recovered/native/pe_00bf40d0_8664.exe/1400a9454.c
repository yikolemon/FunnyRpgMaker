/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a9454 */

undefined1 (*) [32] FUN_1400a9454(undefined1 (*param_1) [32],int param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  BOOL BVar4;
  __acrt_ptd *p_Var5;
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  longlong *plVar8;
  LPCWSTR lpName;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [32];
  ulonglong uVar13;
  longlong lVar14;
  
  pauVar12 = (undefined1 (*) [32])0x0;
  if (param_1 == (undefined1 (*) [32])0x0) {
    p_Var5 = FUN_140095e5c();
    *(undefined4 *)p_Var5 = 0x16;
    return (undefined1 (*) [32])0xffffffffffffffff;
  }
  pauVar6 = (undefined1 (*) [32])FUN_1400b1c40((ushort *)param_1,0x3d);
  if ((pauVar6 == (undefined1 (*) [32])0x0) || (pauVar6 == param_1)) {
    p_Var5 = FUN_140095e5c();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_1400a1290(param_1);
    return (undefined1 (*) [32])0xffffffffffffffff;
  }
  uVar2 = *(ushort *)((longlong)*pauVar6 + 2);
  if (DAT_140142e98 == DAT_140142ea0) {
    DAT_140142e98 = FUN_1400a97b8(DAT_140142e98);
  }
  if (DAT_140142e98 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_140142e90 == (LPVOID)0x0)) {
      if (uVar2 == 0) goto LAB_1400a950c;
      if (DAT_140142e90 == (LPVOID)0x0) {
        DAT_140142e90 = _calloc_base(1,8);
        FUN_1400a1290((LPVOID)0x0);
        if (DAT_140142e90 == (LPVOID)0x0) goto LAB_1400a9508;
        if (DAT_140142e98 != (longlong *)0x0) goto LAB_1400a95b0;
      }
      DAT_140142e98 = _calloc_base(1,8);
      FUN_1400a1290((LPVOID)0x0);
      if (DAT_140142e98 != (longlong *)0x0) goto LAB_1400a95a7;
    }
    else {
      lVar7 = FUN_14009633c();
      if (lVar7 == 0) {
        p_Var5 = FUN_140095e5c();
        *(undefined4 *)p_Var5 = 0x16;
      }
      else {
        if (DAT_140142e98 == DAT_140142ea0) {
          DAT_140142e98 = FUN_1400a97b8(DAT_140142e98);
        }
LAB_1400a95a7:
        if (DAT_140142e98 != (longlong *)0x0) goto LAB_1400a95b0;
      }
    }
  }
  else {
LAB_1400a95b0:
    plVar8 = DAT_140142e98;
    uVar13 = (longlong)pauVar6 - (longlong)param_1 >> 1;
    pauVar6 = (undefined1 (*) [32])*DAT_140142e98;
    plVar10 = DAT_140142e98;
    while (pauVar6 != (undefined1 (*) [32])0x0) {
      iVar3 = FUN_1400ad840(param_1,pauVar6,uVar13);
      if ((iVar3 == 0) &&
         ((*(short *)(*plVar10 + uVar13 * 2) == 0x3d || (*(short *)(*plVar10 + uVar13 * 2) == 0))))
      {
        uVar11 = (longlong)plVar10 - (longlong)plVar8 >> 3;
        goto LAB_1400a95fc;
      }
      plVar10 = plVar10 + 1;
      pauVar6 = (undefined1 (*) [32])*plVar10;
    }
    uVar11 = -((longlong)plVar10 - (longlong)plVar8 >> 3);
LAB_1400a95fc:
    pauVar6 = pauVar12;
    if ((-1 < (longlong)uVar11) && (*plVar8 != 0)) {
      FUN_1400a1290((LPVOID)plVar8[uVar11]);
      if (uVar2 == 0) {
        for (; plVar8[uVar11] != 0; uVar11 = uVar11 + 1) {
          plVar8[uVar11] = plVar8[uVar11 + 1];
        }
        plVar8 = _recalloc_base(plVar8,uVar11,8);
        FUN_1400a1290((LPVOID)0x0);
        pauVar6 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_140142e98 = plVar8;
        }
      }
      else {
        plVar8[uVar11] = (longlong)param_1;
      }
LAB_1400a96c6:
      if (param_2 == 0) {
LAB_1400a9763:
        FUN_1400a1290(pauVar6);
        return (undefined1 (*) [32])0x0;
      }
      lVar7 = -1;
      do {
        lVar14 = lVar7;
        lVar7 = lVar14 + 1;
      } while (*(short *)(*param_1 + lVar14 * 2 + 2) != 0);
      lpName = _calloc_base(lVar14 + 3U,2);
      if (lpName == (LPCWSTR)0x0) {
        FUN_1400a1290((LPVOID)0x0);
      }
      else {
        uVar9 = FUN_1400a1b80(lpName,lVar14 + 3U,(longlong)param_1);
        if ((int)uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[uVar13] = L'\0';
        BVar4 = SetEnvironmentVariableW
                          (lpName,(LPCWSTR)(-(ulonglong)(uVar2 != 0) &
                                           (ulonglong)(lpName + uVar13 + 1)));
        if (BVar4 != 0) {
          FUN_1400a1290(lpName);
          goto LAB_1400a9763;
        }
        p_Var5 = FUN_140095e5c();
        *(undefined4 *)p_Var5 = 0x2a;
        FUN_1400a1290(lpName);
        pauVar12 = (undefined1 (*) [32])0xffffffff;
      }
      FUN_1400a1290(pauVar6);
      return pauVar12;
    }
    if (uVar2 == 0) goto LAB_1400a950c;
    uVar1 = -uVar11 + 2;
    if ((-uVar11 <= uVar1) && (uVar1 < 0x1fffffffffffffff)) {
      plVar8 = _recalloc_base(plVar8,uVar1,8);
      FUN_1400a1290((LPVOID)0x0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-uVar11] = (longlong)param_1;
        plVar8[1 - uVar11] = 0;
        DAT_140142e98 = plVar8;
        goto LAB_1400a96c6;
      }
    }
  }
LAB_1400a9508:
  pauVar12 = (undefined1 (*) [32])0xffffffffffffffff;
LAB_1400a950c:
  FUN_1400a1290(param_1);
  return (undefined1 (*) [32])((ulonglong)pauVar12 & 0xffffffff);
}

