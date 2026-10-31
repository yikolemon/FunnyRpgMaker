/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000c86e */

longlong *
FUN_14000c86e(longlong *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,uint param_5)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_88 [93];
  byte local_2b;
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  puVar2 = &local_28;
  switch(param_5) {
  case 2:
    do {
      *(byte *)((longlong)puVar2 + -1) = (byte)param_4 & 1 | 0x30;
      puVar2 = (ulonglong *)((longlong)puVar2 + -1);
      param_4 = param_4 >> 1;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    uVar4 = (ulonglong)param_5;
    do {
      *(char *)((longlong)puVar2 + -1) = (char)(param_4 % uVar4) + '0';
      puVar2 = (ulonglong *)((longlong)puVar2 + -1);
      bVar5 = uVar4 <= param_4;
      param_4 = param_4 / uVar4;
    } while (bVar5);
    break;
  case 4:
    do {
      *(byte *)((longlong)puVar2 + -1) = (byte)param_4 & 3 | 0x30;
      puVar2 = (ulonglong *)((longlong)puVar2 + -1);
      param_4 = param_4 >> 2;
    } while (param_4 != 0);
    break;
  case 8:
    do {
      *(byte *)((longlong)puVar2 + -1) = (byte)param_4 & 7 | 0x30;
      puVar2 = (ulonglong *)((longlong)puVar2 + -1);
      param_4 = param_4 >> 3;
    } while (param_4 != 0);
    break;
  case 10:
    if (param_4 < 10) {
      local_2a[1] = (byte)param_4 | 0x30;
      puVar2 = (ulonglong *)(local_2a + 1);
    }
    else {
      do {
        uVar4 = param_4;
        puVar3 = puVar2;
        param_4 = uVar4 / 100;
        *(undefined2 *)((longlong)puVar3 + -2) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulonglong)(uint)((int)uVar4 + (int)param_4 * -100) * 2);
        puVar2 = (ulonglong *)((longlong)puVar3 + -2);
      } while (999 < uVar4);
      if (99 < uVar4) {
        *(byte *)((longlong)puVar3 + -3) = (byte)param_4 | 0x30;
        puVar2 = (ulonglong *)((longlong)puVar3 + -3);
      }
    }
    break;
  case 0x10:
    do {
      *(char *)((longlong)puVar2 + -1) = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)param_4 & 0xf]
      ;
      puVar2 = (ulonglong *)((longlong)puVar2 + -1);
      param_4 = param_4 >> 4;
    } while (param_4 != 0);
    break;
  default:
    if (param_5 == 0x20) {
      do {
        *(char *)((longlong)puVar2 + -1) =
             "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)param_4 & 0x1f];
        puVar2 = (ulonglong *)((longlong)puVar2 + -1);
        param_4 = param_4 >> 5;
      } while (param_4 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar4 = (ulonglong)(int)param_5;
    do {
      *(char *)((longlong)puVar2 + -1) = "0123456789abcdefghijklmnopqrstuvwxyz"[param_4 % uVar4];
      puVar2 = (ulonglong *)((longlong)puVar2 + -1);
      bVar5 = uVar4 <= param_4;
      param_4 = param_4 / uVar4;
    } while (bVar5);
  }
  uVar4 = (longlong)&local_28 - (longlong)puVar2;
  uVar1 = 0x84;
  if ((longlong)uVar4 <= param_3 - (longlong)param_2) {
    thunk_FUN_14000c12d(puVar2,uVar4,param_2);
    param_3 = (longlong)param_2 + uVar4;
    uVar1 = 0;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar1;
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

