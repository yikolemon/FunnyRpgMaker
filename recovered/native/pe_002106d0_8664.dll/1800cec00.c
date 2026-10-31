/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cec00 */

void FUN_1800cec00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x150);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x78);
      lVar2 = *(longlong *)(param_1 + 0x70);
    }
    FUN_1802847b0(lVar2);
    *(undefined8 *)(param_1 + 0x70) = 0;
    plVar1 = *(longlong **)(param_1 + 400);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x78);
    }
  }
  FUN_1800cd170(param_1 + 0x98);
  FUN_180001ef2(param_1 + 0x78);
  FUN_1800cd97a(param_1);
  return;
}

