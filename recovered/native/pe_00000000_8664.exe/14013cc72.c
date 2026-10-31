/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013cc72 */

void FUN_14013cc72(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1401480d9(param_1,param_2[2],*param_2,param_1 + 0x19c);
  if (cVar1 != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x19c);
  FUN_140145fcc(param_1);
  return;
}

