/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e0656 */

void FUN_1801e0656(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802398e0();
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,local_50,param_2);
  uVar2 = FUN_1801e06d2(param_1,param_2);
  FUN_1801d345e(local_50,uVar2);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}

