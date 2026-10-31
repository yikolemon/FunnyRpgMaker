/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019a0a3 */

ushort __fastcall FUN_1019a0a3(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetKeyState(param_1);
  return uVar1 >> 0xf;
}

