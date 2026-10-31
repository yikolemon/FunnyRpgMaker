/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c15dc */

undefined4 FUN_101c15dc(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == (ushort *)0x0) {
    return 0x14;
  }
  uVar1 = param_1[1];
  uVar2 = *param_1;
  if (uVar1 != 0 || uVar2 != 0) {
    if (uVar1 == 0) {
      return 0x14;
    }
    if (uVar2 == 0) {
      return 0x14;
    }
    uVar6 = 0;
    uVar5 = 0xffffffff;
    do {
      uVar3 = *(ushort *)(*(int *)(param_1 + 6) + uVar6 * 2);
      uVar4 = (uint)uVar3;
      if (uVar1 <= uVar3) {
        return 0x14;
      }
      if ((int)uVar4 <= (int)uVar5) {
        return 0x14;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar4;
    } while (uVar2 != uVar6);
    if (uVar1 - 1 != uVar4) {
      return 0x14;
    }
  }
  return 0;
}

