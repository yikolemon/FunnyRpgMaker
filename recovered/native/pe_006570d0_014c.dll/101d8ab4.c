/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d8ab4 */

byte * __fastcall FUN_101d8ab4(byte *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  do {
    bVar2 = *param_1;
    uVar5 = (uint)bVar2;
    param_1 = param_1 + 1;
  } while (uVar5 == 0x20);
  if ((char)bVar2 < '\0') {
    uVar7 = 1;
    uVar3 = 0x1f;
    if (0xdf < bVar2) {
      uVar7 = bVar2 < 0xf0 ^ 3;
      uVar3 = (uint)(bVar2 < 0xf0) * 8 + 7;
    }
    uVar5 = uVar5 & uVar3;
    uVar3 = 0;
    do {
      uVar5 = param_1[uVar3] & 0x3f | uVar5 << 6;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
    param_1 = param_1 + uVar7;
  }
  bVar2 = *param_1;
  if ((bVar2 & 0xdf) != 0) {
    do {
      param_1 = param_1 + 1;
      uVar3 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar7 = (uint)(bVar2 < 0xf0) * 8 + 7;
        uVar4 = bVar2 < 0xf0 ^ 3;
        if (bVar2 < 0xe0) {
          uVar7 = 0x1f;
          uVar4 = 1;
        }
        uVar3 = uVar3 & uVar7;
        uVar7 = 0;
        do {
          uVar3 = param_1[uVar7] & 0x3f | uVar3 << 6;
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
        param_1 = param_1 + uVar4;
      }
      bVar2 = *param_1;
    } while ((bVar2 & 0xdf) != 0);
    uVar1 = 0;
    uVar6 = 0;
    if (uVar3 != 0) goto LAB_101d8b7b;
  }
  uVar6 = 1;
  uVar1 = FUN_101c196f(**(undefined4 **)(param_2 + 0x24),uVar5);
LAB_101d8b7b:
  *param_3 = uVar1;
  *param_4 = uVar6;
  return param_1;
}

