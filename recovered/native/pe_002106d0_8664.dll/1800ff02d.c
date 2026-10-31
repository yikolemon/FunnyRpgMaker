/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff02d */

undefined8 thunk_FUN_180286a64(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong alStack_48 [2];
  undefined1 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char cStack_20;
  undefined4 uStack_1c;
  char cStack_18;
  undefined4 uStack_14;
  char cStack_10;
  
  alStack_48[0] = 0;
  cStack_20 = DAT_18042116c == 0;
  uStack_38 = 0;
  cStack_18 = '\0';
  cStack_10 = '\0';
  if ((bool)cStack_20) {
    uStack_30 = PTR_PTR_180415ff8._0_4_;
    uStack_2c = PTR_PTR_180415ff8._4_4_;
    uStack_28 = PTR_DAT_180416000._0_4_;
    uStack_24 = PTR_DAT_180416000._4_4_;
  }
  uVar1 = FUN_180286d1c();
  if (cStack_20 == '\x02') {
    *(uint *)(alStack_48[0] + 0x3a8) = *(uint *)(alStack_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (cStack_18 != '\0') {
    lVar2 = FUN_180272d50(alStack_48);
    *(undefined4 *)(lVar2 + 0x20) = uStack_1c;
  }
  if (cStack_10 != '\0') {
    lVar2 = FUN_180272d50(alStack_48);
    *(undefined4 *)(lVar2 + 0x24) = uStack_14;
  }
  return uVar1;
}

