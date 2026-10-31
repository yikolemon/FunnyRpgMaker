/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140044f8a */

void FUN_140044f8a(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    FUN_14000e3ac();
    param_2 = param_2 + *param_1;
    FUN_14003d090(*param_1,param_2,param_3,param_4,param_1,uVar1);
    param_1[1] = param_2;
  }
  return;
}

