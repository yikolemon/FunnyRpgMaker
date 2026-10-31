/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180078d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180078d80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_f8;
  uVar5 = *(uint *)(param_1 + 4);
  uVar1 = *(undefined1 *)(param_1 + 4);
  auVar2[0xc] = (char)(uVar5 >> 0x18);
  auVar2._0_12_ = ZEXT712(0);
  auVar4[1] = 0;
  auVar4[0] = (byte)(uVar5 >> 0x10);
  auVar4._2_3_ = auVar2._10_3_;
  auVar4._5_8_ = 0;
  auVar3[5] = 0;
  auVar3[4] = (byte)(uVar5 >> 8);
  auVar3._6_7_ = SUB137(auVar4 << 0x40,6);
  auVar3._0_4_ = uVar5 & 0xff;
  *param_2 = auVar3._0_8_;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_180289908(uVar1);
  lVar6 = 0xc;
  do {
    FUN_180079135(param_2,(longlong)param_2 + lVar6);
    lVar6 = lVar6 + 0x400;
  } while (lVar6 != 0x800c);
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_98._0_4_ = 0;
  do {
    local_d8 = local_68;
    FUN_1800798b8(param_2,*(byte *)(param_1 + 7) + (uint)local_98,
                  *(byte *)(param_1 + 6) - (uint)local_98,&local_98);
    local_98._0_4_ = (uint)local_98 + 1;
  } while ((uint)local_98 < 0x30);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  uStack_90 = _UNK_1802b7c08;
  local_98 = _DAT_1802b7c00;
  uStack_80 = _UNK_1802b7c18;
  local_88 = _DAT_1802b7c10;
  uStack_70 = _UNK_1802b7c28;
  local_78 = _DAT_1802b7c20;
  FUN_180289908(*(byte *)(param_1 + 6) ^ *(byte *)(param_1 + 5));
  lVar6 = 0;
  do {
    uVar5 = FUN_180289920();
    uVar1 = *(undefined1 *)((longlong)&local_98 + lVar6);
    *(undefined1 *)((longlong)&local_98 + lVar6) =
         *(undefined1 *)((longlong)&local_98 + (ulonglong)(uVar5 % 0x30));
    *(undefined1 *)((longlong)&local_98 + (ulonglong)(uVar5 % 0x30)) = uVar1;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x30);
  lVar6 = 0;
  do {
    local_c8[lVar6] = local_68[*(byte *)((longlong)&local_98 + lVar6)];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x30);
  thunk_FUN_18000a68c(local_c8,local_b8,param_3);
  thunk_FUN_18000a68c(local_b8,local_a8,param_4);
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_f8);
}

