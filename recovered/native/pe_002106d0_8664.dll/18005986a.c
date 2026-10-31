/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005986a */

undefined8 * FUN_18005986a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return puVar1;
}

