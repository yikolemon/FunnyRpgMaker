/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001fc70 */

undefined4 * FUN_18001fc70(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = FUN_18001fd84(param_3);
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
    FUN_18001fd8b(param_1,param_2);
    param_1 = param_1 + param_2;
  }
  return param_1;
}

