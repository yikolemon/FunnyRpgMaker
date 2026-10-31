/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400afcf6 */

void FUN_1400afcf6(ushort *param_1)

{
  ushort uVar1;
  size_t sVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_38;
  uVar1 = *param_1;
  sVar2 = strlen((char *)(param_1 + (ulonglong)uVar1 * 2 + 2));
  local_14 = (undefined4)sVar2;
  FUN_1400afd54(param_1 + (ulonglong)uVar1 * 2 + 2);
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_38);
}

