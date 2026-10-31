/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ae6f6 */

undefined4 * __thiscall FUN_100ae6f6(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = param_1[4];
  if (param_2 <= uVar2) {
    if (uVar2 - param_2 < param_3) {
      param_3 = uVar2 - param_2;
    }
    puVar3 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar3 = (undefined4 *)*param_1;
    }
    iVar1 = (int)puVar3 + param_2 * 2;
    FUN_1025b2d0(iVar1,iVar1 + param_3 * 2,((uVar2 - param_3) - param_2) * 2 + 2);
    param_1[4] = uVar2 - param_3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100047d6();
}

