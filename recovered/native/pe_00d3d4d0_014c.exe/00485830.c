/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485830 */

uint FUN_00485830(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00495740();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_00494510();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_004957a0();
  }
  return uVar1 & 0xffffff00;
}

