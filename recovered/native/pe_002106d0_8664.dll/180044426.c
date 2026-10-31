/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180044426 */

undefined8 * FUN_180044426(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x50);
  FUN_1800444ca(puVar1 + 4,param_3);
  *puVar1 = param_2;
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  *(undefined2 *)(puVar1 + 3) = 0;
  return puVar1;
}

