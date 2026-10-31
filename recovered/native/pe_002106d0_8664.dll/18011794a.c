/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011794a */

void FUN_18011794a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  lVar2 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  *(longlong *)(DAT_180419160 + 0x1310) = param_1;
  *(undefined4 *)(lVar2 + 0x1324) = param_2;
  FUN_180116c2d(param_3);
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar2 + 0x1348) = lVar1;
    *(longlong *)(lVar2 + 0x1350) = param_1;
    FUN_180198fa7(lVar1);
    if (*(longlong *)(lVar2 + 0x1608) != 0) {
      local_38 = *(undefined4 *)(lVar1 + 0x28);
      uStack_34 = *(undefined4 *)(lVar1 + 0x2c);
      uStack_30 = *(undefined4 *)(lVar1 + 0x30);
      uStack_2c = *(undefined4 *)(lVar1 + 0x34);
      FUN_18018f8be(*(undefined8 *)(*(longlong *)(lVar2 + 0x1608) + 800));
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

