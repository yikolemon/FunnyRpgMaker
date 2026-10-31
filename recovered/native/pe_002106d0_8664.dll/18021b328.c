/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b328 */

void FUN_18021b328(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_2 + 8);
  local_10 = *(int *)(param_2 + 0x10) - (int)local_18;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1[1],&local_18);
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

