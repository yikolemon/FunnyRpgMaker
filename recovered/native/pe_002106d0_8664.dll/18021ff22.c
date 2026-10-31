/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021ff22 */

undefined8 FUN_18021ff22(uint *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if ((ulonglong)*param_1 == 0) {
    uVar1 = FUN_18022005c(param_1,param_2,&local_20);
  }
  else {
    local_20 = *(longlong *)(param_1 + 2) + (ulonglong)*param_1 * 0x18 + -0x18;
    uVar1 = 0;
  }
  *param_3 = local_20;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

