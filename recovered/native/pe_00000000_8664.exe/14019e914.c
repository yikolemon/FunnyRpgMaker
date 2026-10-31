/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019e914 */

void FUN_14019e914(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_14019e8f0();
  *puVar1 = param_1;
  uVar2 = FUN_14019e93c(param_1);
  puVar1 = (undefined4 *)FUN_14019e8cc();
  *puVar1 = uVar2;
  return;
}

