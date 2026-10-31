/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021879 */

void FUN_140021879(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  local_c = param_2;
  FUN_1400217bb((ulonglong *)&local_10);
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_38);
}

