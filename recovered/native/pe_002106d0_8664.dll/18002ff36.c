/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002ff36 */

int FUN_18002ff36(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_18002ff83();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    FUN_1800305e4(param_1,param_2);
    iVar1 = 0;
    do {
      FUN_18003067e(param_1,param_2);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_18002ff83(param_1,param_2);
    } while (-1 < iVar2);
  }
  return iVar1;
}

