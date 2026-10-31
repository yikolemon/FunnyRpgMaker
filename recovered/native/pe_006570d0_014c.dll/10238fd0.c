/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10238fd0 */

bool __thiscall FUN_10238fd0(int param_1,ushort param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = FUN_10233620(param_3,param_1 + 8);
  return (param_2 & uVar1) != 0;
}

