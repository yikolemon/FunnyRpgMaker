/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400059b2 */

void FUN_1400059b2(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = CLI::App::vftable;
  FUN_140016e5c(param_1 + 0x77);
  FUN_14000eeca(param_1 + 0x74);
  FUN_14003179c(param_1 + 0x72);
  FUN_14000eeca(param_1 + 0x6e);
  FUN_1400017de(param_1 + 0x6a);
  FUN_1400317d4(param_1 + 0x60);
  FUN_14001a382(param_1 + 0x5e,param_1 + 0x5e,*(undefined8 *)(param_1[0x5e] + 8));
  thunk_FUN_1400ddcd0(param_1[0x5e],0x28);
  FUN_14001a382(param_1 + 0x5c,param_1 + 0x5c,*(undefined8 *)(param_1[0x5c] + 8));
  thunk_FUN_1400ddcd0(param_1[0x5c],0x28);
  FUN_14001a382(param_1 + 0x5a,param_1 + 0x5a,*(undefined8 *)(param_1[0x5a] + 8));
  thunk_FUN_1400ddcd0(param_1[0x5a],0x28);
  FUN_14001a382(param_1 + 0x58,param_1 + 0x58,*(undefined8 *)(param_1[0x58] + 8));
  thunk_FUN_1400ddcd0(param_1[0x58],0x28);
  FUN_140016e5c(param_1 + 0x55);
  FUN_140016e5c(param_1 + 0x52);
  FUN_14003184c(param_1 + 0x4f);
  plVar1 = (longlong *)param_1[0x4e];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x47);
    param_1[0x4e] = 0;
  }
  FUN_14003179c(param_1 + 0x45);
  plVar1 = (longlong *)param_1[0x41];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x3a);
    param_1[0x41] = 0;
  }
  FUN_1400017de(param_1 + 0x36);
  plVar1 = (longlong *)param_1[0x35];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x2e);
    param_1[0x35] = 0;
  }
  FUN_1400017de(param_1 + 0x2a);
  FUN_140031910(param_1 + 0x27);
  FUN_1400017de(param_1 + 0x22);
  plVar1 = (longlong *)param_1[0x21];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x1a);
    param_1[0x21] = 0;
  }
  plVar1 = (longlong *)param_1[0x19];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x12);
    param_1[0x19] = 0;
  }
  plVar1 = (longlong *)param_1[0x11];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 10);
    param_1[0x11] = 0;
  }
  FUN_1400017de(param_1 + 5);
  FUN_1400017de(param_1 + 1);
  return;
}

