/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017ad17 */

uint FUN_14017ad17(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

