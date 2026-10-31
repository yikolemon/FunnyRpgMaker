/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012a214 */

undefined8 FUN_14012a214(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_140354b80 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1401ca798._0_4_;
    uStack_2c = PTR_PTR_1401ca798._4_4_;
    uStack_28 = PTR_DAT_1401ca7a0._0_4_;
    uStack_24 = PTR_DAT_1401ca7a0._4_4_;
  }
  uVar1 = FUN_14012a35c();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_14010bc10(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_14010bc10(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

