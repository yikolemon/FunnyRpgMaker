/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005870 */

undefined8 * FUN_140005870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1401887b0(0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  return puVar1;
}

