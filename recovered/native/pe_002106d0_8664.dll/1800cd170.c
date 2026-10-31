/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd170 */

void FUN_1800cd170(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x1f];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x18);
    param_1[0x1f] = 0;
  }
  plVar1 = (longlong *)param_1[0x17];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x10);
    param_1[0x17] = 0;
  }
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 8);
    param_1[0xf] = 0;
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}

