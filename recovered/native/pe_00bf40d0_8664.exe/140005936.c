/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005936 */

byte * FUN_140005936(longlong param_1,byte *param_2,byte *param_3,WCHAR *param_4)

{
  int iVar1;
  WCHAR WVar2;
  undefined1 auStackY_88 [32];
  WCHAR local_52;
  undefined8 local_50;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  if (param_2 != param_3) {
    do {
      local_41 = *param_2;
      local_50 = 0;
      iVar1 = FUN_140088b60(&local_52,&local_41,1,&local_50,(UINT *)(param_1 + 0x30));
      WVar2 = L'\xffff';
      if (-1 < iVar1) {
        WVar2 = local_52;
      }
      *param_4 = WVar2;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_88)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_88);
}

