/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c422 */

undefined4 * __fastcall FUN_1006c422(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar7 = (undefined4 *)*param_1;
  }
  iVar6 = (int)puVar7 + param_1[4] * 2;
  iVar2 = FUN_100020d5(puVar7,iVar6);
  while (iVar3 = iVar2, iVar6 != iVar2) {
    psVar1 = (short *)(iVar6 + -2);
    iVar3 = iVar6;
    if ((*psVar1 == 0x5c) || (iVar6 = iVar6 + -2, *psVar1 == 0x2f)) break;
  }
  uVar4 = iVar3 - (int)puVar7 >> 1;
  if ((uint)param_1[4] < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  param_1[4] = uVar4;
  puVar5 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar5 = (undefined4 *)*param_1;
  }
  *(undefined2 *)((int)puVar5 + (iVar3 - (int)puVar7)) = 0;
  return param_1;
}

