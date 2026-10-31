/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bf544 */

undefined4 FUN_1401bf544(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 local_50;
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
  local_20 = DAT_140f32750 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_140f29798._0_4_;
    uStack_2c = PTR_PTR_140f29798._4_4_;
    uStack_28 = PTR_DAT_140f297a0._0_4_;
    uStack_24 = PTR_DAT_140f297a0._4_4_;
  }
  local_50 = 0;
  local_58 = param_1;
  uVar1 = FUN_1401a9948(local_48,&local_58,10,1);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1401938e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1401938e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

