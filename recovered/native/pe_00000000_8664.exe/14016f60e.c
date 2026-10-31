/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f60e */

undefined8 FUN_14016f60e(uint *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if ((ulonglong)*param_1 == 0) {
    uVar1 = FUN_14016f748(param_1,param_2,&local_20);
  }
  else {
    local_20 = *(longlong *)(param_1 + 2) + (ulonglong)*param_1 * 0x18 + -0x18;
    uVar1 = 0;
  }
  *param_3 = local_20;
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

