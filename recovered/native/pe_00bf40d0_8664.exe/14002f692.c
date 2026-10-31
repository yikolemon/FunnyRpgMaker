/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f692 */

void FUN_14002f692(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1400358d1(param_1,(longlong)param_2,0);
  FUN_1400358d1(param_1,(longlong)param_2,1);
  return;
}

