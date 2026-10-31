/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10277889 */

uint FUN_10277889(uint *param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  uVar7 = (uint)param_4;
  uVar3 = param_1[1];
  uVar1 = *param_1;
  uVar2 = __aullshr();
  uVar4 = uVar2 & 0xffff;
  if ((ushort)uVar2 < 9) {
    if ((ushort)uVar2 < 8) {
      return uVar2 & 0xff00;
    }
    uVar6 = 0;
    uVar2 = 1 << (uVar7 & 0x1f);
    uVar5 = 0;
    if (0x1f < uVar7) {
      uVar5 = uVar2;
    }
    uVar2 = uVar2 ^ uVar5;
    if (0x3f < uVar7) {
      uVar5 = uVar2;
    }
    uVar4 = uVar7;
    if ((uVar2 - 1 & uVar1) == 0 && ((uVar5 - 1) + (uint)(uVar2 != 0) & uVar3 & 0xfffff) == 0) {
      if (param_4 == 0x30) {
        uVar3 = uVar3 & 0x7ff00000;
        if (uVar3 != 0) {
          uVar6 = 1;
        }
      }
      else {
        uVar3 = __aullshr();
        uVar6 = (undefined1)uVar3;
      }
      return CONCAT31((int3)(uVar3 >> 8),uVar6) & 0xffffff01;
    }
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}

