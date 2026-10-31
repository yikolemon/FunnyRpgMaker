/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180078baf */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180078baf(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_15c8 [32];
  byte abStack_15a8 [512];
  uint local_13a8 [1249];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_15c8;
  lVar6 = *(longlong *)(param_1 + 2);
  uVar3 = (param_1[4] - (int)lVar6) - 0x14;
  if (0x145 < uVar3) {
    uVar3 = 0x146;
  }
  param_1[8] = uVar3;
  bVar5 = *(byte *)(lVar6 + (ulonglong)*param_2);
  bVar1 = *(byte *)(lVar6 + (ulonglong)param_2[1]);
  bVar2 = *(byte *)(lVar6 + (ulonglong)param_2[2]);
  local_24 = 0xffffffff;
  uVar7 = 0x1571;
  lVar6 = 2;
  do {
    uVar3 = (((uint)(uVar7 >> 0x1e) ^ (uint)uVar7) * 0x6c078965 + (int)lVar6) - 1;
    uVar7 = (ulonglong)uVar3;
    local_13a8[lVar6] = uVar3;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x271);
  local_13a8[1] = (uint)bVar1 << 8 | (uint)bVar5 << 0x10 | (uint)bVar2;
  local_13a8[1] = local_13a8[1] << 0xd ^ local_13a8[1];
  local_13a8[1] = local_13a8[1] >> 0x11 ^ local_13a8[1];
  local_13a8[1] = local_13a8[1] << 5 ^ local_13a8[1];
  lVar6 = 2;
  uVar3 = local_13a8[1];
  do {
    uVar3 = ((uVar3 >> 0x1e ^ uVar3) * 0x6c078965 + (int)lVar6) - 1;
    local_13a8[lVar6] = uVar3;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x271);
  local_13a8[0] = 0x270;
  lVar6 = 0;
  do {
    uVar4 = FUN_180078f62(local_13a8);
    *(undefined4 *)(abStack_15a8 + lVar6) = uVar4;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x200);
  lVar6 = *(longlong *)(param_1 + 2);
  if (10 < (ulonglong)(*(longlong *)(param_1 + 4) - lVar6)) {
    uVar7 = 10;
    uVar3 = 0xb;
    do {
      *(byte *)(lVar6 + uVar7) =
           *(byte *)(lVar6 + uVar7) ^ abStack_15a8[(ulonglong)(uVar3 - 1 & 0x7f) * 4];
      uVar7 = (ulonglong)uVar3;
      lVar6 = *(longlong *)(param_1 + 2);
      uVar3 = uVar3 + 1;
    } while (uVar7 < (ulonglong)(*(longlong *)(param_1 + 4) - lVar6));
  }
  thunk_FUN_18000a68c(lVar6 + 0xb,lVar6 + 0xf,param_1);
  lVar6 = *(longlong *)(param_1 + 2);
  *(char *)(param_1 + 1) = (char)*param_1 * '\x03' + *(char *)(lVar6 + 7);
  bVar5 = *(byte *)((longlong)param_1 + 1) ^ *(byte *)((longlong)param_1 + 2);
  *(byte *)((longlong)param_1 + 5) = bVar5;
  *(byte *)((longlong)param_1 + 6) = *(byte *)(lVar6 + 7) ^ *(byte *)((longlong)param_1 + 3);
  *(byte *)((longlong)param_1 + 7) =
       (*(byte *)((longlong)param_1 + 2) - (char)*param_1) + *(char *)(lVar6 + 7);
  param_1[9] = (uint)bVar5;
  param_1[10] = (uint)bVar5;
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_15c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_15c8);
}

