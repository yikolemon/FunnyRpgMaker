/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ed586 */

void FUN_1801ed586(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1801f89ed(param_1,param_2[2],*param_2,param_1 + 0x19c);
  if (cVar1 != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x19c);
  FUN_1801f68e0(param_1);
  return;
}

