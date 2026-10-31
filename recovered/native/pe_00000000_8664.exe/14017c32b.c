/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c32b */

ushort FUN_14017c32b(uint *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar4 + uVar2 >> 1;
      uVar5 = (ulonglong)(uVar3 * 5);
      uVar6 = (uint)*(byte *)((longlong)param_1 + uVar5 + 6) |
              (uint)*(byte *)((longlong)param_1 + uVar5 + 5) << 8 |
              (uint)*(byte *)((longlong)param_1 + uVar5 + 4) << 0x10;
      if (uVar6 <= param_2) {
        if (param_2 <= uVar6) {
          uVar1 = *(ushort *)((longlong)param_1 + uVar5 + 7);
          return uVar1 << 8 | uVar1 >> 8;
        }
        uVar4 = uVar3 + 1;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
    } while (uVar4 < uVar2);
  }
  return 0;
}

