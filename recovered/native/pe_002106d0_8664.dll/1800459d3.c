/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800459d3 */

undefined8 FUN_1800459d3(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_97 [23];
  undefined1 local_80 [69];
  byte local_3b;
  undefined2 local_3a;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_b8;
  if ((longlong)param_3 < 0) {
    puVar4 = local_97;
    local_98 = 0x2d;
    param_3 = -param_3;
  }
  else {
    puVar4 = &local_98;
  }
  puVar5 = local_80;
  puVar3 = local_38;
  if (param_3 < 10) {
    local_3a._1_1_ = (byte)param_3 | 0x30;
    puVar3 = (undefined1 *)((longlong)&local_3a + 1);
  }
  else {
    do {
      puVar2 = puVar3;
      uVar1 = param_3;
      param_3 = uVar1 / 100;
      *(undefined2 *)(puVar2 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uint)((int)uVar1 + (int)param_3 * -100) * 2);
      puVar3 = puVar2 + -2;
    } while (999 < uVar1);
    if (99 < uVar1) {
      puVar2[-3] = (byte)param_3 | 0x30;
      puVar3 = puVar2 + -3;
    }
  }
  lVar6 = (longlong)local_38 - (longlong)puVar3;
  if (lVar6 <= (longlong)puVar5 - (longlong)puVar4) {
    thunk_FUN_180006ba5(puVar3,lVar6,puVar4);
    puVar5 = puVar4 + lVar6;
  }
  FUN_18004588f(param_1,&local_98,puVar5,param_2);
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_b8);
  }
  return param_1;
}

