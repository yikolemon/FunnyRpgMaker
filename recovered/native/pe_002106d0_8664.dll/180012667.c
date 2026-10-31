/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180012667 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180012667(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  char local_138 [72];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  byte local_d8 [16];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  DWORD local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 ***local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  undefined4 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_98[0] = GetCurrentProcessId();
  FUN_1800c8ca5(local_138,0);
  local_c8 = L"{}@{}";
  local_c0 = 5;
  FUN_180012898(local_b8,&local_c8,local_138,local_98);
  FUN_1800010ec(local_138);
  FUN_1800c9080(local_68,local_b8);
  ppppuVar3 = local_68;
  if (0xf < local_50) {
    ppppuVar3 = (undefined8 ****)local_68[0];
  }
  local_138[0] = '\0';
  local_f0 = 0;
  local_e8 = _DAT_1802b0ca0;
  uStack_e4 = _UNK_1802b0ca4;
  uStack_e0 = _UNK_1802b0ca8;
  uStack_dc = _UNK_1802b0cac;
  FUN_180014db0(local_138,ppppuVar3,local_58);
  FUN_180014e38(local_138);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (local_138[0] == '\x01') {
    lVar2 = 0;
    do {
      bVar1 = local_d8[lVar2];
      *(char *)((longlong)&local_90 + lVar2 * 2) = "0123456789abcdef"[bVar1 >> 4];
      *(char *)((longlong)&local_90 + lVar2 * 2 + 1) = "0123456789abcdef"[bVar1 & 0xf];
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  local_48 = (undefined4 *)FUN_180239630(0x30);
  local_38 = 0x20;
  uStack_30 = 0x2f;
  local_48[4] = (undefined4)local_80;
  local_48[5] = local_80._4_4_;
  local_48[6] = (undefined4)uStack_78;
  local_48[7] = uStack_78._4_4_;
  *local_48 = (undefined4)local_90;
  local_48[1] = local_90._4_4_;
  local_48[2] = (undefined4)uStack_88;
  local_48[3] = uStack_88._4_4_;
  *(undefined1 *)(local_48 + 8) = 0;
  FUN_180012917(param_1,"RPGMAKER-",&local_48);
  FUN_180001ef2(&local_48);
  FUN_180001ef2(local_68);
  FUN_1800010ec(local_b8);
  return param_1;
}

