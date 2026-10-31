/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005a6a */

WCHAR * FUN_140005a6a(longlong param_1,WCHAR *param_2,WCHAR *param_3,CHAR param_4,CHAR *param_5)

{
  CHAR CVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  CHAR local_45 [5];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  if (param_2 != param_3) {
    do {
      local_50 = 0;
      iVar2 = FUN_140088a70(local_45,*param_2,&local_50,(UINT *)(param_1 + 0x30));
      CVar1 = local_45[0];
      if (iVar2 != 1) {
        CVar1 = param_4;
      }
      *param_5 = CVar1;
      param_2 = param_2 + 1;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStack_78);
  }
  return param_2;
}

