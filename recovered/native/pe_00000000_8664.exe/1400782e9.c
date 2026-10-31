/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400782e9 */

undefined8 thunk_FUN_1401a4ca4(void)

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
  cStack_20 = DAT_140f32750 == 0;
  uStack_38 = 0;
  cStack_18 = '\0';
  cStack_10 = '\0';
  if ((bool)cStack_20) {
    uStack_30 = PTR_PTR_140f29798._0_4_;
    uStack_2c = PTR_PTR_140f29798._4_4_;
    uStack_28 = PTR_DAT_140f297a0._0_4_;
    uStack_24 = PTR_DAT_140f297a0._4_4_;
  }
  uVar1 = FUN_1401a4f5c();
  if (cStack_20 == '\x02') {
    *(uint *)(alStack_48[0] + 0x3a8) = *(uint *)(alStack_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (cStack_18 != '\0') {
    lVar2 = FUN_1401938e0(alStack_48);
    *(undefined4 *)(lVar2 + 0x20) = uStack_1c;
  }
  if (cStack_10 != '\0') {
    lVar2 = FUN_1401938e0(alStack_48);
    *(undefined4 *)(lVar2 + 0x24) = uStack_14;
  }
  return uVar1;
}

