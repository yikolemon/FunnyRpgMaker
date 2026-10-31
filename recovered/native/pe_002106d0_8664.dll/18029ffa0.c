/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029ffa0 */

void FUN_18029ffa0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x22;
    return;
  }
  return;
}

