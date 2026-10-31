/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013ccb1 */

void FUN_14013ccb1(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1401480d9(param_1,param_2[2],*param_2,param_1 + 0x1a0);
  if (cVar1 != '\0') {
    return;
  }
  FUN_140145fcc(param_1);
  return;
}

