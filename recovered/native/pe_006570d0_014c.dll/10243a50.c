/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10243a50 */

uint __thiscall
FUN_10243a50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = FUN_10233400(param_2,param_3,param_4,param_5,param_1 + 8);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (uint)(iVar1 != 0);
}

