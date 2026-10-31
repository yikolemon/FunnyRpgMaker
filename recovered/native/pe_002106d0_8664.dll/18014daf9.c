/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014daf9 */

void FUN_18014daf9(undefined8 param_1,byte *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1801391f6(param_1,*param_2);
  if (cVar1 != '\0') {
    *param_2 = *param_2 ^ 1;
  }
  return;
}

