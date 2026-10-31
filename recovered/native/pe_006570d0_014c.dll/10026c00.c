/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10026c00 */

undefined4
FUN_10026c00(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
            uint *param_6,undefined4 param_7)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 *local_274;
  uint local_270;
  uint local_26c;
  code *local_268;
  undefined1 local_264 [503];
  byte bStack_6d;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 **local_64;
  undefined1 local_2c [4];
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_274;
  local_18 = &LAB_10059900;
  local_1c = ExceptionList;
  local_274 = local_264;
  local_270 = 0;
  local_268 = FUN_1002747c;
  local_26c = 500;
  local_14 = 0;
  local_28 = *param_6;
  ExceptionList = &local_1c;
  switch(local_28 & 7) {
  case 4:
    if ((local_28 >> 0xd & 1) != 0) {
      uVar4 = (uint)((local_28 >> 0xc & 1) == 0) << 0xd | 0x5830;
      uVar1 = uVar4 << 8;
      if (param_5 == 0) {
        uVar1 = uVar4;
      }
      param_5 = (uVar1 | param_5) + 0x2000000;
    }
    uVar1 = param_3;
    uVar4 = param_4;
    local_24 = 0;
    do {
      uVar7 = local_24;
      uVar1 = uVar1 >> 4 | uVar4 << 0x1c;
      local_24 = uVar7 + 1;
      uVar4 = uVar4 >> 4;
    } while (uVar1 != 0 || uVar4 != 0);
    if (uVar7 < 500) {
      uVar1 = 0;
      local_270 = local_24;
      local_20 = (undefined1 *)&local_274;
LAB_10026fe7:
      pcVar6 = "0123456789ABCDEF";
      if ((local_28 >> 0xc & 1) == 0) {
        pcVar6 = "0123456789abcdef";
      }
      pcVar2 = local_274 + local_24 + uVar1;
      do {
        pcVar2 = pcVar2 + -1;
        uVar1 = param_4 << 0x1c | param_3 >> 4;
        *pcVar2 = pcVar6[param_3 & 0xf];
        param_4 = param_4 >> 4;
        param_3 = uVar1;
      } while (uVar1 != 0 || param_4 != 0);
    }
    else {
      local_14 = 0;
      local_20 = (undefined1 *)&local_274;
      FUN_1002747c(&local_274,local_24);
      uVar4 = local_270 + local_24;
      if ((uVar4 <= local_26c) &&
         (uVar1 = local_270, local_270 = uVar4, local_274 != (undefined1 *)0x0)) goto LAB_10026fe7;
      pbVar5 = &bStack_6d + local_24;
      uVar1 = local_28 >> 0xc;
      local_28 = (int)&local_6c + local_24;
      pcVar6 = "0123456789ABCDEF";
      if ((uVar1 & 1) == 0) {
        pcVar6 = "0123456789abcdef";
      }
      do {
        uVar1 = param_4 << 0x1c | param_3 >> 4;
        *pbVar5 = pcVar6[param_3 & 0xf];
        param_4 = param_4 >> 4;
        pbVar5 = pbVar5 + -1;
        param_3 = uVar1;
      } while (uVar1 != 0 || param_4 != 0);
      local_14 = 0;
      FUN_100253ad(local_2c,&local_6c,local_28,&local_274);
    }
    local_14 = 0;
    break;
  case 5:
    uVar1 = param_3;
    local_24 = 0;
    uVar4 = param_4;
    do {
      uVar7 = local_24;
      uVar1 = uVar1 >> 3 | uVar4 << 0x1d;
      local_24 = uVar7 + 1;
      uVar4 = uVar4 >> 3;
    } while (uVar1 != 0 || uVar4 != 0);
    if ((((local_28 >> 0xd & 1) != 0) && (param_3 != 0 || param_4 != 0)) &&
       ((int)param_6[3] <= (int)(uVar7 + 1))) {
      uVar1 = 0x3000;
      if (param_5 == 0) {
        uVar1 = 0x30;
      }
      param_5 = (uVar1 | param_5) + 0x1000000;
    }
    if (uVar7 < 500) {
      uVar1 = 0;
      local_270 = local_24;
      local_20 = (undefined1 *)&local_274;
LAB_1002703d:
      pbVar5 = local_274 + local_24 + uVar1;
      do {
        pbVar5 = pbVar5 + -1;
        *pbVar5 = (byte)param_3 & 7 | 0x30;
        param_3 = param_3 >> 3 | param_4 << 0x1d;
        param_4 = param_4 >> 3;
      } while (param_3 != 0 || param_4 != 0);
    }
    else {
      local_14 = 0;
      local_20 = (undefined1 *)&local_274;
      FUN_1002747c(&local_274,local_24);
      uVar4 = local_270 + local_24;
      if ((uVar4 <= local_26c) &&
         (uVar1 = local_270, local_270 = uVar4, local_274 != (undefined1 *)0x0)) goto LAB_1002703d;
      pbVar5 = &bStack_6d + local_24;
      iVar3 = (int)&local_6c + local_24;
      do {
        *pbVar5 = (byte)param_3 & 7 | 0x30;
        param_3 = param_3 >> 3 | param_4 << 0x1d;
        param_4 = param_4 >> 3;
        pbVar5 = pbVar5 + -1;
      } while (param_3 != 0 || param_4 != 0);
      local_14 = 0;
      FUN_100253ad(local_2c,&local_6c,iVar3,&local_274);
    }
    local_14 = 0;
    break;
  case 6:
    if ((local_28 >> 0xd & 1) != 0) {
      uVar4 = (uint)((local_28 >> 0xc & 1) == 0) << 0xd | 0x4230;
      uVar1 = uVar4 << 8;
      if (param_5 == 0) {
        uVar1 = uVar4;
      }
      param_5 = (uVar1 | param_5) + 0x2000000;
    }
    uVar1 = param_3;
    uVar4 = param_4;
    local_24 = 0;
    do {
      uVar7 = local_24;
      uVar1 = uVar1 >> 1 | uVar4 << 0x1f;
      local_24 = uVar7 + 1;
      uVar4 = uVar4 >> 1;
    } while (uVar1 != 0 || uVar4 != 0);
    if (uVar7 < 500) {
      uVar1 = 0;
      local_270 = local_24;
      local_20 = (undefined1 *)&local_274;
LAB_10026fa6:
      pbVar5 = local_274 + local_24 + uVar1;
      do {
        pbVar5 = pbVar5 + -1;
        *pbVar5 = (byte)param_3 & 1 | 0x30;
        param_3 = param_3 >> 1 | param_4 << 0x1f;
        param_4 = param_4 >> 1;
      } while (param_3 != 0 || param_4 != 0);
    }
    else {
      local_14 = 0;
      local_20 = (undefined1 *)&local_274;
      FUN_1002747c(&local_274,local_24);
      uVar4 = local_270 + local_24;
      if ((uVar4 <= local_26c) &&
         (uVar1 = local_270, local_270 = uVar4, local_274 != (undefined1 *)0x0)) goto LAB_10026fa6;
      pbVar5 = &bStack_6d + local_24;
      iVar3 = (int)&local_6c + local_24;
      do {
        *pbVar5 = (byte)param_3 & 1 | 0x30;
        param_3 = param_3 >> 1 | param_4 << 0x1f;
        param_4 = param_4 >> 1;
        pbVar5 = pbVar5 + -1;
      } while (param_3 != 0 || param_4 != 0);
      local_14 = 0;
      FUN_100253ad(local_2c,&local_6c,iVar3,&local_274);
    }
    local_14 = 0;
    break;
  case 7:
    local_6c._0_2_ = CONCAT11((char)param_3,(local_28 & 7) == 1);
    local_20 = (undefined1 *)&local_274;
    FUN_100274cd(param_1,param_2,param_6,1,1,&local_6c);
    goto code_r0x100270fe;
  default:
    if (param_4 == 0) {
      uVar1 = 0x1f;
      if ((param_3 | 1) != 0) {
        for (; (param_3 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar1 = uVar1 ^ 0x1f | 0x20;
    }
    else {
      uVar1 = 0x1f;
      if (param_4 != 0) {
        for (; param_4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar1 = uVar1 ^ 0x1f;
    }
    local_24 = (uint)(byte)(&DAT_10290499)[uVar1 ^ 0x3f];
    local_24 = local_24 -
               (param_4 < *(uint *)(&DAT_102904e4 + local_24 * 8) ||
               param_4 - *(uint *)(&DAT_102904e4 + local_24 * 8) <
               (uint)(param_3 < *(uint *)(&DAT_102904e0 + local_24 * 8)));
    FUN_10025550(&local_6c,&local_274,param_3,param_4,local_24);
  }
  local_28 = param_5;
  iVar3 = FUN_1002732e(local_24);
  iVar3 = local_24 + iVar3 + (local_28 >> 0x18);
  local_6c = &param_5;
  local_68 = param_7;
  local_64 = &local_274;
  FUN_1002737b(param_1,param_2,param_6,iVar3,iVar3,&local_6c);
code_r0x100270fe:
  local_14 = 0xffffffff;
  if (local_274 != local_264) {
    thunk_FUN_10274120(local_274);
  }
  ExceptionList = local_1c;
  return param_1;
}

