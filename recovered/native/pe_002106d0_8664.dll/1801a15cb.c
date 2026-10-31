/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a15cb */

ushort FUN_1801a15cb(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetKeyState(param_1);
  return uVar1 >> 0xf;
}

