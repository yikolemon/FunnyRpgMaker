/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189f00 */

ulonglong FUN_140189f00(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  wchar_t **ppwVar4;
  ushort *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  byte local_res18;
  undefined1 local_res19;
  
  uVar7 = (ulonglong)(int)param_1;
  if (param_2 == (undefined4 *)0x0) {
    ppwVar4 = ___lc_locale_name_func();
    pwVar8 = ppwVar4[2];
    uVar1 = FUN_140192f20();
  }
  else {
    pwVar8 = *(wchar_t **)(param_2 + 6);
    uVar1 = *param_2;
  }
  if (pwVar8 == (wchar_t *)0x0) {
    if (0x40 < (int)param_1) {
      uVar2 = param_1 + 0x20;
      if (0x5a < (int)param_1) {
        uVar2 = param_1;
      }
      uVar7 = (ulonglong)uVar2;
    }
    goto LAB_140189f44;
  }
  if (param_1 < 0x100) {
    if (param_2 != (undefined4 *)0x0) {
      if ((*(byte *)(*(longlong *)(param_2 + 2) + uVar7 * 2) & 1) == 0) goto LAB_140189f44;
      goto LAB_140189f7a;
    }
    iVar3 = isupper(param_1);
    if (iVar3 == 0) goto LAB_140189f44;
LAB_140189fb3:
    puVar5 = __pctype_func();
    uVar6 = puVar5[(int)param_1 >> 8 & 0xff] & 0x8000;
  }
  else {
    if (param_2 == (undefined4 *)0x0) goto LAB_140189fb3;
LAB_140189f7a:
    uVar6 = *(ushort *)(*(longlong *)(param_2 + 2) + ((longlong)uVar7 >> 8 & 0xffU) * 2) >> 0xf;
  }
  if (uVar6 == 0) {
    uVar9 = 1;
    local_res11 = 0;
    local_res10 = (char)param_1;
  }
  else {
    uVar9 = 2;
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  iVar3 = FUN_14018e800(pwVar8,0x100,&local_res10,uVar9,&local_res18,3,uVar1,1);
  if (iVar3 != 0) {
    uVar7 = (ulonglong)local_res18;
    if (iVar3 != 1) {
      uVar7 = (ulonglong)CONCAT11(local_res18,local_res19);
    }
    return uVar7;
  }
LAB_140189f44:
  return uVar7 & 0xffffffff;
}

