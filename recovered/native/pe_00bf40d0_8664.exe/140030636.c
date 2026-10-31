/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140030636 */

byte * FUN_140030636(byte *param_1,longlong param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  
  do {
    bVar8 = *param_1;
    param_1 = param_1 + 1;
  } while (bVar8 == 0x20);
  if ((char)bVar8 < '\0') {
    uVar3 = 1;
    if (0xdf < bVar8) {
      uVar3 = (ulonglong)(bVar8 < 0xf0 ^ 3);
    }
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
    } while ((int)uVar3 != iVar5);
    param_1 = param_1 + uVar3;
  }
  bVar8 = *param_1;
  pbVar4 = param_1;
  if ((bVar8 & 0xdf) != 0) {
    do {
      pbVar4 = param_1 + 1;
      uVar7 = (uint)bVar8;
      if ((char)bVar8 < '\0') {
        uVar2 = (uint)(bVar8 < 0xf0) * 8 + 7;
        if (bVar8 < 0xe0) {
          uVar2 = 0x1f;
        }
        uVar1 = bVar8 < 0xf0 ^ 3;
        if (bVar8 < 0xe0) {
          uVar1 = 1;
        }
        uVar7 = uVar7 & uVar2;
        lVar9 = 0;
        do {
          uVar7 = pbVar4[lVar9] & 0x3f | uVar7 << 6;
          lVar9 = lVar9 + 1;
        } while (uVar1 != (uint)lVar9);
        pbVar4 = param_1 + (ulonglong)uVar1 + 1;
      }
      bVar8 = *pbVar4;
      param_1 = pbVar4;
    } while ((bVar8 & 0xdf) != 0);
    uVar2 = 0;
    uVar6 = 0;
    if (uVar7 != 0) goto LAB_140030741;
  }
  uVar2 = FUN_14001e059(**(longlong **)(param_2 + 0x30));
  uVar6 = 1;
LAB_140030741:
  *param_3 = uVar2;
  *param_4 = uVar6;
  return pbVar4;
}

