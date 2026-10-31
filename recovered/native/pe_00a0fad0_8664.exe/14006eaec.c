/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006eaec */

undefined8 FUN_14006eaec(undefined8 param_1,longlong param_2)

{
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14001943c(local_68,*(undefined8 *)(param_2 + 8));
  FUN_14001943c(local_48,*(longlong *)(param_2 + 0x10) + 1);
  FUN_14006ec17(param_1," at line ",local_48,", column ",local_68);
  FUN_1400017de(local_48);
  FUN_1400017de(local_68);
  return param_1;
}

