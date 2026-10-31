/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001baf4 */

int __thiscall FUN_1001baf4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar3 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  uVar5 = uVar2;
  if (uVar1 < uVar2) {
    uVar5 = uVar1;
  }
  iVar4 = FUN_102595e0(param_1,puVar3,uVar5);
  if (iVar4 == 0) {
    iVar4 = (int)(char)((uVar2 >= uVar1 && uVar2 != uVar1) - (uVar2 < uVar1));
  }
  return iVar4;
}

