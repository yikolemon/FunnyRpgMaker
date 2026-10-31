/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c2c3 */

undefined8 FUN_14017c2c3(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = uVar1 + uVar3 >> 1;
      uVar4 = (ulonglong)(uVar2 * 4);
      uVar5 = (uint)*(byte *)((longlong)param_1 + uVar4 + 6) |
              (uint)*(byte *)((longlong)param_1 + uVar4 + 5) << 8 |
              (uint)*(byte *)((longlong)param_1 + uVar4 + 4) << 0x10;
      if (uVar5 <= param_2) {
        if (param_2 <= uVar5 + *(byte *)((longlong)param_1 + uVar4 + 7)) {
          return 1;
        }
        uVar3 = uVar2 + 1;
        uVar2 = uVar1;
      }
      uVar1 = uVar2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

