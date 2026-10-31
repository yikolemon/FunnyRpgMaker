/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00430224 */

byte * __fastcall FUN_00430224(byte *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  do {
    bVar1 = *param_1;
    uVar4 = (uint)bVar1;
    param_1 = param_1 + 1;
  } while (uVar4 == 0x20);
  if ((char)bVar1 < '\0') {
    uVar6 = 1;
    uVar2 = 0x1f;
    if (0xdf < bVar1) {
      uVar6 = bVar1 < 0xf0 ^ 3;
      uVar2 = (uint)(bVar1 < 0xf0) * 8 + 7;
    }
    uVar4 = uVar4 & uVar2;
    uVar2 = 0;
    do {
      uVar4 = param_1[uVar2] & 0x3f | uVar4 << 6;
      uVar2 = uVar2 + 1;
    } while (uVar6 != uVar2);
    param_1 = param_1 + uVar6;
  }
  bVar1 = *param_1;
  if ((bVar1 & 0xdf) != 0) {
    do {
      param_1 = param_1 + 1;
      uVar2 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar6 = (uint)(bVar1 < 0xf0) * 8 + 7;
        uVar3 = bVar1 < 0xf0 ^ 3;
        if (bVar1 < 0xe0) {
          uVar6 = 0x1f;
          uVar3 = 1;
        }
        uVar2 = uVar2 & uVar6;
        uVar6 = 0;
        do {
          uVar2 = param_1[uVar6] & 0x3f | uVar2 << 6;
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
        param_1 = param_1 + uVar3;
      }
      bVar1 = *param_1;
    } while ((bVar1 & 0xdf) != 0);
    uVar6 = 0;
    uVar5 = 0;
    if (uVar2 != 0) goto LAB_004302eb;
  }
  uVar5 = 1;
  uVar6 = FUN_0041df5f(**(int **)(param_2 + 0x24),uVar4);
LAB_004302eb:
  *param_3 = uVar6;
  *param_4 = uVar5;
  return param_1;
}

