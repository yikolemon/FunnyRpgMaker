/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022cb75 */

longlong FUN_18022cb75(uint *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      uVar4 = uVar5 + uVar3 >> 1;
      uVar2 = (ulonglong)(uVar4 * 0xb);
      uVar1 = (uint)*(byte *)((longlong)param_1 + uVar2 + 6) |
              (uint)*(byte *)((longlong)param_1 + uVar2 + 5) << 8 |
              (uint)*(byte *)((longlong)param_1 + uVar2 + 4) << 0x10;
      if (uVar1 <= param_2) {
        if (param_2 <= uVar1) {
          return (longlong)param_1 + uVar2 + 7;
        }
        uVar5 = uVar4 + 1;
        uVar4 = uVar3;
      }
      uVar3 = uVar4;
    } while (uVar5 < uVar3);
  }
  return 0;
}

