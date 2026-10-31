/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140049fcf */

int FUN_140049fcf(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  iVar2 = FUN_14004a04b(param_1,param_2,local_28,&local_29);
  if ((iVar2 == 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) + 0x50),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1[1],local_28);
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_58);
}

