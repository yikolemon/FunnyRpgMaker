/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013174a */

void FUN_14013174a(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_140137989(param_1,param_2,0);
  FUN_140137989(param_1,param_2,1);
  return;
}

