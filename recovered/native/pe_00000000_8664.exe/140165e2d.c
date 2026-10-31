/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140165e2d */

ulonglong FUN_140165e2d(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar1 = *param_1;
  uVar3 = 0;
  if (uVar1 < param_2) {
    uVar4 = (ulonglong)(uint)((int)param_2 - (int)uVar1);
    uVar3 = param_4 * 2;
    if (uVar4 <= (ulonglong)(param_4 * 2)) {
      uVar3 = uVar4;
    }
    lVar5 = 0;
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar8 = 1;
      uVar4 = 0;
      do {
        uVar7 = (ulonglong)*(byte *)(uVar1 + lVar5);
        if ((0x20 < uVar7) || ((0x100003601U >> (uVar7 & 0x3f) & 1) == 0)) {
          if (((char)*(byte *)(uVar1 + lVar5) < '\0') || (0xf < (byte)(&DAT_140ea10b0)[uVar7]))
          break;
          uVar6 = uVar8 << 4 | (uint)(byte)(&DAT_140ea10b0)[uVar7];
          uVar2 = uVar8 & 0x10;
          uVar8 = uVar6;
          if (uVar2 != 0) {
            *(char *)(param_3 + uVar4) = (char)uVar6;
            uVar4 = (ulonglong)((int)uVar4 + 1);
            uVar8 = 1;
          }
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < (uint)uVar3);
      uVar3 = uVar4;
      if (uVar8 != 1) {
        uVar3 = (ulonglong)((int)uVar4 + 1);
        *(char *)(param_3 + uVar4) = (char)uVar8 << 4;
      }
    }
    *param_1 = uVar1 + lVar5;
  }
  return uVar3;
}

