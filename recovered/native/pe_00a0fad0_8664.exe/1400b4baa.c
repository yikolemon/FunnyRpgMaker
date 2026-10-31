/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b4baa */

void FUN_1400b4baa(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  if (param_4 != 0) {
    if (param_5 == -1) {
      param_5 = FUN_140114548(param_3);
    }
    FUN_1400b4852(param_1,param_2,param_5,param_4);
    FUN_1400b21f0(param_1,param_2,param_3);
    FUN_1400b4852(param_1,param_2,param_5,param_4);
    return;
  }
  FUN_1400b21f0(param_1,param_2,param_3);
  return;
}

