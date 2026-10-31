/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101731f5 */

uint __fastcall FUN_101731f5(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_3 * 3 - param_2) - param_1;
  uVar2 = param_2;
  if (param_1 < param_2) {
    uVar2 = param_1;
  }
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  if ((int)param_2 <= iVar1) {
    param_3 = uVar2;
  }
  if (iVar1 <= (int)uVar2) {
    param_3 = param_2;
  }
  return param_3;
}

