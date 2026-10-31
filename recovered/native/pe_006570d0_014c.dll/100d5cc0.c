/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5cc0 */

uint __thiscall FUN_100d5cc0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar4 = (undefined4 *)*param_2;
  }
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (uVar2 - uVar1 < param_3 || uVar2 < uVar1) {
    param_3 = 0xffffffff;
  }
  else if (uVar1 != 0) {
    iVar3 = FUN_10004e4d(param_3 + (int)param_1,uVar2 + (int)param_1,puVar4,uVar1);
    param_3 = 0xffffffff;
    if (iVar3 != uVar2 + (int)param_1) {
      param_3 = iVar3 - (int)param_1;
    }
  }
  return param_3;
}

