/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00473848 */

undefined4 __fastcall FUN_00473848(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 == 0) {
    return 0;
  }
  uVar4 = 0;
  do {
    uVar2 = uVar1 + uVar4 >> 1;
    uVar3 = (uint)*(byte *)((int)param_1 + uVar2 * 4 + 6) |
            (uint)*(byte *)((int)param_1 + uVar2 * 4 + 5) << 8 |
            (uint)(byte)param_1[uVar2 + 1] << 0x10;
    if (uVar3 <= param_2) {
      if (param_2 <= uVar3 + *(byte *)((int)param_1 + uVar2 * 4 + 7)) {
        return 1;
      }
      uVar4 = uVar2 + 1;
      uVar2 = uVar1;
    }
    uVar1 = uVar2;
  } while (uVar4 < uVar2);
  return 0;
}

