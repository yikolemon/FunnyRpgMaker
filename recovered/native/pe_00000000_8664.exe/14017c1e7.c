/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c1e7 */

void FUN_14017c1e7(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x34);
  if (uVar3 < *(uint *)(param_1 + 7)) {
    uVar5 = *(int *)((longlong)param_1 + 0x2c) + 1;
    lVar2 = param_1[3];
    uVar7 = uVar3 * 0xc;
    do {
      uVar4 = (ulonglong)uVar7;
      uVar6 = *(uint *)(lVar2 + 0x10 + uVar4);
      uVar1 = *(uint *)(lVar2 + 0x14 + uVar4);
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
      uVar5 = uVar6;
      if (uVar5 <= (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
         ) {
        uVar6 = *(uint *)(lVar2 + 0x18 + uVar4);
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        if ((uVar6 != 0) && (uVar6 < *(uint *)(*param_1 + 0x10))) {
          *(uint *)((longlong)param_1 + 0x2c) = uVar5;
          *(uint *)(param_1 + 6) = uVar6;
          *(uint *)((longlong)param_1 + 0x34) = uVar3;
          return;
        }
      }
      uVar3 = uVar3 + 1;
      uVar7 = uVar7 + 0xc;
    } while (*(uint *)(param_1 + 7) != uVar3);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

