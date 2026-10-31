/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e17f0 */

bool FUN_1400e17f0(longlong param_1,ushort param_2,undefined2 param_3)

{
  ushort uVar1;
  
  uVar1 = FUN_1400ddb40(param_3,param_1 + 0x10);
  return (param_2 & uVar1) != 0;
}

