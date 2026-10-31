/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022cb40 */

uint FUN_1022cb40(uint param_1,UINT *param_2)

{
  ushort uVar1;
  wchar_t **ppwVar2;
  UINT UVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  uint uVar7;
  wchar_t *pwVar8;
  byte local_c;
  undefined1 local_b;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  if (param_2 == (UINT *)0x0) {
    ppwVar2 = ____lc_locale_name_func();
    pwVar8 = ppwVar2[2];
    UVar3 = ____lc_codepage_func();
  }
  else {
    pwVar8 = (wchar_t *)param_2[3];
    UVar3 = *param_2;
  }
  if (pwVar8 == (wchar_t *)0x0) {
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
LAB_1022cbc1:
      uVar1 = *(ushort *)(param_2[1] + ((int)param_1 >> 8 & 0xffU) * 2) >> 0xf;
      goto LAB_1022cbcd;
    }
    iVar4 = _isupper(param_1);
    if (iVar4 == 0) {
      return param_1;
    }
  }
  else if (param_2 != (UINT *)0x0) goto LAB_1022cbc1;
  puVar6 = ___pctype_func();
  uVar1 = puVar6[(int)param_1 >> 8 & 0xff] & 0x8000;
LAB_1022cbcd:
  if (uVar1 == 0) {
    uVar5 = 1;
    local_7 = 0;
    local_8 = (char)param_1;
  }
  else {
    uVar5 = 2;
    local_6 = 0;
    local_8 = (char)(param_1 >> 8);
    local_7 = (char)param_1;
  }
  iVar4 = FUN_10235020(pwVar8,0x100,&local_8,uVar5,&local_c,3,UVar3,1);
  if (iVar4 == 0) {
    return param_1;
  }
  uVar7 = (uint)local_c;
  if (iVar4 != 1) {
    uVar7 = (uint)CONCAT11(local_c,local_b);
  }
  return uVar7;
}

