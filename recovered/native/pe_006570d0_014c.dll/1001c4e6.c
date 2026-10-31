/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c4e6 */

int __thiscall
FUN_1001c4e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = thunk_FUN_1022c960(param_2,param_3,param_4,param_5,param_1 + 8);
  return (int)(char)((0 < iVar1) - (iVar1 < 0));
}

