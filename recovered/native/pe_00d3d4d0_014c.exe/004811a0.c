/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004811a0 */

uint __cdecl FUN_004811a0(uint param_1,UINT *param_2)

{
  ushort uVar1;
  wchar_t **ppwVar2;
  UINT UVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  wchar_t *pwVar7;
  byte local_c;
  undefined1 local_b;
  char local_8;
  char local_7;
  undefined1 local_6;
  
  if (param_2 == (UINT *)0x0) {
    ppwVar2 = ____lc_locale_name_func();
    pwVar7 = ppwVar2[2];
    UVar3 = ____lc_codepage_func();
  }
  else {
    pwVar7 = (wchar_t *)param_2[3];
    UVar3 = *param_2;
  }
  if (pwVar7 == (LPCWSTR)0x0) {
    if ((int)param_1 < 0x41) {
      return param_1;
    }
    if ((int)param_1 < 0x5b) {
      return param_1 + 0x20;
    }
    return param_1;
  }
  if (param_1 < 0x100) {
    if (param_2 != (UINT *)0x0) {
      if ((*(byte *)(param_2[1] + param_1 * 2) & 1) == 0) {
        return param_1;
      }
LAB_00481221:
      uVar1 = *(ushort *)(param_2[1] + ((int)param_1 >> 8 & 0xffU) * 2) >> 0xf;
      goto LAB_0048122d;
    }
    iVar4 = _isupper(param_1);
    if (iVar4 == 0) {
      return param_1;
    }
  }
  else if (param_2 != (UINT *)0x0) goto LAB_00481221;
  puVar5 = ___pctype_func();
  uVar1 = puVar5[(int)param_1 >> 8 & 0xff] & 0x8000;
LAB_0048122d:
  if (uVar1 == 0) {
    iVar4 = 1;
    local_7 = '\0';
    local_8 = (char)param_1;
  }
  else {
    iVar4 = 2;
    local_6 = 0;
    local_8 = (char)(param_1 >> 8);
    local_7 = (char)param_1;
  }
  iVar4 = FUN_00484440(pwVar7,0x100,&local_8,iVar4,(LPWSTR)&local_c,3,UVar3,1);
  if (iVar4 == 0) {
    return param_1;
  }
  uVar6 = (uint)local_c;
  if (iVar4 != 1) {
    uVar6 = (uint)CONCAT11(local_c,local_b);
  }
  return uVar6;
}

