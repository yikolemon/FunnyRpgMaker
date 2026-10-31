/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004fae2 */

longlong *
FUN_14004fae2(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  char cVar6;
  undefined4 uVar3;
  ulonglong uVar5;
  ulonglong *puVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 auStack_58 [45];
  undefined1 local_2b [2];
  undefined1 uStack_29;
  ulonglong local_28;
  ulonglong uVar4;
  
  uVar4 = param_4 & 0xffffffff;
  bVar1 = (byte)uVar4;
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  puVar7 = &local_28;
  switch(param_5) {
  case 2:
    do {
      *(byte *)((longlong)puVar7 + -1) = (byte)uVar4 & 1 | 0x30;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar1 = (byte)uVar4 >> 1;
      uVar4 = (ulonglong)bVar1;
    } while (bVar1 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = (ushort)uVar4 & 0xff;
      bVar9 = (byte)param_5;
      cVar6 = (char)(uVar2 % (ushort)bVar9);
      *(byte *)((longlong)puVar7 + -1) = cVar6 + 0x30;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar1 = (byte)uVar4;
      uVar4 = (ulonglong)CONCAT11(cVar6,(char)(uVar2 / bVar9));
    } while (bVar9 <= bVar1);
    break;
  case 4:
    do {
      *(byte *)((longlong)puVar7 + -1) = (byte)uVar4 & 3 | 0x30;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar1 = (byte)uVar4 >> 2;
      uVar4 = (ulonglong)bVar1;
    } while (bVar1 != 0);
    break;
  case 8:
    do {
      *(byte *)((longlong)puVar7 + -1) = (byte)uVar4 & 7 | 0x30;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar1 = (byte)uVar4 >> 3;
      uVar4 = (ulonglong)bVar1;
    } while (bVar1 != 0);
    break;
  case 10:
    if (bVar1 < 10) {
      puVar7 = (ulonglong *)&uStack_29;
      bVar9 = bVar1;
    }
    else {
      bVar9 = (byte)(((uint)param_4 & 0xff) * 0x29 >> 0xc);
      unique0x00023b00 =
           *(undefined2 *)(&DAT_1401c8c78 + (ulonglong)(byte)((char)param_4 + bVar9 * -100) * 2);
      if (bVar1 < 100) {
        puVar7 = (ulonglong *)(local_2b + 1);
        break;
      }
      puVar7 = (ulonglong *)local_2b;
    }
    *(byte *)puVar7 = bVar9 | 0x30;
    break;
  case 0x10:
    do {
      *(char *)((longlong)puVar7 + -1) = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)uVar4 & 0xf];
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      bVar1 = (byte)uVar4 >> 4;
      uVar4 = (ulonglong)bVar1;
    } while (bVar1 != 0);
    break;
  default:
    if (param_5 == 0x20) {
      do {
        *(char *)((longlong)puVar7 + -1) =
             "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)uVar4 & 0x1f];
        puVar7 = (ulonglong *)((longlong)puVar7 + -1);
        bVar1 = (byte)uVar4 >> 5;
        uVar4 = (ulonglong)bVar1;
      } while (bVar1 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      uVar5 = uVar4 & 0xff;
      uVar4 = (longlong)uVar5 / (longlong)param_5 & 0xffffffff;
      *(char *)((longlong)puVar7 + -1) =
           "0123456789abcdefghijklmnopqrstuvwxyz"[(longlong)uVar5 % (longlong)param_5 & 0xffffffff];
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
    } while ((char)uVar4 != '\0');
  }
  lVar8 = (longlong)&local_28 - (longlong)puVar7;
  uVar3 = 0x84;
  if (lVar8 <= param_3 - param_2) {
    thunk_FUN_14004a75e(puVar7,lVar8,param_2);
    param_3 = param_2 + lVar8;
    uVar3 = 0;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar3;
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
  }
  return param_1;
}

