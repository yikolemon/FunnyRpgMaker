/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801330fc */

void FUN_1801330fc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  lVar1 = DAT_180419160;
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    FUN_1800fec3a(&local_20,&local_28,param_1,param_2);
    FUN_180132c30(local_20,local_28,1);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

