/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d562 */

int FUN_14006d562(uint *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if ((ulonglong)*param_1 == 0) {
    iVar1 = FUN_14006d69c(param_1,param_2,&local_20);
  }
  else {
    local_20 = *(longlong *)(param_1 + 2) + (ulonglong)*param_1 * 0x18 + -0x18;
    iVar1 = 0;
  }
  *param_3 = local_20;
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

