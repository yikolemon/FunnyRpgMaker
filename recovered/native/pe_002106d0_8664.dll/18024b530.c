/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024b530 */

void FUN_18024b530(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = 0;
  iVar1 = FUN_18023d480(local_20,param_2,&local_28,param_1 + 0x30);
  if (iVar1 != 1) {
    local_20[0] = param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48,local_20[0]);
}

