/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100915e6 */

int __thiscall FUN_100915e6(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar5 = (undefined4 *)*param_2;
  }
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  uVar6 = uVar2;
  if (uVar1 < uVar2) {
    uVar6 = uVar1;
  }
  uVar3 = FUN_100047c3(param_1,puVar5,uVar6);
  if (uVar3 == uVar6) {
    iVar4 = (int)(char)((uVar2 >= uVar1 && uVar2 != uVar1) - (uVar2 < uVar1));
  }
  else {
    iVar4 = (uint)(*(ushort *)((int)puVar5 + uVar3 * 2) <= *(ushort *)((int)param_1 + uVar3 * 2)) *
            2 + -1;
  }
  return iVar4;
}

