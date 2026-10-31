/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000de16 */

undefined8 * FUN_14000de16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1401887b0(0x50);
  FUN_14000deba(puVar1 + 4,param_3);
  *puVar1 = param_2;
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  *(undefined2 *)(puVar1 + 3) = 0;
  return puVar1;
}

