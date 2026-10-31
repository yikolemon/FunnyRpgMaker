/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024b290 */

bool FUN_18024b290(longlong param_1,ushort param_2,undefined2 param_3)

{
  ushort uVar1;
  
  uVar1 = FUN_180244f30(param_3,param_1 + 0x10);
  return (param_2 & uVar1) != 0;
}

