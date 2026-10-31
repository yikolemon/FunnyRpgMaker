/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180006bd7 */

undefined8 FUN_180006bd7(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  undefined1 local_50 [37];
  byte local_2b;
  undefined2 local_2a;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_88;
  puVar2 = local_28;
  if ((uint)param_3 < 10) {
    local_2a._1_1_ = (byte)param_3 | 0x30;
    puVar2 = (undefined1 *)((longlong)&local_2a + 1);
  }
  else {
    do {
      puVar1 = puVar2;
      uVar4 = (uint)param_3;
      uVar5 = param_3 & 0xffffffff;
      param_3 = uVar5 / 100;
      *(undefined2 *)(puVar1 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uVar4 + (int)(uVar5 / 100) * -100) * 2);
      puVar2 = puVar1 + -2;
    } while (999 < uVar4);
    if (99 < uVar4) {
      puVar1[-3] = (byte)param_3 | 0x30;
      puVar2 = puVar1 + -3;
    }
  }
  lVar3 = (longlong)local_28 - (longlong)puVar2;
  if (lVar3 < 0x19) {
    puStack_90 = (undefined *)0x180006c74;
    thunk_FUN_180006ba5(puVar2,lVar3,local_68);
    puVar2 = local_68 + lVar3;
  }
  else {
    puVar2 = local_50;
  }
  puStack_90 = (undefined *)0x180006c8c;
  FUN_18000692b(param_1,local_68,puVar2,param_2);
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    puStack_90 = &UNK_180006cb8;
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

