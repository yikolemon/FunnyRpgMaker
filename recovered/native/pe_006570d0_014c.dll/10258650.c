/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258650 */

void FUN_10258650(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_1004303e();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_1012c5b5();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}

