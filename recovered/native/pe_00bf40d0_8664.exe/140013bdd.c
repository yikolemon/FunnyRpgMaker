/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140013bdd */

longlong *
FUN_140013bdd(longlong *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  char cVar5;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong *puVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined1 auStack_58 [45];
  undefined1 local_2b [2];
  undefined1 uStack_29;
  ulonglong local_28;
  
  uVar7 = param_4 & 0xffffffff;
  bVar1 = (byte)uVar7;
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  puVar6 = &local_28;
  switch(param_5) {
  case 2:
    do {
      *(byte *)((longlong)puVar6 + -1) = (byte)uVar7 & 1 | 0x30;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      bVar1 = (byte)uVar7 >> 1;
      uVar7 = (ulonglong)bVar1;
    } while (bVar1 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = (ushort)uVar7 & 0xff;
      bVar8 = (byte)param_5;
      cVar5 = (char)(uVar2 % (ushort)bVar8);
      *(byte *)((longlong)puVar6 + -1) = cVar5 + 0x30;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      bVar1 = (byte)uVar7;
      uVar7 = (ulonglong)CONCAT11(cVar5,(char)(uVar2 / bVar8));
    } while (bVar8 <= bVar1);
    break;
  case 4:
    do {
      *(byte *)((longlong)puVar6 + -1) = (byte)uVar7 & 3 | 0x30;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      bVar1 = (byte)uVar7 >> 2;
      uVar7 = (ulonglong)bVar1;
    } while (bVar1 != 0);
    break;
  case 8:
    do {
      *(byte *)((longlong)puVar6 + -1) = (byte)uVar7 & 7 | 0x30;
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      bVar1 = (byte)uVar7 >> 3;
      uVar7 = (ulonglong)bVar1;
    } while (bVar1 != 0);
    break;
  case 10:
    if (bVar1 < 10) {
      puVar6 = (ulonglong *)&uStack_29;
      bVar8 = bVar1;
    }
    else {
      bVar8 = (byte)(((uint)param_4 & 0xff) * 0x29 >> 0xc);
      unique0x00023b00 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(byte)((char)param_4 + bVar8 * -100) * 2);
      if (bVar1 < 100) {
        puVar6 = (ulonglong *)(local_2b + 1);
        break;
      }
      puVar6 = (ulonglong *)local_2b;
    }
    *(byte *)puVar6 = bVar8 | 0x30;
    break;
  case 0x10:
    do {
      *(char *)((longlong)puVar6 + -1) = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)uVar7 & 0xf];
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
      bVar1 = (byte)uVar7 >> 4;
      uVar7 = (ulonglong)bVar1;
    } while (bVar1 != 0);
    break;
  default:
    if (param_5 == 0x20) {
      do {
        *(char *)((longlong)puVar6 + -1) =
             "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)uVar7 & 0x1f];
        puVar6 = (ulonglong *)((longlong)puVar6 + -1);
        bVar1 = (byte)uVar7 >> 5;
        uVar7 = (ulonglong)bVar1;
      } while (bVar1 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      uVar4 = uVar7 & 0xff;
      uVar7 = (longlong)uVar4 / (longlong)param_5 & 0xffffffff;
      *(char *)((longlong)puVar6 + -1) =
           "0123456789abcdefghijklmnopqrstuvwxyz"[(longlong)uVar4 % (longlong)param_5 & 0xffffffff];
      puVar6 = (ulonglong *)((longlong)puVar6 + -1);
    } while ((char)uVar7 != '\0');
  }
  uVar7 = (longlong)&local_28 - (longlong)puVar6;
  uVar3 = 0x84;
  if ((longlong)uVar7 <= param_3 - (longlong)param_2) {
    thunk_FUN_14000c12d(puVar6,uVar7,param_2);
    param_3 = (longlong)param_2 + uVar7;
    uVar3 = 0;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar3;
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return param_1;
}

