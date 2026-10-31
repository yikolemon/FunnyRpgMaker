/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400030b0 */

undefined8 FUN_1400030b0(longlong *param_1,undefined4 param_2,int *param_3)

{
  undefined1 auStack_48 [32];
  int local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x18))(param_1,local_28,param_2);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(local_20 + 8) >> 8),
                    *(longlong *)(local_20 + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8) &&
                    local_28[0] == *param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

