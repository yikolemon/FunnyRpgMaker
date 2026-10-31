/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140069b48 */

undefined4 * FUN_140069b48(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = FUN_140069c5c(param_3);
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
    FUN_140069c63(param_1,param_2);
    param_1 = param_1 + param_2;
  }
  return param_1;
}

