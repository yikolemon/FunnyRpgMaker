/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012738a */

void FUN_14012738a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1401899e0();
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,local_50,param_2);
  uVar2 = FUN_140127406(param_1,param_2);
  FUN_14011a192(local_50,uVar2);
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_78);
}

