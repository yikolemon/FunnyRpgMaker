/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279f3c */

undefined4 FUN_10279f3c(wchar_t *param_1,int param_2)

{
  uint uVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  LPCWSTR lpName;
  LPCWSTR lpValue;
  BOOL BVar9;
  undefined4 uVar10;
  wchar_t *pwVar11;
  int *local_8;
  
  if (param_1 == (wchar_t *)0x0) {
    puVar4 = (undefined4 *)FUN_10268ffd();
    *puVar4 = 0x16;
    return 0xffffffff;
  }
  pwVar5 = (wchar_t *)FUN_10286680(param_1,0x3d);
  if ((pwVar5 == (wchar_t *)0x0) || (pwVar5 == param_1)) {
    puVar4 = (undefined4 *)FUN_10268ffd();
    *puVar4 = 0x16;
    FUN_10274120(param_1);
    return 0xffffffff;
  }
  wVar2 = pwVar5[1];
  FUN_1027a1d1();
  uVar10 = 0;
  local_8 = DAT_103a4e8c;
  if (DAT_103a4e8c == (int *)0x0) {
    if ((param_2 == 0) || (DAT_103a4e88 == 0)) {
      if (wVar2 == L'\0') goto LAB_1027a192;
      if (DAT_103a4e88 == 0) {
        DAT_103a4e88 = FUN_10275d90(1,4);
        FUN_10274120(0);
        if (DAT_103a4e88 == 0) goto LAB_10279fd2;
        local_8 = DAT_103a4e8c;
        if (DAT_103a4e8c != (int *)0x0) goto LAB_1027a046;
      }
      DAT_103a4e8c = (int *)FUN_10275d90(1,4);
      FUN_10274120(0);
      if (DAT_103a4e8c != (int *)0x0) goto LAB_1027a042;
    }
    else {
      iVar6 = thunk_FUN_10269a14();
      if (iVar6 == 0) {
        puVar4 = (undefined4 *)FUN_10268ffd();
        *puVar4 = 0x16;
      }
      else {
        FUN_1027a1d1();
LAB_1027a042:
        local_8 = DAT_103a4e8c;
        if (DAT_103a4e8c != (int *)0x0) goto LAB_1027a046;
      }
    }
  }
  else {
LAB_1027a046:
    uVar7 = (int)pwVar5 - (int)param_1 >> 1;
    DAT_103a4e8c = local_8;
    iVar6 = find_in_environment_nolock<wchar_t>(param_1,uVar7);
    if ((-1 < iVar6) && (*local_8 != 0)) {
      FUN_10274120(local_8[iVar6]);
      if (wVar2 == L'\0') {
        for (; local_8[iVar6] != 0; iVar6 = iVar6 + 1) {
          local_8[iVar6] = local_8[iVar6 + 1];
        }
        piVar8 = (int *)__recalloc_base(local_8,iVar6,4);
        FUN_10274120(0);
        pwVar5 = param_1;
        if (piVar8 != (int *)0x0) {
LAB_1027a107:
          DAT_103a4e8c = piVar8;
        }
      }
      else {
        pwVar5 = (wchar_t *)0x0;
        local_8[iVar6] = (int)param_1;
      }
      if (param_2 == 0) {
LAB_1027a1a2:
        FUN_10274120(pwVar5);
        return 0;
      }
      pwVar11 = param_1;
      do {
        wVar3 = *pwVar11;
        pwVar11 = pwVar11 + 1;
      } while (wVar3 != L'\0');
      iVar6 = ((int)pwVar11 - (int)(param_1 + 1) >> 1) + 2;
      lpName = (LPCWSTR)FUN_10275d90(iVar6,2);
      if (lpName == (LPCWSTR)0x0) {
        FUN_10274120(0);
        param_1 = pwVar5;
      }
      else {
        iVar6 = FUN_102749e0(lpName,iVar6,param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[uVar7] = L'\0';
        lpValue = lpName + uVar7 + 1;
        if (wVar2 == L'\0') {
          lpValue = (LPCWSTR)0x0;
        }
        BVar9 = SetEnvironmentVariableW(lpName,lpValue);
        if (BVar9 != 0) {
          FUN_10274120(lpName);
          goto LAB_1027a1a2;
        }
        puVar4 = (undefined4 *)FUN_10268ffd();
        *puVar4 = 0x2a;
        FUN_10274120(lpName);
        uVar10 = 0xffffffff;
        param_1 = pwVar5;
      }
      goto LAB_1027a192;
    }
    if (wVar2 == L'\0') goto LAB_1027a192;
    uVar1 = -iVar6 + 2;
    if (((uint)-iVar6 <= uVar1) && (uVar1 < 0x3fffffff)) {
      piVar8 = (int *)__recalloc_base(local_8,uVar1,4);
      FUN_10274120(0);
      if (piVar8 != (int *)0x0) {
        piVar8[-iVar6] = (int)param_1;
        piVar8[1 - iVar6] = 0;
        pwVar5 = (wchar_t *)0x0;
        goto LAB_1027a107;
      }
    }
  }
LAB_10279fd2:
  uVar10 = 0xffffffff;
LAB_1027a192:
  FUN_10274120(param_1);
  return uVar10;
}

