/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fc995 */

int FUN_1801fc995(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  iVar2 = FUN_1801fca11(param_1,param_2,local_28,&local_29);
  if ((iVar2 == 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1[1],local_28);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

