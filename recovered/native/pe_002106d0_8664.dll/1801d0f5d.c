/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d0f5d */

undefined8
FUN_1801d0f5d(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_1801d12c0(param_2,0x51607,param_5);
    return uVar1;
  }
  return 0x51;
}

