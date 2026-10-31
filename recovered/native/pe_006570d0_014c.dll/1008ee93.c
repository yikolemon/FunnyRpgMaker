/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008ee93 */

uint FUN_1008ee93(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_2 - param_5 < param_3 || param_2 < param_5) {
    param_3 = 0xffffffff;
  }
  else if (param_5 != 0) {
    iVar1 = param_1 + param_2 * 2;
    iVar2 = FUN_1008eee8(param_1 + param_3 * 2,iVar1,param_4,param_5);
    param_3 = 0xffffffff;
    if (iVar2 != iVar1) {
      param_3 = iVar2 - param_1 >> 1;
    }
  }
  return param_3;
}

