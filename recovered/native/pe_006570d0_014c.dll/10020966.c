/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10020966 */

undefined4 *
FUN_10020966(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4,undefined4 param_5,
            undefined4 *param_6,uint param_7)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_6c [8];
  undefined4 *local_64;
  undefined4 *local_60;
  char *local_58;
  char *local_54;
  undefined4 local_40;
  undefined4 local_3c [2];
  undefined4 local_34;
  char *local_30;
  uint local_2c;
  char *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_6c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100595f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10020b04();
  local_14 = 1;
  local_24 = param_2;
  uVar3 = 0;
  local_2c = param_7;
  while (local_28 = param_3,
        cVar2 = FUN_10020b8e(param_3,param_4,local_6c,param_5,uVar3 | local_2c,param_3),
        param_3 = local_28, cVar2 != '\0') {
    if (((param_7 >> 0xb & 1) == 0) &&
       (local_30 = local_54, pcVar4 = local_58, local_58 != local_54)) {
      do {
        local_28 = pcVar4;
        FUN_10003d9a((int)*pcVar4);
        pcVar4 = local_28 + 1;
      } while (pcVar4 != local_30);
    }
    puVar5 = param_6;
    if (0xf < (uint)param_6[5]) {
      puVar5 = (undefined4 *)*param_6;
    }
    FUN_10020db6(&local_34,local_24,puVar5,param_6[4] + (int)puVar5,local_2c);
    puVar5 = local_64 + 1;
    if (local_60 == local_64) {
      puVar5 = local_3c;
    }
    local_24 = local_34;
    param_3 = (char *)*puVar5;
    if (((param_7 >> 0xc & 1) != 0) || (param_3 == param_4)) break;
    puVar5 = local_64;
    if (local_60 == local_64) {
      puVar5 = &local_40;
    }
    if ((char *)*puVar5 != param_3) {
      local_2c = local_2c | 0x100;
    }
    uVar3 = (uint)((char *)*puVar5 == param_3) << 0xd;
  }
  pcVar4 = local_28;
  pcVar1 = param_3;
  if ((param_7 >> 0xb & 1) == 0) {
    while (local_28 = pcVar1, local_28 != param_4) {
      FUN_10003d9a((int)*local_28);
      pcVar4 = local_28;
      pcVar1 = local_28 + 1;
    }
  }
  local_28 = pcVar4;
  *param_1 = local_24;
  local_14 = 0xffffffff;
  FUN_10004eae();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

