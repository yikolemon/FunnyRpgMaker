/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140047a18 */

undefined8 *
FUN_140047a18(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             int param_5)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 in_XMM3 [16];
  undefined1 auStack_98 [32];
  int local_78;
  ulonglong local_70;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_98;
  uVar5 = in_XMM3._0_8_;
  if (uVar5 == 0) {
    if (param_5 == 1) {
      if ((longlong)param_3 - (longlong)param_2 < 5) {
LAB_140047b50:
        *param_1 = param_3;
        *(undefined4 *)(param_1 + 1) = 0x84;
        goto LAB_140047b5a;
      }
      *(undefined1 *)(param_2 + 1) = 0x30;
      *param_2 = 0x302b6530;
      puVar3 = (undefined1 *)((longlong)param_2 + 5);
    }
    else {
      if (param_2 == param_3) goto LAB_140047b50;
      *(undefined1 *)param_2 = 0x30;
      puVar3 = (undefined1 *)((longlong)param_2 + 1);
    }
    *param_1 = puVar3;
    *(undefined4 *)(param_1 + 1) = 0;
    goto LAB_140047b5a;
  }
  uVar4 = in_XMM3._4_4_;
  if (0x10c < uVar4 >> 0x16 && param_5 == 2) {
    local_78 = 0;
    FUN_140047bc6(param_1,param_2,param_3);
    goto LAB_140047b5a;
  }
  if ((uVar4 >> 0x14) - 0x434 < 0xffffffcb) {
LAB_140047abb:
    FUN_14004830a(&local_50,uVar5 & 0xfffffffffffff);
  }
  else {
    bVar1 = 0x33 - (char)(uVar4 >> 0x14);
    uVar2 = (uVar5 & 0xfffffffffffff) + 0x10000000000000;
    if ((uVar2 & ~(-1L << (bVar1 & 0x3f))) != 0) goto LAB_140047abb;
    uVar4 = 0xffffffff;
    uVar2 = uVar2 >> (bVar1 & 0x3f);
    do {
      local_50 = uVar2;
      uVar4 = uVar4 + 1;
      uVar2 = local_50 / 10;
    } while ((int)(local_50 / 10) * 10 == (int)local_50);
    local_48 = (ulonglong)uVar4;
  }
  local_78 = param_5;
  local_70 = uVar5;
  local_60 = local_50;
  local_58 = local_48;
  FUN_14004881f(param_1,param_2,param_3);
LAB_140047b5a:
  if (DAT_1401c9640 == (local_40 ^ (ulonglong)auStack_98)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_40 ^ (ulonglong)auStack_98);
}

