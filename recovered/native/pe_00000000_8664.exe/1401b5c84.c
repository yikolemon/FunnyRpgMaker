/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b5c84 */

undefined8 FUN_1401b5c84(short *param_1,uint *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  int iVar4;
  uint _Val;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_1401aecc8();
  puVar1 = (undefined8 *)(lVar6 + 0x98);
  *(undefined4 *)(lVar6 + 0xa8) = 0;
  *puVar1 = param_1;
  plVar2 = (longlong *)(lVar6 + 0xa0);
  *(undefined2 *)(lVar6 + 0x2f0) = 0;
  *plVar2 = (longlong)(param_1 + 0x40);
  if (param_1[0x40] != 0) {
    TranslateName(&PTR_u_america_140eb7ee0,0x16,plVar2);
  }
  if (*(short *)*puVar1 == 0) {
    FUN_1401b64e4(puVar1);
LAB_1401b5d5c:
    if (*(int *)(lVar6 + 0xa8) == 0) {
      return 0;
    }
  }
  else {
    if (*(short *)*plVar2 == 0) {
      GetLocaleNameFromLanguage();
    }
    else {
      GetLocaleNameFromLangCountry();
    }
    if (*(int *)(lVar6 + 0xa8) == 0) {
      iVar4 = TranslateName(&PTR_u_american_140edf380_0x10_140eb7ac0,0x40,puVar1);
      if (iVar4 != 0) {
        if (*(short *)*plVar2 == 0) {
          GetLocaleNameFromLanguage(puVar1);
        }
        else {
          GetLocaleNameFromLangCountry();
        }
      }
      goto LAB_1401b5d5c;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    _Val = FUN_1401b658c(-(ulonglong)(param_1 != (short *)0x0) & (ulonglong)(param_1 + 0x80),puVar1)
    ;
  }
  else {
    _Val = GetACP();
  }
  if (((_Val != 0) && (_Val != 65000)) && (BVar5 = IsValidCodePage(_Val & 0xffff), BVar5 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    if (param_3 == 0) {
      return 1;
    }
    puVar3 = (undefined2 *)(param_3 + 0x120);
    lVar7 = -1;
    *puVar3 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (((undefined2 *)(lVar6 + 0x2f0))[lVar7] != 0);
    iVar4 = FUN_1401b5630();
    if (iVar4 != 0) {
LAB_1401b5ee8:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar4 = FUN_1401af6c0(puVar3,0x1001,param_3,0x40);
    if (iVar4 != 0) {
      lVar6 = param_3 + 0x80;
      iVar4 = FUN_1401af6c0(puVar3,0x1002,lVar6,0x40);
      if ((iVar4 != 0) &&
         (((lVar7 = FUN_1401c2240(lVar6,0x5f), lVar7 == 0 &&
           (lVar7 = FUN_1401c2240(lVar6,0x2e), lVar7 == 0)) ||
          (iVar4 = FUN_1401af6c0(puVar3,7,lVar6,0x40), iVar4 != 0)))) {
        if (_Val != 0xfde9) {
          FID_conflict__ltow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
          return 1;
        }
        iVar4 = FUN_1401b5630();
        if (iVar4 == 0) {
          return 1;
        }
        goto LAB_1401b5ee8;
      }
    }
  }
  return 0;
}

