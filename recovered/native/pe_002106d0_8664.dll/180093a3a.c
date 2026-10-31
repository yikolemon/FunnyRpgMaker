/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093a3a */

undefined2 *
FUN_180093a3a(longlong *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  while ((param_3 != param_4 &&
         (cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,*param_3), cVar1 != '\0'))) {
    param_3 = param_3 + 1;
  }
  return param_3;
}

