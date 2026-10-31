/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140061da9 */

void thunk_FUN_140061dae(longlong param_1,longlong param_2,undefined8 param_3)

{
  FUN_140007d4f(param_1,param_3,param_2 - param_1,(param_2 - param_1 >> 3) * -0x5555555555555555);
  return;
}

