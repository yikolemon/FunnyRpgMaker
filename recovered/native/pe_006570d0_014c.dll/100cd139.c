/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd139 */

ushort __fastcall FUN_100cd139(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetAsyncKeyState(param_1);
  return uVar1 >> 0xf;
}

