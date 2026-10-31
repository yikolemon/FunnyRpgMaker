/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000ce02 */

void FUN_14000ce02(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(param_1 + 0x38);
  local_10 = param_2;
  local_9 = param_3;
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1401899e0();
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_10,&local_9);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

