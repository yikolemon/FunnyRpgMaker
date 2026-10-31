/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800071e5 */

undefined8 FUN_1800071e5(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [69];
  byte local_2b;
  undefined2 local_2a;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_a8;
  puVar2 = local_28;
  if (param_3 < 10) {
    local_2a._1_1_ = (byte)param_3 | 0x30;
    puVar2 = (undefined1 *)((longlong)&local_2a + 1);
  }
  else {
    do {
      uVar4 = param_3;
      puVar1 = puVar2;
      param_3 = uVar4 / 100;
      *(undefined2 *)(puVar1 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uint)((int)uVar4 + (int)param_3 * -100) * 2);
      puVar2 = puVar1 + -2;
    } while (999 < uVar4);
    if (99 < uVar4) {
      puVar1[-3] = (byte)param_3 | 0x30;
      puVar2 = puVar1 + -3;
    }
  }
  lVar3 = (longlong)local_28 - (longlong)puVar2;
  if (lVar3 < 0x19) {
    puStack_b0 = (undefined *)0x180007298;
    thunk_FUN_180006ba5(puVar2,lVar3,local_88);
    puVar2 = local_88 + lVar3;
  }
  else {
    puVar2 = local_70;
  }
  puStack_b0 = (undefined *)0x1800072b0;
  FUN_18000692b(param_1,local_88,puVar2,param_2);
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    puStack_b0 = &UNK_1800072e5;
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_a8);
  }
  return param_1;
}

