/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004737ef */

int __fastcall FUN_004737ef(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      uVar3 = uVar5 + uVar2 >> 1;
      iVar1 = uVar3 * 0xb;
      uVar4 = (uint)*(byte *)((int)param_1 + iVar1 + 6) |
              (uint)*(byte *)((int)param_1 + iVar1 + 5) << 8 |
              (uint)*(byte *)((int)param_1 + iVar1 + 4) << 0x10;
      if (uVar4 <= param_2) {
        if (param_2 <= uVar4) {
          return (int)param_1 + iVar1 + 7;
        }
        uVar5 = uVar3 + 1;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
    } while (uVar5 < uVar3);
  }
  return 0;
}

