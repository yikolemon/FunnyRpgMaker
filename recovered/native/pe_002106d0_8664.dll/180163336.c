/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180163336 */

void FUN_180163336(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
      FUN_1801633da(param_1,puVar1);
      return;
    }
  }
  else {
    local_24 = 0;
    FUN_180057604(&DAT_1802b0ea8,param_2,&local_24);
    *puVar1 = local_24;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

