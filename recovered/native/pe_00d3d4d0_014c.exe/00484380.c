/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484380 */

void FUN_00484380(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  return;
}

