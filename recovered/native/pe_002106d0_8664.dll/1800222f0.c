/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800222f0 */

void FUN_1800222f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_18004363a(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_180043fc0(param_1 + 0x1d0);
  }
  FUN_18004363a(param_1 + 0x1c0);
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x170);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_180004cea(param_1 + 0x148);
  FUN_180023180(param_1 + 0x138,*(undefined8 *)(param_1 + 0x138));
  thunk_FUN_1802464a0(*(undefined8 *)(param_1 + 0x138),0x38);
  FUN_180004cea(param_1 + 0x108);
  FUN_180022f48(param_1 + 0xf8,*(undefined8 *)(param_1 + 0xf8));
  thunk_FUN_1802464a0(*(undefined8 *)(param_1 + 0xf8),0x40);
  return;
}

