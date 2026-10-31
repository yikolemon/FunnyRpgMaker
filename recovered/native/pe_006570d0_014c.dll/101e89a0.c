/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e89a0 */

uint FUN_101e89a0(int param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x300);
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 < uVar2) {
    iVar5 = *(int *)(param_1 + 0x304);
    if (*(short *)(param_1 + 0xd2) == 0) {
      uVar1 = *(ushort *)(iVar5 + param_2 * 2);
      uVar6 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
      uVar4 = uVar6;
      if (param_2 * 2 + 4 <= uVar2 * 2) {
        uVar1 = *(ushort *)(iVar5 + 2 + param_2 * 2);
        uVar4 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
      }
      uVar6 = uVar6 * 2;
      uVar7 = uVar4 * 2;
    }
    else {
      uVar4 = *(uint *)(iVar5 + param_2 * 4);
      uVar6 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar7 = uVar6;
      if (param_2 * 4 + 8 <= uVar2 * 4) {
        uVar4 = *(uint *)(iVar5 + 4 + param_2 * 4);
        uVar7 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x2d4);
    iVar5 = 0;
    if (uVar4 < uVar6) {
      uVar3 = 0;
      goto LAB_101e8a5c;
    }
    if ((uVar4 < uVar7) && (uVar3 = 0, uVar7 = uVar4, param_2 != uVar2 - 2)) goto LAB_101e8a5c;
    uVar3 = uVar6;
    if (uVar6 <= uVar7) {
      uVar4 = uVar7;
    }
  }
  iVar5 = uVar4 - uVar3;
LAB_101e8a5c:
  *param_3 = iVar5;
  return uVar3;
}

