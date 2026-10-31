/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400227a4 */

undefined8
FUN_1400227a4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_2;
  FUN_14001943c(local_c8,param_4);
  FUN_14002577f(local_68,param_3);
  FUN_1400193d2(local_48,local_28,": At Most ");
  FUN_140018470(local_88);
  FUN_14000ed8c(local_a8,local_88," required but received ");
  FUN_140018470(local_e8);
  FUN_140025690(param_1,local_e8);
  FUN_1400017de(local_a8);
  FUN_1400017de(local_88);
  FUN_1400017de(local_48);
  FUN_1400017de(local_68);
  FUN_1400017de(local_c8);
  FUN_1400017de(local_28);
  return param_1;
}

