/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000698c */

undefined8 *
FUN_18000698c(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
             uint param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [61];
  byte local_2b;
  undefined2 local_2a;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      goto LAB_180006a31;
    }
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    param_4 = (ulonglong)(uint)-(int)param_4;
  }
  puVar3 = local_28;
  switch(param_5) {
  case 2:
    do {
      puVar3[-1] = (byte)param_4 & 1 | 0x30;
      puVar3 = puVar3 + -1;
      uVar6 = (uint)param_4 >> 1;
      param_4 = (ulonglong)uVar6;
    } while (uVar6 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar6 = (uint)param_4;
      uVar2 = param_4 & 0xffffffff;
      param_4 = uVar2 / param_5;
      puVar3[-1] = (char)(uVar2 % (ulonglong)param_5) + '0';
      puVar3 = puVar3 + -1;
    } while (param_5 <= uVar6);
    break;
  case 4:
    do {
      puVar3[-1] = (byte)param_4 & 3 | 0x30;
      puVar3 = puVar3 + -1;
      uVar6 = (uint)param_4 >> 2;
      param_4 = (ulonglong)uVar6;
    } while (uVar6 != 0);
    break;
  case 8:
    do {
      puVar3[-1] = (byte)param_4 & 7 | 0x30;
      puVar3 = puVar3 + -1;
      uVar6 = (uint)param_4 >> 3;
      param_4 = (ulonglong)uVar6;
    } while (uVar6 != 0);
    break;
  case 10:
    if ((uint)param_4 < 10) {
      local_2a._1_1_ = (byte)param_4 | 0x30;
      puVar3 = (undefined1 *)((longlong)&local_2a + 1);
    }
    else {
      do {
        puVar4 = puVar3;
        uVar6 = (uint)param_4;
        uVar2 = param_4 & 0xffffffff;
        param_4 = uVar2 / 100;
        *(undefined2 *)(puVar4 + -2) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulonglong)(uVar6 + (int)(uVar2 / 100) * -100) * 2);
        puVar3 = puVar4 + -2;
      } while (999 < uVar6);
      if (99 < uVar6) {
        puVar4[-3] = (byte)param_4 | 0x30;
        puVar3 = puVar4 + -3;
      }
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
switchD_1800069e7_caseD_b:
    do {
      uVar6 = (uint)param_4;
      uVar2 = param_4 & 0xffffffff;
      param_4 = uVar2 / param_5;
      puVar3[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar2 % (ulonglong)param_5];
      puVar3 = puVar3 + -1;
    } while (param_5 <= uVar6);
    break;
  case 0x10:
    do {
      puVar3[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)param_4 & 0xf];
      puVar3 = puVar3 + -1;
      uVar6 = (uint)param_4 >> 4;
      param_4 = (ulonglong)uVar6;
    } while (uVar6 != 0);
    break;
  default:
    if (param_5 != 0x20) goto switchD_1800069e7_caseD_b;
    do {
      puVar3[-1] = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)param_4 & 0x1f];
      puVar3 = puVar3 + -1;
      uVar6 = (uint)param_4 >> 5;
      param_4 = (ulonglong)uVar6;
    } while (uVar6 != 0);
  }
  lVar5 = (longlong)local_28 - (longlong)puVar3;
  uVar1 = 0x84;
  if (lVar5 <= (longlong)param_3 - (longlong)param_2) {
    thunk_FUN_180006ba5(puVar3,lVar5,param_2);
    param_3 = param_2 + lVar5;
    uVar1 = 0;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar1;
LAB_180006a31:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

