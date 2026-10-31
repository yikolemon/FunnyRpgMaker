/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f9122 */

undefined8 FUN_1801f9122(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    cVar1 = FUN_1801f9743();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_1801f9787(param_1);
  return uVar2;
}

