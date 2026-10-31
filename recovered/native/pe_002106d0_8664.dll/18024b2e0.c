/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024b2e0 */

undefined2 *
FUN_18024b2e0(undefined8 param_1,undefined2 param_2,undefined2 *param_3,undefined2 *param_4)

{
  char cVar1;
  
  while ((param_3 != param_4 &&
         (cVar1 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1,param_2,*param_3),
         cVar1 == '\0'))) {
    param_3 = param_3 + 1;
  }
  return param_3;
}

