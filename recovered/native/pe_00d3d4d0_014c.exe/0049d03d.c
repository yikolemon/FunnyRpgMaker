/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049d03d */

undefined4 __cdecl FUN_0049d03d(wchar_t *param_1,int param_2)

{
  uint uVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  __acrt_ptd *p_Var4;
  wchar_t *pwVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  LPCWSTR lpName;
  LPCWSTR lpValue;
  BOOL BVar10;
  undefined4 uVar11;
  wchar_t *pwVar12;
  int *local_8;
  
  if (param_1 == (wchar_t *)0x0) {
    p_Var4 = FUN_0048f66d();
    *(undefined4 *)p_Var4 = 0x16;
    return 0xffffffff;
  }
  pwVar5 = (wchar_t *)FUN_004a57b0((ushort *)param_1,0x3d);
  if ((pwVar5 == (wchar_t *)0x0) || (pwVar5 == param_1)) {
    p_Var4 = FUN_0048f66d();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_00495f00(param_1);
    return 0xffffffff;
  }
  wVar2 = pwVar5[1];
  FUN_0049d2d2();
  uVar11 = 0;
  local_8 = DAT_00521928;
  if (DAT_00521928 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_00521924 == (LPVOID)0x0)) {
      if (wVar2 == L'\0') goto LAB_0049d293;
      if (DAT_00521924 == (LPVOID)0x0) {
        DAT_00521924 = FUN_00497060(1,4);
        FUN_00495f00((LPVOID)0x0);
        if (DAT_00521924 == (LPVOID)0x0) goto LAB_0049d0d3;
        local_8 = DAT_00521928;
        if (DAT_00521928 != (int *)0x0) goto LAB_0049d147;
      }
      DAT_00521928 = FUN_00497060(1,4);
      FUN_00495f00((LPVOID)0x0);
      if (DAT_00521928 != (int *)0x0) goto LAB_0049d143;
    }
    else {
      iVar6 = common_get_or_create_environment_nolock<>();
      if (iVar6 == 0) {
        p_Var4 = FUN_0048f66d();
        *(undefined4 *)p_Var4 = 0x16;
      }
      else {
        FUN_0049d2d2();
LAB_0049d143:
        local_8 = DAT_00521928;
        if (DAT_00521928 != (int *)0x0) goto LAB_0049d147;
      }
    }
  }
  else {
LAB_0049d147:
    uVar7 = (int)pwVar5 - (int)param_1 >> 1;
    DAT_00521928 = local_8;
    uVar8 = find_in_environment_nolock<wchar_t>(param_1,uVar7);
    if ((-1 < (int)uVar8) && (*local_8 != 0)) {
      FUN_00495f00((LPVOID)local_8[uVar8]);
      if (wVar2 == L'\0') {
        for (; local_8[uVar8] != 0; uVar8 = uVar8 + 1) {
          local_8[uVar8] = local_8[uVar8 + 1];
        }
        piVar9 = __recalloc_base(local_8,uVar8,4);
        FUN_00495f00((LPVOID)0x0);
        pwVar5 = param_1;
        if (piVar9 != (int *)0x0) {
LAB_0049d208:
          DAT_00521928 = piVar9;
        }
      }
      else {
        pwVar5 = (wchar_t *)0x0;
        local_8[uVar8] = (int)param_1;
      }
      if (param_2 == 0) {
LAB_0049d2a3:
        FUN_00495f00(pwVar5);
        return 0;
      }
      pwVar12 = param_1;
      do {
        wVar3 = *pwVar12;
        pwVar12 = pwVar12 + 1;
      } while (wVar3 != L'\0');
      uVar8 = ((int)pwVar12 - (int)(param_1 + 1) >> 1) + 2;
      lpName = FUN_00497060(uVar8,2);
      if (lpName == (LPCWSTR)0x0) {
        FUN_00495f00((LPVOID)0x0);
        param_1 = pwVar5;
      }
      else {
        iVar6 = FUN_00496780(lpName,uVar8,(int)param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        lpName[uVar7] = L'\0';
        lpValue = lpName + uVar7 + 1;
        if (wVar2 == L'\0') {
          lpValue = (LPCWSTR)0x0;
        }
        BVar10 = SetEnvironmentVariableW(lpName,lpValue);
        if (BVar10 != 0) {
          FUN_00495f00(lpName);
          goto LAB_0049d2a3;
        }
        p_Var4 = FUN_0048f66d();
        *(undefined4 *)p_Var4 = 0x2a;
        FUN_00495f00(lpName);
        uVar11 = 0xffffffff;
        param_1 = pwVar5;
      }
      goto LAB_0049d293;
    }
    if (wVar2 == L'\0') goto LAB_0049d293;
    uVar1 = -uVar8 + 2;
    if ((-uVar8 <= uVar1) && (uVar1 < 0x3fffffff)) {
      piVar9 = __recalloc_base(local_8,uVar1,4);
      FUN_00495f00((LPVOID)0x0);
      if (piVar9 != (int *)0x0) {
        piVar9[-uVar8] = (int)param_1;
        piVar9[1 - uVar8] = 0;
        pwVar5 = (wchar_t *)0x0;
        goto LAB_0049d208;
      }
    }
  }
LAB_0049d0d3:
  uVar11 = 0xffffffff;
LAB_0049d293:
  FUN_00495f00(param_1);
  return uVar11;
}

