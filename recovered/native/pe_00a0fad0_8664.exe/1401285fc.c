/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401285fc */

void FUN_1401285fc(wchar_t *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  iVar1 = FUN_140121f70(param_1,0x59,local_28);
  if (iVar1 != 0) {
    wcsncmp(local_28,param_1,9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_48);
}

