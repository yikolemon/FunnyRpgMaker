/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008c2ca */

void FUN_14008c2ca(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    FUN_1400587c0();
    param_2 = param_2 + *param_1;
    FUN_140016e3e(*param_1,param_2,param_3,param_4,param_1,uVar1);
    param_1[1] = param_2;
  }
  return;
}

