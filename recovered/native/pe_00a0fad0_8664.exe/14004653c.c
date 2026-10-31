/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004653c */

longlong *
FUN_14004653c(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,uint param_5)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_88 [93];
  byte local_2b;
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_88;
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
    uVar5 = (ulonglong)param_5;
    do {
      *(char *)((longlong)puVar2 + -1) = (char)(param_4 % uVar5) + '0';
      puVar2 = (ulonglong *)((longlong)puVar2 + -1);
      bVar6 = uVar5 <= param_4;
      param_4 = param_4 / uVar5;
    } while (bVar6);
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
        uVar5 = param_4;
        puVar3 = puVar2;
        param_4 = uVar5 / 100;
        *(undefined2 *)((longlong)puVar3 + -2) =
             *(undefined2 *)
              (&DAT_14013ae08 + (ulonglong)(uint)((int)uVar5 + (int)param_4 * -100) * 2);
        puVar2 = (ulonglong *)((longlong)puVar3 + -2);
      } while (999 < uVar5);
      if (99 < uVar5) {
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
    uVar5 = (ulonglong)(int)param_5;
    do {
      *(char *)((longlong)puVar2 + -1) = "0123456789abcdefghijklmnopqrstuvwxyz"[param_4 % uVar5];
      puVar2 = (ulonglong *)((longlong)puVar2 + -1);
      bVar6 = uVar5 <= param_4;
      param_4 = param_4 / uVar5;
    } while (bVar6);
  }
  lVar4 = (longlong)&local_28 - (longlong)puVar2;
  uVar1 = 0x84;
  if (lVar4 <= param_3 - param_2) {
    thunk_FUN_140045e1f(puVar2,lVar4,param_2);
    param_3 = param_2 + lVar4;
    uVar1 = 0;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar1;
  if (DAT_1401c9640 != (local_28 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_28 ^ (ulonglong)auStack_88);
  }
  return param_1;
}

