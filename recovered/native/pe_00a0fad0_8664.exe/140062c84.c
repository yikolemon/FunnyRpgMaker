/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140062c84 */

bool FUN_140062c84(longlong param_1,ushort param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = FUN_1400ddb40(param_3,param_1 + 0x10);
  return (uVar1 & param_2) != 0;
}

