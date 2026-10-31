/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800acd46 */

void FUN_1800acd46(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18023a590(*(undefined8 *)(param_1 + 0x40));
  if (iVar1 != 0) {
    return;
  }
  FUN_18006c0ea(*(undefined8 *)(param_1 + 0x40),param_2);
  return;
}

