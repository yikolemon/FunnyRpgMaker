/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f554e */

undefined8 * FUN_1800f554e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x20);
  *puVar1 = 0x200000001;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *param_1 = puVar1;
  return param_1;
}

