/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021c11d */

ushort __fastcall FUN_1021c11d(uint *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *param_1;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      uVar6 = uVar5 + uVar3 >> 1;
      iVar2 = uVar6 * 5;
      uVar4 = (uint)*(byte *)((int)param_1 + iVar2 + 6) |
              (uint)*(byte *)((int)param_1 + iVar2 + 5) << 8 |
              (uint)*(byte *)((int)param_1 + iVar2 + 4) << 0x10;
      if (uVar4 <= param_2) {
        if (param_2 <= uVar4) {
          uVar1 = *(ushort *)((int)param_1 + iVar2 + 7);
          return uVar1 << 8 | uVar1 >> 8;
        }
        uVar5 = uVar6 + 1;
        uVar6 = uVar3;
      }
      uVar3 = uVar6;
    } while (uVar5 < uVar6);
  }
  return 0;
}

