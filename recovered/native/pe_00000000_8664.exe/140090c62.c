/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090c62 */

void FUN_140090c62(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  lVar2 = DAT_140f2a910;
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  *(longlong *)(DAT_140f2a910 + 0x1310) = param_1;
  *(undefined4 *)(lVar2 + 0x1324) = param_2;
  FUN_14008ff45(param_3);
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar2 + 0x1348) = lVar1;
    *(longlong *)(lVar2 + 0x1350) = param_1;
    FUN_1400e451b(lVar1);
    if (*(longlong *)(lVar2 + 0x1608) != 0) {
      local_38 = *(undefined4 *)(lVar1 + 0x28);
      uStack_34 = *(undefined4 *)(lVar1 + 0x2c);
      uStack_30 = *(undefined4 *)(lVar1 + 0x30);
      uStack_2c = *(undefined4 *)(lVar1 + 0x34);
      FUN_1400dae32(*(undefined8 *)(*(longlong *)(lVar2 + 0x1608) + 800));
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

