/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140059ecc */

bool FUN_140059ecc(longlong param_1,ushort param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = FUN_14018d6c0(param_3,param_1 + 0x10);
  return (uVar1 & param_2) != 0;
}

