/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008f25a */

undefined4 *
thunk_FUN_1008f25f(undefined4 *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined4 param_5,undefined4 *param_6,uint param_7)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [8];
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined2 *puStack_58;
  undefined2 *puStack_54;
  undefined4 uStack_40;
  undefined4 auStack_3c [2];
  undefined4 uStack_34;
  undefined2 *puStack_30;
  uint uStack_2c;
  undefined2 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = auStack_6c;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_100c3850;
  iStack_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  FUN_10020b04();
  uStack_14 = 1;
  uStack_24 = param_2;
  uVar3 = 0;
  uStack_2c = param_7;
  while (puStack_28 = param_3,
        cVar2 = FUN_1008f402(param_3,param_4,auStack_6c,param_5,uVar3 | uStack_2c,param_3),
        param_3 = puStack_28, cVar2 != '\0') {
    if (((param_7 >> 0xb & 1) == 0) &&
       (puStack_30 = puStack_54, puVar4 = puStack_58, puStack_58 != puStack_54)) {
      do {
        puStack_28 = puVar4;
        FUN_100045e8(*puVar4);
        puVar4 = puStack_28 + 1;
      } while (puVar4 != puStack_30);
    }
    puVar5 = param_6;
    if (7 < (uint)param_6[5]) {
      puVar5 = (undefined4 *)*param_6;
    }
    FUN_1008f622(&uStack_34,uStack_24,puVar5,(int)puVar5 + param_6[4] * 2,uStack_2c);
    puVar5 = puStack_64 + 1;
    if (puStack_60 == puStack_64) {
      puVar5 = auStack_3c;
    }
    uStack_24 = uStack_34;
    param_3 = (undefined2 *)*puVar5;
    if (((param_7 >> 0xc & 1) != 0) || (param_3 == param_4)) break;
    puVar5 = puStack_64;
    if (puStack_60 == puStack_64) {
      puVar5 = &uStack_40;
    }
    if ((undefined2 *)*puVar5 != param_3) {
      uStack_2c = uStack_2c | 0x100;
    }
    uVar3 = (uint)((undefined2 *)*puVar5 == param_3) << 0xd;
  }
  puVar4 = puStack_28;
  puVar1 = param_3;
  if ((param_7 >> 0xb & 1) == 0) {
    while (puStack_28 = puVar1, puStack_28 != param_4) {
      FUN_100045e8(*puStack_28);
      puVar4 = puStack_28;
      puVar1 = puStack_28 + 1;
    }
  }
  puStack_28 = puVar4;
  *param_1 = uStack_24;
  uStack_14 = 0xffffffff;
  FUN_10004eae();
  *unaff_FS_OFFSET = iStack_1c;
  return param_1;
}

