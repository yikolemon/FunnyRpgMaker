/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101622d1 */

void __fastcall FUN_101622d1(int param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if ((param_3 & 0x18) == 0) {
    uVar5 = *(uint *)(param_1 + 4) & 0xe000;
    if ((uVar5 == 0x4000) || (uVar5 == 0x2000)) {
      param_3 = param_3 | 0x10;
    }
    else {
      param_3 = param_3 | 8;
    }
  }
  uVar6 = (~*(uint *)(param_1 + 4) & 1) << 5 | param_3;
  uVar5 = uVar6 | 0x200;
  if ((~param_3 & 0xc00) != 0) {
    uVar5 = uVar6;
  }
  if ((uVar5 & 0x30000) == 0) {
    uVar5 = uVar5 + (uint)(param_2 != *(uint **)(param_1 + 0x10)) * 0x10000 + 0x10000;
  }
  *param_2 = *param_2 & 0xf000000 | uVar5;
  *(undefined1 *)((int)param_2 + 0x72) = 0;
  bVar1 = *(byte *)((int)param_2 + 0x71) & 3;
  *(byte *)((int)param_2 + 0x71) = bVar1;
  if ((*(uint *)(param_1 + 4) & 8) != 0) {
    bVar7 = (uVar5 & 0x4400) == 0x4000;
    bVar4 = 2;
    if (bVar7) {
      bVar4 = 9;
    }
    bVar3 = bVar7 * '\x02' | 4;
    uVar6 = bVar7 + 1;
    if ((uVar5 & 0x8800) != 0x8000) {
      bVar4 = bVar7;
      bVar3 = bVar7 * '\x02';
      uVar6 = (uint)bVar7;
    }
    if ((uVar5 & 0x4400) == 0) {
      bVar3 = bVar3 | 2;
      bVar4 = bVar4 | (byte)(1 << uVar6 * 2);
      uVar6 = uVar6 + 1;
    }
    if ((uVar5 & 0x8800) == 0) {
      bVar3 = bVar3 | 4;
      bVar4 = bVar4 | (byte)(2 << (char)uVar6 * '\x02');
      uVar6 = uVar6 + 1;
    }
    bVar2 = uVar6 == 0 | (byte)(*(uint *)(param_1 + 4) >> 0x1b) & 1;
    *(byte *)((int)param_2 + 0x72) = bVar4;
    *(byte *)((int)param_2 + 0x71) =
         ((bVar2 + (char)uVar6) * '\x04' & 0xc | (bVar2 | bVar3) << 4) + bVar1;
    FUN_10165a77(param_1,param_2);
  }
  return;
}

