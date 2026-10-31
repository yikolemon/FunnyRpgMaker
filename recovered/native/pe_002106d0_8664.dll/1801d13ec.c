/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d13ec */

undefined8 FUN_1801d13ec(undefined8 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *_Dest;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  _Dest = (char *)FUN_1801cc006(param_1,(int)sVar2 + (int)sVar1 + 1,&local_34);
  if (local_34 == 0) {
    lVar3 = FUN_18026ed10(param_2,0x2f);
    if (lVar3 == 0) {
      *_Dest = '\0';
    }
    else {
      strncpy(_Dest,param_2,(lVar3 - (longlong)param_2) + 1);
      _Dest[(lVar3 - (longlong)param_2) + 1] = '\0';
      param_2 = (char *)(lVar3 + 1);
    }
    FUN_1802a8d40(_Dest,param_3);
    if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
      uVar4 = FUN_1802a8d40(_Dest,param_2);
      return uVar4;
    }
  }
  else if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

