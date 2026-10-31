/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c3b0 */

int FUN_18001c3b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_18023dc10(param_2,param_3,param_4,param_5,param_1 + 0x10);
  return (int)(char)((0 < iVar1) - (iVar1 < 0));
}

