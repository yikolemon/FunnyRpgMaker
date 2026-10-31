/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e3002 */

byte * FUN_1801e3002(byte *param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  longlong lVar10;
  
  do {
    bVar9 = *param_1;
    uVar4 = (uint)bVar9;
    param_1 = param_1 + 1;
  } while (bVar9 == 0x20);
  puVar7 = param_3;
  puVar8 = param_4;
  if ((char)bVar9 < '\0') {
    uVar4 = 0x1f;
    if (0xdf < bVar9) {
      uVar4 = (uint)(bVar9 < 0xf0) * 8 + 7;
    }
    uVar3 = 1;
    if (0xdf < bVar9) {
      uVar3 = (ulonglong)(bVar9 < 0xf0 ^ 3);
    }
    uVar4 = bVar9 & uVar4;
    puVar7 = (undefined4 *)0x0;
    do {
      puVar8 = (undefined4 *)(ulonglong)(uVar4 << 6);
      uVar4 = param_1[(longlong)puVar7] & 0x3f | uVar4 << 6;
      puVar7 = (undefined4 *)((longlong)puVar7 + 1);
    } while ((int)uVar3 != (int)puVar7);
    param_1 = param_1 + uVar3;
  }
  bVar9 = *param_1;
  pbVar5 = param_1;
  if ((bVar9 & 0xdf) != 0) {
    do {
      pbVar5 = param_1 + 1;
      puVar8 = (undefined4 *)(ulonglong)bVar9;
      if ((char)bVar9 < '\0') {
        uVar6 = (uint)(bVar9 < 0xf0) * 8 + 7;
        if (bVar9 < 0xe0) {
          uVar6 = 0x1f;
        }
        uVar1 = bVar9 < 0xf0 ^ 3;
        if (bVar9 < 0xe0) {
          uVar1 = 1;
        }
        puVar8 = (undefined4 *)(ulonglong)(bVar9 & uVar6);
        lVar10 = 0;
        do {
          puVar8 = (undefined4 *)(ulonglong)(pbVar5[lVar10] & 0x3f | (int)puVar8 << 6);
          lVar10 = lVar10 + 1;
        } while (uVar1 != (uint)lVar10);
        pbVar5 = param_1 + (ulonglong)uVar1 + 1;
      }
      bVar9 = *pbVar5;
      param_1 = pbVar5;
    } while ((bVar9 & 0xdf) != 0);
    uVar2 = 0;
    puVar7 = (undefined4 *)0x0;
    if ((int)puVar8 != 0) goto LAB_1801e310d;
  }
  uVar2 = FUN_1801cb681(**(undefined8 **)(param_2 + 0x30),uVar4,puVar7,puVar8);
  puVar7 = (undefined4 *)0x1;
LAB_1801e310d:
  *param_3 = uVar2;
  *param_4 = (int)puVar7;
  return pbVar5;
}

