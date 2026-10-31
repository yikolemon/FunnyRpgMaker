/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401303c0 */

undefined8 FUN_1401303c0(undefined8 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *_Dest;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  _Dest = (char *)FUN_14012afda(param_1,(int)sVar2 + (int)sVar1 + 1,&local_34);
  if (local_34 == 0) {
    lVar3 = FUN_140190780(param_2,0x2f);
    if (lVar3 == 0) {
      *_Dest = '\0';
    }
    else {
      strncpy(_Dest,param_2,(lVar3 - (longlong)param_2) + 1);
      _Dest[(lVar3 - (longlong)param_2) + 1] = '\0';
      param_2 = (char *)(lVar3 + 1);
    }
    FUN_1401c5bd0(_Dest,param_3);
    if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
      uVar4 = FUN_1401c5bd0(_Dest,param_2);
      return uVar4;
    }
  }
  else if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

