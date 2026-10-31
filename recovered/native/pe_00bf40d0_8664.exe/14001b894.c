/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b894 */

void FUN_14001b894(longlong *param_1)

{
  longlong *plVar1;
  
  if (((char)param_1[0x34] == '\x01') &&
     (plVar1 = (longlong *)param_1[0x33], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x2c);
    param_1[0x33] = 0;
  }
  if (((char)param_1[0x26] == '\x01') &&
     (plVar1 = (longlong *)param_1[0x25], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x1e);
    param_1[0x25] = 0;
  }
  if (((char)param_1[0x1d] == '\x01') &&
     (plVar1 = (longlong *)param_1[0x1c], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x15);
    param_1[0x1c] = 0;
  }
  plVar1 = (longlong *)param_1[0x13];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0xc);
    param_1[0x13] = 0;
  }
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 4);
    param_1[0xb] = 0;
  }
  FUN_1400021ea(param_1);
  return;
}

