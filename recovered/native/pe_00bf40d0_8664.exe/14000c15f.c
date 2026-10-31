/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000c15f */

undefined8 * FUN_14000c15f(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  char *pcVar5;
  undefined *puStack_90;
  undefined1 auStack_88 [32];
  char local_68 [24];
  char local_50 [37];
  byte local_2b;
  undefined1 local_2a [2];
  ulonglong local_28 [2];
  
  local_28[1] = DAT_14012ea80 ^ (ulonglong)auStack_88;
  puVar2 = local_28;
  if ((uint)param_3 < 10) {
    local_2a[1] = (byte)param_3 | 0x30;
    puVar2 = (ulonglong *)(local_2a + 1);
  }
  else {
    do {
      puVar1 = puVar2;
      uVar4 = (uint)param_3;
      uVar3 = param_3 & 0xffffffff;
      param_3 = uVar3 / 100;
      *(undefined2 *)((longlong)puVar1 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uVar4 + (int)(uVar3 / 100) * -100) * 2);
      puVar2 = (ulonglong *)((longlong)puVar1 + -2);
    } while (999 < uVar4);
    if (99 < uVar4) {
      *(byte *)((longlong)puVar1 + -3) = (byte)param_3 | 0x30;
      puVar2 = (ulonglong *)((longlong)puVar1 + -3);
    }
  }
  uVar3 = (longlong)local_28 - (longlong)puVar2;
  if ((longlong)uVar3 < 0x19) {
    puStack_90 = (undefined *)0x14000c1fc;
    thunk_FUN_14000c12d(puVar2,uVar3,(undefined8 *)local_68);
    pcVar5 = local_68 + uVar3;
  }
  else {
    pcVar5 = local_50;
  }
  puStack_90 = (undefined *)0x14000c214;
  FUN_14000beb2(param_1,local_68,pcVar5,param_2);
  if (DAT_14012ea80 != (local_28[1] ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    puStack_90 = &UNK_14000c240;
    FUN_140086440(local_28[1] ^ (ulonglong)auStack_88);
  }
  return param_1;
}

