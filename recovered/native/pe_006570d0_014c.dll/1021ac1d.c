/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ac1d */

uint __fastcall FUN_1021ac1d(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

