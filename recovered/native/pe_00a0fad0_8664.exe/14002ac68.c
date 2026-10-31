/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002ac68 */

void FUN_14002ac68(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14000eeca(param_1 + 0x250);
  FUN_14000eeca(param_1 + 0x238);
  plVar1 = *(longlong **)(param_1 + 0x230);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  FUN_14001a382(param_1 + 0x1e0,param_1 + 0x1e0,*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 8))
  ;
  thunk_FUN_1400ddcd0(*(undefined8 *)(param_1 + 0x1e0),0x28);
  FUN_14001a382(param_1 + 0x1d0,param_1 + 0x1d0,*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 8))
  ;
  thunk_FUN_1400ddcd0(*(undefined8 *)(param_1 + 0x1d0),0x28);
  FUN_14002b194(param_1 + 0x1b8);
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x168));
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x160);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  FUN_1400017de(param_1 + 0x108);
  FUN_1400017de(param_1 + 0xe8);
  FUN_1400017de(param_1 + 200);
  FUN_1400017de(param_1 + 0xa8);
  FUN_1400017de(param_1 + 0x88);
  FUN_14000eeca(param_1 + 0x70);
  FUN_14002b32c(param_1 + 0x58);
  FUN_14000eeca(param_1 + 0x40);
  FUN_14000eeca(param_1 + 0x28);
  FUN_1400017de(param_1);
  return;
}

