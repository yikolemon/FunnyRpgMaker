/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b914 */

undefined8 * FUN_18007b914(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_18001a1ef(param_3);
  if (cVar2 == '\0') {
    if (param_2 != 0) {
      uVar1 = *param_3;
      do {
        *param_1 = uVar1;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else {
    FUN_18001a1f7(param_1,param_2);
    param_1 = param_1 + param_2;
  }
  return param_1;
}

