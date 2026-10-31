/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10020961 */

undefined4 *
thunk_FUN_10020966(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4,
                  undefined4 param_5,undefined4 *param_6,uint param_7)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [8];
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  char *pcStack_58;
  char *pcStack_54;
  undefined4 uStack_40;
  undefined4 auStack_3c [2];
  undefined4 uStack_34;
  char *pcStack_30;
  uint uStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = auStack_6c;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_100595f0;
  iStack_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  FUN_10020b04();
  uStack_14 = 1;
  uStack_24 = param_2;
  uVar3 = 0;
  uStack_2c = param_7;
  while (pcStack_28 = param_3,
        cVar2 = FUN_10020b8e(param_3,param_4,auStack_6c,param_5,uVar3 | uStack_2c,param_3),
        param_3 = pcStack_28, cVar2 != '\0') {
    if (((param_7 >> 0xb & 1) == 0) &&
       (pcStack_30 = pcStack_54, pcVar4 = pcStack_58, pcStack_58 != pcStack_54)) {
      do {
        pcStack_28 = pcVar4;
        FUN_10003d9a((int)*pcVar4);
        pcVar4 = pcStack_28 + 1;
      } while (pcVar4 != pcStack_30);
    }
    puVar5 = param_6;
    if (0xf < (uint)param_6[5]) {
      puVar5 = (undefined4 *)*param_6;
    }
    FUN_10020db6(&uStack_34,uStack_24,puVar5,param_6[4] + (int)puVar5,uStack_2c);
    puVar5 = puStack_64 + 1;
    if (puStack_60 == puStack_64) {
      puVar5 = auStack_3c;
    }
    uStack_24 = uStack_34;
    param_3 = (char *)*puVar5;
    if (((param_7 >> 0xc & 1) != 0) || (param_3 == param_4)) break;
    puVar5 = puStack_64;
    if (puStack_60 == puStack_64) {
      puVar5 = &uStack_40;
    }
    if ((char *)*puVar5 != param_3) {
      uStack_2c = uStack_2c | 0x100;
    }
    uVar3 = (uint)((char *)*puVar5 == param_3) << 0xd;
  }
  pcVar4 = pcStack_28;
  pcVar1 = param_3;
  if ((param_7 >> 0xb & 1) == 0) {
    while (pcStack_28 = pcVar1, pcStack_28 != param_4) {
      FUN_10003d9a((int)*pcStack_28);
      pcVar4 = pcStack_28;
      pcVar1 = pcStack_28 + 1;
    }
  }
  pcStack_28 = pcVar4;
  *param_1 = uStack_24;
  uStack_14 = 0xffffffff;
  FUN_10004eae();
  *unaff_FS_OFFSET = iStack_1c;
  return param_1;
}

