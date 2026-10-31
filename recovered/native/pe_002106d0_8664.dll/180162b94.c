/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180162b94 */

longlong * FUN_180162b94(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + *param_2;
      local_68 = FUN_1800ae00d(*param_2,lVar2);
      lVar2 = lVar2 - local_68;
      local_60 = lVar2;
      FUN_1800ae07c(&DAT_1804192a0,local_58,&local_68);
      cVar1 = FUN_1800ae030(&DAT_1804192a0,local_48,&local_68);
      if (cVar1 == '\0') {
        FUN_1800ae07c(param_3,local_58,&local_68);
        cVar1 = FUN_1800ae030(param_3,local_48,&local_68);
        if (cVar1 == '\0') break;
      }
      lVar2 = param_2[1] - lVar2;
      param_2[1] = lVar2;
    } while (lVar2 != 0);
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
}

