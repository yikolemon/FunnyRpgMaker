/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10024a34 */

void __thiscall FUN_10024a34(uint *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  
  *(undefined4 *)(param_2 + 1) = 0;
  uVar2 = param_1[1];
  if ((int)uVar2 < 0) {
    if ((int)param_3 < (int)*param_1) {
      puVar1 = (undefined4 *)(param_1[2] + param_3 * 0x10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)param_2 = *puVar1;
      *(undefined4 *)((int)param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 1) = uVar5;
      *(undefined4 *)((int)param_2 + 0xc) = uVar6;
    }
  }
  else if (param_3 < 0xf) {
    bVar7 = (byte)(param_3 * 4);
    bVar3 = bVar7 & 0x1f;
    uVar8 = uVar2 >> (bVar7 & 0x1f);
    if ((param_3 * 4 & 0x20) == 0) {
      uVar8 = *param_1 >> bVar3 | uVar2 << 0x20 - bVar3;
    }
    *(uint *)(param_2 + 1) = uVar8 & 0xf;
    if ((uVar8 & 0xf) != 0) {
      *param_2 = *(undefined8 *)(param_1[2] + param_3 * 8);
    }
  }
  return;
}

