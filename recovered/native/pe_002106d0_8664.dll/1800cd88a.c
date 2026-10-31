/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd88a */

void FUN_1800cd88a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0xe8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x10);
      lVar2 = *(longlong *)(param_1 + 8);
    }
    FUN_1802847b0(lVar2);
    *(undefined8 *)(param_1 + 8) = 0;
    plVar1 = *(longlong **)(param_1 + 0x128);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x10);
    }
  }
  FUN_1800cd170(param_1 + 0x30);
  FUN_180001ef2(param_1 + 0x10);
  return;
}

