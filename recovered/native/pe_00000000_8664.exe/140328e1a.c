/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140328e1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140328e1a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  lVar2 = DAT_14062a630;
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  *(longlong *)(DAT_14062a630 + 0x1310) = param_1;
  *(undefined4 *)(lVar2 + 0x1324) = param_2;
  FUN_1403280fd(param_3);
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)(lVar2 + 0x1348) = lVar1;
    *(longlong *)(lVar2 + 0x1350) = param_1;
    FUN_1403aa477(lVar1);
    if (*(longlong *)(lVar2 + 0x1608) != 0) {
      local_38 = *(undefined4 *)(lVar1 + 0x28);
      uStack_34 = *(undefined4 *)(lVar1 + 0x2c);
      uStack_30 = *(undefined4 *)(lVar1 + 0x30);
      uStack_2c = *(undefined4 *)(lVar1 + 0x34);
      FUN_1403a0d8e(*(undefined8 *)(*(longlong *)(lVar2 + 0x1608) + 800));
    }
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
}

