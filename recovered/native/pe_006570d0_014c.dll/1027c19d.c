/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027c19d */

undefined4 FUN_1027c19d(short *param_1,uint *param_2,int param_3)

{
  undefined4 *puVar1;
  short *psVar2;
  undefined2 *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint _Val;
  BOOL BVar7;
  short *psVar8;
  
  iVar5 = FUN_102743cd();
  psVar2 = (short *)(iVar5 + 0x2a0);
  *(undefined4 *)(iVar5 + 0x58) = 0;
  *psVar2 = 0;
  puVar1 = (undefined4 *)(iVar5 + 0x50);
  *puVar1 = param_1;
  *(int *)(iVar5 + 0x54) = (int)(param_1 + 0x40);
  if (param_1[0x40] != 0) {
    _TranslateName(&PTR_u_america_10325958,0x16,(int *)(iVar5 + 0x54));
  }
  if (*(short *)*puVar1 == 0) {
    FUN_1027c8a5(puVar1);
LAB_1027c247:
    if (*(int *)(iVar5 + 0x58) == 0) {
      return 0;
    }
  }
  else {
    if (**(short **)(iVar5 + 0x54) == 0) {
      _GetLocaleNameFromLanguage();
    }
    else {
      _GetLocaleNameFromLangCountry();
    }
    if (*(int *)(iVar5 + 0x58) == 0) {
      iVar6 = _TranslateName(&PTR_u_american_103590ac_0x10_10325648,0x40,puVar1);
      if (iVar6 != 0) {
        if (**(short **)(iVar5 + 0x54) == 0) {
          _GetLocaleNameFromLanguage(puVar1);
        }
        else {
          _GetLocaleNameFromLangCountry();
        }
      }
      goto LAB_1027c247;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    _Val = FUN_1027c92c(-(uint)(param_1 != (short *)0x0) & (uint)(param_1 + 0x80),puVar1);
  }
  else {
    _Val = GetACP();
  }
  if (((_Val != 0) && (_Val != 65000)) && (BVar7 = IsValidCodePage(_Val & 0xffff), BVar7 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    if (param_3 == 0) {
      return 1;
    }
    puVar3 = (undefined2 *)(param_3 + 0x120);
    *puVar3 = 0;
    psVar8 = psVar2;
    do {
      sVar4 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar4 != 0);
    iVar5 = FUN_1027bc60(puVar3,0x55,psVar2,((int)psVar8 - (iVar5 + 0x2a2) >> 1) + 1);
    if (iVar5 != 0) {
LAB_1027c39f:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar5 = ___acrt_GetLocaleInfoEx_16(puVar3,0x1001,param_3,0x40);
    if (iVar5 != 0) {
      iVar5 = param_3 + 0x80;
      iVar6 = ___acrt_GetLocaleInfoEx_16(param_3 + 0x120,0x1002,iVar5,0x40);
      if ((iVar6 != 0) &&
         (((iVar6 = FUN_10286680(iVar5,0x5f), iVar6 == 0 &&
           (iVar6 = FUN_10286680(iVar5,0x2e), iVar6 == 0)) ||
          (iVar5 = ___acrt_GetLocaleInfoEx_16(param_3 + 0x120,7,iVar5,0x40), iVar5 != 0)))) {
        if (_Val != 0xfde9) {
          FID_conflict___itow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
          return 1;
        }
        iVar5 = FUN_1027bc60((wchar_t *)(param_3 + 0x100),0x10,L"utf8",5);
        if (iVar5 == 0) {
          return 1;
        }
        goto LAB_1027c39f;
      }
    }
  }
  return 0;
}

