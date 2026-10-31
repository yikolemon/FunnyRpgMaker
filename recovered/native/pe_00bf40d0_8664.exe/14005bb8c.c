/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005bb8c */

int FUN_14005bb8c(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  char *_Str1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar3 = FUN_14005c278(param_1,param_2,param_3);
  if ((int)uVar3 != 0) {
    FUN_14005bd71((longlong)param_2);
    plVar1 = param_2 + 0x1b;
    iVar2 = FUN_140081eb8(plVar1,param_1);
    if (((char)iVar2 != '\a') &&
       ((iVar2 == 0 || (uVar4 = FUN_140085078(plVar1,param_1), (int)uVar4 == 0)))) {
      param_2[0x24] = param_1;
      param_2[0x14] = plVar1;
      uVar3 = FUN_14005c278(plVar1,param_2,param_3);
      if ((int)uVar3 == 0) goto LAB_14005bc19;
    }
    FUN_14005bd71((longlong)param_2);
    iVar2 = 2;
    goto LAB_14005bcfd;
  }
LAB_14005bc19:
  if (param_3 < 0) {
    iVar2 = 0;
    goto LAB_14005bcfd;
  }
  if ((short)param_3 != 0) {
    FUN_14005bd71((longlong)param_2);
    iVar2 = 6;
    goto LAB_14005bcfd;
  }
  _Str1 = (char *)param_2[0x25];
  pbVar5 = (byte *)param_2[0x26];
  if ((((_Str1 == (char *)0x0 || pbVar5 == (byte *)0x0) || ((*pbVar5 | 0x20) != 0x69)) ||
      ((pbVar5[1] | 0x20) != 0x73)) || ((pbVar5[2] | 0x20) != 0x6f)) {
LAB_14005bccb:
    local_30 = 0;
  }
  else {
    pbVar5 = pbVar5 + 3;
    iVar2 = strcmp((char *)pbVar5,"10646");
    if ((iVar2 == 0) ||
       (((iVar2 = strcmp((char *)pbVar5,"8859"), iVar2 == 0 && (*_Str1 == '1')) &&
        (_Str1[1] == '\0')))) {
LAB_14005bd2b:
      local_30 = 0x10003756e6963;
    }
    else {
      iVar2 = strcmp((char *)pbVar5,"646.1991");
      if (iVar2 != 0) goto LAB_14005bccb;
      iVar2 = strcmp(_Str1,"IRV");
      local_30 = 0;
      if (iVar2 == 0) goto LAB_14005bd2b;
    }
  }
  local_38 = param_2;
  iVar2 = FUN_14001f301((uint *)&DAT_1400f8eb0,0,(longlong *)&local_38,(undefined8 *)0x0);
  if (iVar2 != 0) {
    FUN_14005bd71((longlong)param_2);
  }
LAB_14005bcfd:
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return iVar2;
}

