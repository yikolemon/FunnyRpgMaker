/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180045796 */

undefined8 FUN_180045796(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_67 [23];
  undefined1 local_50 [37];
  byte local_2b;
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_88;
  if ((int)param_3 < 0) {
    puVar4 = local_67;
    local_68 = 0x2d;
    param_3 = -param_3;
  }
  else {
    puVar4 = &local_68;
  }
  puVar5 = local_50;
  puVar3 = &local_28;
  if (param_3 < 10) {
    local_2a[1] = (byte)param_3 | 0x30;
    puVar3 = (ulonglong *)(local_2a + 1);
  }
  else {
    do {
      uVar1 = param_3;
      puVar2 = puVar3;
      *(undefined2 *)((longlong)puVar2 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uVar1 % 100) * 2);
      puVar3 = (ulonglong *)((longlong)puVar2 + -2);
      param_3 = uVar1 / 100;
    } while (999 < uVar1);
    if (99 < uVar1) {
      *(byte *)((longlong)puVar2 + -3) = (byte)(uVar1 / 100) | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar2 + -3);
    }
  }
  lVar6 = (longlong)&local_28 - (longlong)puVar3;
  if (lVar6 <= (longlong)puVar5 - (longlong)puVar4) {
    thunk_FUN_180006ba5(puVar3,lVar6,puVar4);
    puVar5 = puVar4 + lVar6;
  }
  FUN_18004588f(param_1,&local_68,puVar5,param_2);
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

