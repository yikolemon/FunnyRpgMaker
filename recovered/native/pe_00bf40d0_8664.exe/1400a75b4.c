/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a75b4 */

undefined8 FUN_1400a75b4(short *param_1,uint *param_2,LPWSTR param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  LPWSTR pWVar4;
  LPWSTR pWVar5;
  bool bVar6;
  uint _Val;
  BOOL BVar7;
  int iVar8;
  longlong lVar9;
  undefined7 extraout_var;
  ushort *puVar10;
  longlong *plVar11;
  longlong lVar12;
  
  lVar9 = FUN_1400a1528();
  plVar11 = (longlong *)(param_1 + 0x40);
  plVar1 = (longlong *)(lVar9 + 0x98);
  *(undefined4 *)(lVar9 + 0xa8) = 0;
  puVar2 = (undefined2 *)(lVar9 + 0x2f0);
  *plVar1 = (longlong)param_1;
  plVar3 = (longlong *)(lVar9 + 0xa0);
  *puVar2 = 0;
  *plVar3 = (longlong)plVar11;
  if ((short)*plVar11 != 0) {
    plVar11 = plVar3;
    TranslateName(0x140110390,0x16,plVar3);
  }
  if (*(short *)*plVar1 == 0) {
    FUN_1400a7e14((longlong)plVar1);
LAB_1400a768c:
    if (*(int *)(lVar9 + 0xa8) == 0) {
      return 0;
    }
  }
  else {
    if (*(short *)*plVar3 == 0) {
      GetLocaleNameFromLanguage(plVar1);
    }
    else {
      GetLocaleNameFromLangCountry(plVar1);
    }
    if (*(int *)(lVar9 + 0xa8) == 0) {
      plVar11 = plVar1;
      bVar6 = TranslateName(0x14010ff70,0x40,plVar1);
      if ((int)CONCAT71(extraout_var,bVar6) != 0) {
        if (*(short *)*plVar3 == 0) {
          GetLocaleNameFromLanguage(plVar1);
        }
        else {
          GetLocaleNameFromLangCountry(plVar1);
        }
      }
      goto LAB_1400a768c;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    _Val = FUN_1400a7ebc((WCHAR *)(-(ulonglong)(param_1 != (short *)0x0) &
                                  (ulonglong)(param_1 + 0x80)),(longlong)plVar1,plVar11,param_4);
  }
  else {
    _Val = GetACP();
  }
  if (((_Val != 0) && (_Val != 65000)) && (BVar7 = IsValidCodePage(_Val & 0xffff), BVar7 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    if (param_3 == (LPWSTR)0x0) {
      return 1;
    }
    pWVar4 = param_3 + 0x90;
    *pWVar4 = L'\0';
    lVar9 = -1;
    do {
      lVar12 = lVar9;
      lVar9 = lVar12 + 1;
    } while (puVar2[lVar9] != 0);
    iVar8 = FUN_1400a6f60(pWVar4,0x55,(longlong)puVar2,lVar12 + 2);
    if (iVar8 != 0) {
LAB_1400a7818:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar8 = FUN_1400a1e0c((ushort *)pWVar4,0x1001,param_3,0x40);
    if (iVar8 != 0) {
      pWVar5 = param_3 + 0x40;
      iVar8 = FUN_1400a1e0c((ushort *)pWVar4,0x1002,pWVar5,0x40);
      if ((iVar8 != 0) &&
         (((puVar10 = FUN_1400b1c40((ushort *)pWVar5,0x5f), puVar10 == (ushort *)0x0 &&
           (puVar10 = FUN_1400b1c40((ushort *)pWVar5,0x2e), puVar10 == (ushort *)0x0)) ||
          (iVar8 = FUN_1400a1e0c((ushort *)pWVar4,7,pWVar5,0x40), iVar8 != 0)))) {
        if (_Val != 0xfde9) {
          FID_conflict__ltow_s(_Val,param_3 + 0x80,0x10,10);
          return 1;
        }
        iVar8 = FUN_1400a6f60(param_3 + 0x80,0x10,0x14011fb28,5);
        if (iVar8 == 0) {
          return 1;
        }
        goto LAB_1400a7818;
      }
    }
  }
  return 0;
}

