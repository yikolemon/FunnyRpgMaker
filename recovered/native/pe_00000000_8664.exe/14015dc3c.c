/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015dc3c */

int FUN_14015dc3c(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char *_Str1;
  int iVar2;
  byte *pbVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar2 = FUN_14015e328();
  if (iVar2 != 0) {
    FUN_14015de21(param_2);
    lVar1 = param_2 + 0xd8;
    iVar2 = FUN_1401842c8(lVar1,param_1);
    if (((char)iVar2 != '\a') &&
       ((iVar2 == 0 || (iVar2 = FUN_140187488(lVar1,param_1), iVar2 == 0)))) {
      *(undefined8 *)(param_2 + 0x120) = param_1;
      *(longlong *)(param_2 + 0xa0) = lVar1;
      iVar2 = FUN_14015e328(lVar1,param_2,param_3);
      if (iVar2 == 0) goto LAB_14015dcc9;
    }
    FUN_14015de21(param_2);
    iVar2 = 2;
    goto LAB_14015ddad;
  }
LAB_14015dcc9:
  if (param_3 < 0) {
    iVar2 = 0;
    goto LAB_14015ddad;
  }
  if ((short)param_3 != 0) {
    FUN_14015de21(param_2);
    iVar2 = 6;
    goto LAB_14015ddad;
  }
  _Str1 = *(char **)(param_2 + 0x128);
  pbVar3 = *(byte **)(param_2 + 0x130);
  if ((((_Str1 == (char *)0x0 || pbVar3 == (byte *)0x0) || ((*pbVar3 | 0x20) != 0x69)) ||
      ((pbVar3[1] | 0x20) != 0x73)) || ((pbVar3[2] | 0x20) != 0x6f)) {
LAB_14015dd7b:
    local_38[1] = 0;
  }
  else {
    pbVar3 = pbVar3 + 3;
    iVar2 = strcmp((char *)pbVar3,"10646");
    if ((iVar2 == 0) ||
       (((iVar2 = strcmp((char *)pbVar3,"8859"), iVar2 == 0 && (*_Str1 == '1')) &&
        (_Str1[1] == '\0')))) {
LAB_14015dddb:
      local_38[1] = 0x10003756e6963;
    }
    else {
      iVar2 = strcmp((char *)pbVar3,"646.1991");
      if (iVar2 != 0) goto LAB_14015dd7b;
      iVar2 = strcmp(_Str1,"IRV");
      local_38[1] = 0;
      if (iVar2 == 0) goto LAB_14015dddb;
    }
  }
  local_38[0] = param_2;
  iVar2 = FUN_14012b97a(&DAT_140ea00f0,0,local_38,0);
  if (iVar2 != 0) {
    FUN_14015de21(param_2);
  }
LAB_14015ddad:
  if (DAT_140f17b40 != (local_38[2] ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38[2] ^ (ulonglong)auStack_58);
  }
  return iVar2;
}

