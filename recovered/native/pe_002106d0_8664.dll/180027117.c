/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180027117 */

undefined8
FUN_180027117(undefined8 param_1,undefined8 param_2,ulonglong param_3,uint param_4,uint *param_5,
             undefined8 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  code *local_298;
  undefined1 local_290 [504];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 **local_88;
  undefined1 local_50 [12];
  uint local_44 [3];
  
  local_44[1] = 0xfffffffe;
  local_44[2] = 0xffffffff;
  local_2b0 = local_290;
  local_2a8 = 0;
  local_298 = FUN_18002792e;
  local_2a0 = 500;
  uVar8 = *param_5;
  local_44[0] = param_4;
  switch(uVar8 & 7) {
  case 4:
    if ((uVar8 >> 0xd & 1) != 0) {
      uVar3 = (uint)((uVar8 >> 0xc & 1) == 0) << 0xd | 0x5830;
      uVar4 = uVar3 << 8;
      if (param_4 == 0) {
        uVar4 = uVar3;
      }
      local_44[0] = (uVar4 | param_4) + 0x2000000;
    }
    uVar10 = param_3;
    uVar12 = 0;
    do {
      uVar11 = uVar12;
      uVar10 = uVar10 >> 4;
      uVar12 = uVar11 + 1;
    } while (uVar10 != 0);
    if ((uint)uVar11 < 500) {
      uVar10 = 0;
      local_2a8 = uVar12;
    }
    else {
      FUN_18002792e(&local_2b0,uVar12);
      uVar1 = local_2a8 + uVar12;
      if ((local_2a0 < uVar1) ||
         (uVar10 = local_2a8, local_2a8 = uVar1, local_2b0 == (undefined1 *)0x0)) {
        pcVar6 = (char *)((longlong)&local_98 + uVar11);
        pcVar9 = "0123456789ABCDEF";
        if ((uVar8 >> 0xc & 1) == 0) {
          pcVar9 = "0123456789abcdef";
        }
        do {
          *pcVar6 = pcVar9[(uint)param_3 & 0xf];
          param_3 = param_3 >> 4;
          pcVar6 = pcVar6 + -1;
        } while (param_3 != 0);
        FUN_180025857(local_50,&local_98,(longlong)&local_98 + uVar11 + 1,&local_2b0);
        break;
      }
    }
    pcVar6 = "0123456789ABCDEF";
    if ((uVar8 >> 0xc & 1) == 0) {
      pcVar6 = "0123456789abcdef";
    }
    pcVar9 = local_2b0 + uVar12 + uVar10;
    do {
      pcVar9 = pcVar9 + -1;
      *pcVar9 = pcVar6[(uint)param_3 & 0xf];
      param_3 = param_3 >> 4;
    } while (param_3 != 0);
    break;
  case 5:
    uVar10 = param_3;
    uVar12 = 0;
    do {
      uVar11 = uVar12;
      uVar10 = uVar10 >> 3;
      uVar12 = uVar11 + 1;
    } while (uVar10 != 0);
    if ((((uVar8 >> 0xd & 1) != 0) && (param_3 != 0)) && ((int)param_5[3] <= (int)uVar12)) {
      uVar8 = 0x3000;
      if (param_4 == 0) {
        uVar8 = 0x30;
      }
      local_44[0] = (uVar8 | param_4) + 0x1000000;
    }
    if ((uint)uVar11 < 500) {
      uVar10 = 0;
      local_2a8 = uVar12;
    }
    else {
      FUN_18002792e(&local_2b0,uVar12);
      uVar1 = local_2a8 + uVar12;
      if ((local_2a0 < uVar1) ||
         (uVar10 = local_2a8, local_2a8 = uVar1, local_2b0 == (undefined1 *)0x0)) {
        pbVar7 = (byte *)((longlong)&local_98 + uVar11);
        do {
          *pbVar7 = (byte)param_3 & 7 | 0x30;
          param_3 = param_3 >> 3;
          pbVar7 = pbVar7 + -1;
        } while (param_3 != 0);
        FUN_180025857(local_50,&local_98,(longlong)&local_98 + uVar11 + 1,&local_2b0);
        break;
      }
    }
    pbVar7 = local_2b0 + uVar12 + uVar10;
    do {
      pbVar7 = pbVar7 + -1;
      *pbVar7 = (byte)param_3 & 7 | 0x30;
      param_3 = param_3 >> 3;
    } while (param_3 != 0);
    break;
  case 6:
    if ((uVar8 >> 0xd & 1) != 0) {
      uVar4 = (uint)((uVar8 >> 0xc & 1) == 0) << 0xd | 0x4230;
      uVar8 = uVar4 << 8;
      if (param_4 == 0) {
        uVar8 = uVar4;
      }
      local_44[0] = (uVar8 | param_4) + 0x2000000;
    }
    uVar10 = param_3;
    uVar12 = 0;
    do {
      uVar11 = uVar12;
      uVar10 = uVar10 >> 1;
      uVar12 = uVar11 + 1;
    } while (uVar10 != 0);
    if ((uint)uVar11 < 500) {
      uVar10 = 0;
      local_2a8 = uVar12;
    }
    else {
      FUN_18002792e(&local_2b0,uVar12);
      uVar1 = local_2a8 + uVar12;
      if ((local_2a0 < uVar1) ||
         (uVar10 = local_2a8, local_2a8 = uVar1, local_2b0 == (undefined1 *)0x0)) {
        pbVar7 = (byte *)((longlong)&local_98 + uVar11);
        do {
          *pbVar7 = (byte)param_3 & 1 | 0x30;
          param_3 = param_3 >> 1;
          pbVar7 = pbVar7 + -1;
        } while (param_3 != 0);
        FUN_180025857(local_50,&local_98,(longlong)&local_98 + uVar11 + 1,&local_2b0);
        break;
      }
    }
    pbVar7 = local_2b0 + uVar12 + uVar10;
    do {
      pbVar7 = pbVar7 + -1;
      *pbVar7 = (byte)param_3 & 1 | 0x30;
      param_3 = param_3 >> 1;
    } while (param_3 != 0);
    break;
  case 7:
    local_98._0_2_ = CONCAT11((char)param_3,(uVar8 & 7) == 1);
    FUN_18002799d(param_1,param_2,param_5,1,1,&local_98);
    goto code_r0x000180027581;
  default:
    lVar2 = 0x3f;
    if ((param_3 | 1) != 0) {
      for (; (param_3 | 1) >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar12 = (ulonglong)
             ((uint)(byte)(&DAT_1802b1db0)[lVar2] -
             (uint)(param_3 <
                   *(ulonglong *)(&DAT_1802b1df0 + (ulonglong)(byte)(&DAT_1802b1db0)[lVar2] * 8)));
    FUN_180025a04(&local_98,&local_2b0,param_3,uVar12);
  }
  uVar8 = local_44[0];
  iVar5 = FUN_18002778a(param_6,uVar12 & 0xffffffff);
  iVar5 = (int)uVar12 + iVar5 + (uVar8 >> 0x18);
  local_98 = local_44;
  local_90 = param_6;
  local_88 = &local_2b0;
  FUN_1800277d8(param_1,param_2,param_5,iVar5,iVar5,&local_98);
code_r0x000180027581:
  if (local_2b0 != local_290) {
    thunk_FUN_180290e40();
  }
  return param_1;
}

