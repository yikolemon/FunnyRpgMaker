/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140070bbe */

undefined8 * FUN_140070bbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400d3680(0x50);
  FUN_140070c62(puVar1 + 4,param_3);
  *puVar1 = param_2;
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  *(undefined2 *)(puVar1 + 3) = 0;
  return puVar1;
}

