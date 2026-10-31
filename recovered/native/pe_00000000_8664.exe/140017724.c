/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140017724 */

void FUN_140017724(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_1400392e4(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_140039ca2(param_1 + 0x1d0);
  }
  FUN_1400392e4(param_1 + 0x1c0);
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x170);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1400022f6(param_1 + 0x148);
  FUN_1400185b4(param_1 + 0x138,*(undefined8 *)(param_1 + 0x138));
  thunk_FUN_14018e090(*(undefined8 *)(param_1 + 0x138),0x38);
  FUN_1400022f6(param_1 + 0x108);
  FUN_14001837c(param_1 + 0xf8,*(undefined8 *)(param_1 + 0xf8));
  thunk_FUN_14018e090(*(undefined8 *)(param_1 + 0xf8),0x40);
  return;
}

