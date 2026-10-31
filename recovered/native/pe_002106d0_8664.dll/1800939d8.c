/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800939d8 */

bool FUN_1800939d8(longlong param_1,ushort param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = FUN_180244f30(param_3,param_1 + 0x10);
  return (uVar1 & param_2) != 0;
}

