/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088960 */

undefined8 * FUN_140088960(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  uVar1 = FUN_14008e82c();
  *(undefined4 *)param_1 = uVar1;
  uVar1 = FUN_14008e184();
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  lVar2 = FUN_14008e7f8();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(uint *)(param_1 + 1) = (uint)(lVar2 == 0);
  if (lVar2 != 0) {
    lVar2 = FUN_14008ec04();
    uVar5 = 0;
    lVar3 = 0;
    do {
      if (*(short *)(lVar2 + lVar3 * 2) < 0) {
        *(byte *)((lVar3 >> 3) + 0xc + (longlong)param_1) =
             *(byte *)((lVar3 >> 3) + 0xc + (longlong)param_1) | (byte)(1 << (uVar5 & 7));
      }
      if (*(short *)(lVar2 + 2 + lVar3 * 2) < 0) {
        lVar4 = lVar3 + 1 >> 3;
        *(byte *)(lVar4 + 0xc + (longlong)param_1) =
             *(byte *)(lVar4 + 0xc + (longlong)param_1) | (byte)(1 << (uVar5 + 1 & 7));
      }
      if (*(short *)(lVar2 + 4 + lVar3 * 2) < 0) {
        lVar4 = lVar3 + 2 >> 3;
        *(byte *)(lVar4 + 0xc + (longlong)param_1) =
             *(byte *)(lVar4 + 0xc + (longlong)param_1) | (byte)(1 << (uVar5 + 2 & 7));
      }
      if (*(short *)(lVar2 + 6 + lVar3 * 2) < 0) {
        lVar4 = lVar3 + 3 >> 3;
        *(byte *)(lVar4 + 0xc + (longlong)param_1) =
             *(byte *)(lVar4 + 0xc + (longlong)param_1) | (byte)(1 << (uVar5 + 3 & 7));
      }
      uVar5 = uVar5 + 4;
      lVar3 = lVar3 + 4;
    } while ((int)uVar5 < 0x100);
  }
  return param_1;
}

