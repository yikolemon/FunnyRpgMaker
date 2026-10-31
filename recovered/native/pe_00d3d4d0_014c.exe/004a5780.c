/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a5780 */

uint __cdecl FUN_004a5780(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0xe & 0x300;
  uVar1 = 0xffffffff;
  if (uVar2 == (param_1 >> 0x16 & 0x300)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

