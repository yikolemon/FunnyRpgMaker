/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047239d */

uint __fastcall FUN_0047239d(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

