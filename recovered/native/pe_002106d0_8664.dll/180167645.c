/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180167645 */

void FUN_180167645(longlong param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  
  if ((param_3 & 0x18) == 0) {
    uVar2 = *(uint *)(param_1 + 4) & 0xe000;
    if ((uVar2 == 0x4000) || (uVar2 == 0x2000)) {
      param_3 = param_3 | 0x10;
    }
    else {
      param_3 = param_3 | 8;
    }
  }
  uVar5 = (~*(uint *)(param_1 + 4) & 1) << 5 | param_3;
  uVar2 = uVar5 | 0x200;
  if ((~param_3 & 0xc00) != 0) {
    uVar2 = uVar5;
  }
  if ((uVar2 & 0x30000) == 0) {
    uVar2 = uVar2 + (uint)((int)((ulonglong)((longlong)param_2 - *(longlong *)(param_1 + 0x18)) >> 2
                                ) * 0x4f72c235 != 0) * 0x10000 + 0x10000;
  }
  *param_2 = *param_2 & 0xf000000 | uVar2;
  *(undefined1 *)((longlong)param_2 + 0x72) = 0;
  bVar4 = *(byte *)((longlong)param_2 + 0x71) & 3;
  *(byte *)((longlong)param_2 + 0x71) = bVar4;
  if ((*(uint *)(param_1 + 4) & 8) == 0) {
    return;
  }
  bVar7 = (uVar2 & 0x4400) == 0x4000;
  bVar6 = 2;
  if (bVar7) {
    bVar6 = 9;
  }
  bVar3 = bVar7 * '\x02' + 4;
  uVar5 = bVar7 + 1;
  if ((uVar2 & 0x8800) != 0x8000) {
    bVar3 = bVar7 * '\x02';
    bVar6 = bVar7;
    uVar5 = (uint)bVar7;
  }
  if ((uVar2 & 0x4400) == 0) {
    bVar3 = bVar3 | 2;
    bVar6 = bVar6 | (byte)(1 << uVar5 * 2);
    uVar5 = uVar5 + 1;
  }
  if ((uVar2 & 0x8800) == 0) {
    bVar3 = bVar3 | 4;
    bVar6 = bVar6 | (byte)(2 << (char)uVar5 * '\x02');
    uVar5 = uVar5 + 1;
  }
  bVar1 = uVar5 == 0 | (byte)(*(uint *)(param_1 + 4) >> 0x1b) & 1;
  *(byte *)((longlong)param_2 + 0x72) = bVar6;
  *(byte *)((longlong)param_2 + 0x71) =
       ((char)uVar5 + bVar1) * '\x04' & 0xc | (bVar1 | bVar3) << 4 | bVar4;
  FUN_18016ae97(param_1);
  return;
}

