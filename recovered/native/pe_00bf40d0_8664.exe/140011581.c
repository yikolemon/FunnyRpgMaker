/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140011581 */

longlong *
FUN_140011581(longlong *param_1,undefined8 *param_2,longlong param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auStack_58 [45];
  byte local_2b;
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  puVar3 = &local_28;
  switch(param_5) {
  case 2:
    do {
      *(byte *)((longlong)puVar3 + -1) = (byte)(param_4 & 0xffff) & 1 | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      param_4 = (param_4 & 0xffff) >> 1;
    } while (param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      *(char *)((longlong)puVar3 + -1) = (char)((param_4 & 0xffff) % (param_5 & 0xffff)) + '0';
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      uVar6 = (ushort)param_4;
      param_4 = (param_4 & 0xffff) / (param_5 & 0xffff);
    } while ((ushort)param_5 <= uVar6);
    break;
  case 4:
    do {
      *(byte *)((longlong)puVar3 + -1) = (byte)(param_4 & 0xffff) & 3 | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      param_4 = (param_4 & 0xffff) >> 2;
    } while (param_4 != 0);
    break;
  case 8:
    do {
      *(byte *)((longlong)puVar3 + -1) = (byte)(param_4 & 0xffff) & 7 | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      param_4 = (param_4 & 0xffff) >> 3;
    } while (param_4 != 0);
    break;
  case 10:
    if ((ushort)param_4 < 10) {
      local_2a[1] = (byte)param_4 | 0x30;
      puVar3 = (ulonglong *)(local_2a + 1);
    }
    else {
      do {
        uVar7 = param_4;
        puVar4 = puVar3;
        param_4 = (uVar7 & 0xffff) / 100;
        *(undefined2 *)((longlong)puVar4 + -2) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulonglong)(uVar7 + param_4 * -100 & 0xffff) * 2);
        puVar3 = (ulonglong *)((longlong)puVar4 + -2);
      } while (999 < (uVar7 & 0xffff));
      if (99 < (ushort)uVar7) {
        *(byte *)((longlong)puVar4 + -3) = (byte)param_4 | 0x30;
        puVar3 = (ulonglong *)((longlong)puVar4 + -3);
      }
    }
    break;
  case 0x10:
    do {
      *(char *)((longlong)puVar3 + -1) = "0123456789abcdefghijklmnopqrstuvwxyz"[param_4 & 0xf];
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      param_4 = (param_4 & 0xffff) >> 4;
    } while (param_4 != 0);
    break;
  default:
    if (param_5 == 0x20) {
      do {
        *(char *)((longlong)puVar3 + -1) = "0123456789abcdefghijklmnopqrstuvwxyz"[param_4 & 0x1f];
        puVar3 = (ulonglong *)((longlong)puVar3 + -1);
        param_4 = (param_4 & 0xffff) >> 5;
      } while (param_4 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      lVar1 = (longlong)(ulonglong)(param_4 & 0xffff) / (longlong)(int)param_5;
      *(char *)((longlong)puVar3 + -1) =
           "0123456789abcdefghijklmnopqrstuvwxyz"
           [(longlong)(ulonglong)(param_4 & 0xffff) % (longlong)(int)param_5 & 0xffffffff];
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      param_4 = (uint)lVar1;
    } while ((short)lVar1 != 0);
  }
  uVar5 = (longlong)&local_28 - (longlong)puVar3;
  uVar2 = 0x84;
  if ((longlong)uVar5 <= param_3 - (longlong)param_2) {
    thunk_FUN_14000c12d(puVar3,uVar5,param_2);
    param_3 = (longlong)param_2 + uVar5;
    uVar2 = 0;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar2;
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return param_1;
}

