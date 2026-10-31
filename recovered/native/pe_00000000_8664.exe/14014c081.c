/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014c081 */

int FUN_14014c081(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar2 = FUN_14014c0fd(param_1,param_2,local_28,&local_29);
  if ((iVar2 == 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1[1],local_28);
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

