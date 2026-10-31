/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020e550 */

int FUN_18020e550(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char *_Str1;
  int iVar2;
  byte *pbVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_180402640 ^ (ulonglong)auStack_58;
  iVar2 = FUN_18020ec3c();
  if (iVar2 != 0) {
    FUN_18020e735(param_2);
    lVar1 = param_2 + 0xd8;
    iVar2 = FUN_180234ff0(lVar1,param_1);
    if (((char)iVar2 != '\a') &&
       ((iVar2 == 0 || (iVar2 = FUN_1802381b0(lVar1,param_1), iVar2 == 0)))) {
      *(undefined8 *)(param_2 + 0x120) = param_1;
      *(longlong *)(param_2 + 0xa0) = lVar1;
      iVar2 = FUN_18020ec3c(lVar1,param_2,param_3);
      if (iVar2 == 0) goto LAB_18020e5dd;
    }
    FUN_18020e735(param_2);
    iVar2 = 2;
    goto LAB_18020e6c1;
  }
LAB_18020e5dd:
  if (param_3 < 0) {
    iVar2 = 0;
    goto LAB_18020e6c1;
  }
  if ((short)param_3 != 0) {
    FUN_18020e735(param_2);
    iVar2 = 6;
    goto LAB_18020e6c1;
  }
  _Str1 = *(char **)(param_2 + 0x128);
  pbVar3 = *(byte **)(param_2 + 0x130);
  if ((((_Str1 == (char *)0x0 || pbVar3 == (byte *)0x0) || ((*pbVar3 | 0x20) != 0x69)) ||
      ((pbVar3[1] | 0x20) != 0x73)) || ((pbVar3[2] | 0x20) != 0x6f)) {
LAB_18020e68f:
    local_38[1] = 0;
  }
  else {
    pbVar3 = pbVar3 + 3;
    iVar2 = strcmp((char *)pbVar3,"10646");
    if ((iVar2 == 0) ||
       (((iVar2 = strcmp((char *)pbVar3,"8859"), iVar2 == 0 && (*_Str1 == '1')) &&
        (_Str1[1] == '\0')))) {
LAB_18020e6ef:
      local_38[1] = 0x10003756e6963;
    }
    else {
      iVar2 = strcmp((char *)pbVar3,"646.1991");
      if (iVar2 != 0) goto LAB_18020e68f;
      iVar2 = strcmp(_Str1,"IRV");
      local_38[1] = 0;
      if (iVar2 == 0) goto LAB_18020e6ef;
    }
  }
  local_38[0] = param_2;
  iVar2 = FUN_1801cc9a6(&DAT_18033bd80,0,local_38,0);
  if (iVar2 != 0) {
    FUN_18020e735(param_2);
  }
LAB_18020e6c1:
  if (DAT_180402640 != (local_38[2] ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38[2] ^ (ulonglong)auStack_58);
  }
  return iVar2;
}

