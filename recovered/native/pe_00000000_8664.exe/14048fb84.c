/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048fb84 */

void FUN_14048fb84(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_14048fb60();
  *puVar1 = param_1;
  uVar2 = FUN_14048fbac(param_1);
  puVar1 = (undefined4 *)FUN_14048fb3c();
  *puVar1 = uVar2;
  return;
}

