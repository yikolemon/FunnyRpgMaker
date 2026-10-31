/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027e6b4 */

void FUN_18027e6b4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_18027e690();
  *puVar1 = param_1;
  uVar2 = FUN_18027e6dc(param_1);
  puVar1 = (undefined4 *)FUN_18027e66c();
  *puVar1 = uVar2;
  return;
}

