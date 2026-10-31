/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000bdb9 */

undefined8 * FUN_14000bdb9(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  char local_68;
  char local_67 [23];
  char local_50 [37];
  byte local_2b;
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  if ((int)param_3 < 0) {
    pcVar5 = local_67;
    local_68 = '-';
    param_3 = -param_3;
  }
  else {
    pcVar5 = &local_68;
  }
  uVar7 = (ulonglong)param_3;
  pcVar6 = local_50;
  puVar4 = &local_28;
  if (param_3 < 10) {
    local_2a[1] = (byte)param_3 | 0x30;
    puVar4 = (ulonglong *)(local_2a + 1);
  }
  else {
    do {
      puVar3 = puVar4;
      uVar1 = (uint)uVar7;
      uVar2 = uVar7 / 100;
      *(undefined2 *)((longlong)puVar3 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uVar1 + (int)(uVar7 / 100) * -100) * 2);
      puVar4 = (ulonglong *)((longlong)puVar3 + -2);
      uVar7 = uVar2;
    } while (999 < uVar1);
    if (99 < uVar1) {
      *(byte *)((longlong)puVar3 + -3) = (byte)uVar2 | 0x30;
      puVar4 = (ulonglong *)((longlong)puVar3 + -3);
    }
  }
  uVar7 = (longlong)&local_28 - (longlong)puVar4;
  if ((longlong)uVar7 <= (longlong)pcVar6 - (longlong)pcVar5) {
    thunk_FUN_14000c12d(puVar4,uVar7,(undefined8 *)pcVar5);
    pcVar6 = pcVar5 + uVar7;
  }
  FUN_14000beb2(param_1,&local_68,pcVar6,param_2);
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

