/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140215aa8 */

void FUN_140215aa8(void)

{
  code *pcVar1;
  
  FUN_14044ac90("e Mouse Wheel");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

