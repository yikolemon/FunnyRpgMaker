/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d7695 */

ushort FUN_1400d7695(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetKeyState(param_1);
  return uVar1 >> 0xf;
}

