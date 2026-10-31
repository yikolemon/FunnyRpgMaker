/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180016162 */

void FUN_180016162(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    FUN_1800161d6();
    param_2 = param_2 + *param_1;
    FUN_18001621b(*param_1,param_2,param_3,param_4,param_1,uVar1);
    param_1[1] = param_2;
  }
  return;
}

