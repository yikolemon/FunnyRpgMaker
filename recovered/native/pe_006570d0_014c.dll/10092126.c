/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092126 */

int __thiscall
FUN_10092126(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = thunk_FUN_10233400(param_2,param_3,param_4,param_5,param_1 + 8);
  return (int)(char)((0 < iVar1) - (iVar1 < 0));
}

