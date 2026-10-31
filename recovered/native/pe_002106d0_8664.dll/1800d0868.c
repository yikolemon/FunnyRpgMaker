/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0868 */

ushort FUN_1800d0868(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetAsyncKeyState(param_1);
  return uVar1 >> 0xf;
}

