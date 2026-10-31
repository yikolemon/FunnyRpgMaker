/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000c42b */

undefined8 * FUN_14000c42b(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  char local_98;
  char local_97 [23];
  char local_80 [69];
  byte local_3b;
  undefined2 local_3a;
  char local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_b8;
  if ((longlong)param_3 < 0) {
    pcVar3 = local_97;
    local_98 = '-';
    param_3 = -param_3;
  }
  else {
    pcVar3 = &local_98;
  }
  pcVar4 = local_80;
  pcVar2 = local_38;
  if (param_3 < 10) {
    local_3a._1_1_ = (byte)param_3 | 0x30;
    pcVar2 = (char *)((longlong)&local_3a + 1);
  }
  else {
    do {
      pcVar1 = pcVar2;
      uVar5 = param_3;
      param_3 = uVar5 / 100;
      *(undefined2 *)(pcVar1 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uint)((int)uVar5 + (int)param_3 * -100) * 2);
      pcVar2 = pcVar1 + -2;
    } while (999 < uVar5);
    if (99 < uVar5) {
      pcVar1[-3] = (byte)param_3 | 0x30;
      pcVar2 = pcVar1 + -3;
    }
  }
  uVar5 = (longlong)local_38 - (longlong)pcVar2;
  if ((longlong)uVar5 <= (longlong)pcVar4 - (longlong)pcVar3) {
    thunk_FUN_14000c12d((undefined8 *)pcVar2,uVar5,(undefined8 *)pcVar3);
    pcVar4 = pcVar3 + uVar5;
  }
  FUN_14000beb2(param_1,&local_98,pcVar4,param_2);
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_b8);
  }
  return param_1;
}

