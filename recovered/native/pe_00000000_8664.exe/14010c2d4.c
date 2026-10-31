/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010c2d4 */

void FUN_14010c2d4(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 0x1a0) == '\x01') &&
     (plVar1 = *(longlong **)(param_1 + 0x198), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if ((*(char *)(param_1 + 0x130) == '\x01') &&
     (plVar1 = *(longlong **)(param_1 + 0x128), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  if ((*(char *)(param_1 + 0xe8) == '\x01') &&
     (plVar1 = *(longlong **)(param_1 + 0xe0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_14000109c(param_1);
  return;
}

