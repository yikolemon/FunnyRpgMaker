/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d8e3 */

void FUN_14006d8e3(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  FUN_14006d0a5(param_1,param_2);
  FUN_14006d69c((uint *)(param_1 + 0x10),param_3,&local_20);
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

