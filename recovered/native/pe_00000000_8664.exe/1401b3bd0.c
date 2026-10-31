/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b3bd0 */

undefined4 FUN_1401b3bd0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *in_R9;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (in_R9 == (undefined4 *)0x0) {
    uVar1 = PTR_PTR_140f29798._0_4_;
    uVar3 = PTR_PTR_140f29798._4_4_;
    uVar4 = PTR_DAT_140f297a0._0_4_;
    uVar5 = PTR_DAT_140f297a0._4_4_;
    if (DAT_140f32750 != 0) goto LAB_1401b3c1b;
  }
  else {
    uVar1 = *in_R9;
    uVar3 = in_R9[1];
    uVar4 = in_R9[2];
    uVar5 = in_R9[3];
  }
  local_20 = '\x01';
  local_30 = uVar1;
  uStack_2c = uVar3;
  uStack_28 = uVar4;
  uStack_24 = uVar5;
LAB_1401b3c1b:
  uVar1 = FUN_1401b3c74();
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

