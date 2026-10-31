/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180040c5a */

void FUN_180040c5a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint *local_48;
  uint local_40 [4];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x18) == 1) {
    if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_98)) {
      FUN_180018bde(param_4,&DAT_18036eb24,&DAT_18036eb2a);
      return;
    }
  }
  else {
    uVar2 = FUN_18003d400();
    if ((int)uVar2 < 0) {
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar3 = param_4[1];
        uVar4 = lVar3 + 1;
      }
      uVar2 = -uVar2;
      param_4[1] = uVar4;
      *(undefined1 *)(*param_4 + lVar3) = 0x2d;
    }
    else {
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar3 = param_4[1];
        uVar4 = lVar3 + 1;
      }
      param_4[1] = uVar4;
      *(undefined1 *)(*param_4 + lVar3) = 0x2b;
    }
    if (uVar2 < 6000) {
      bVar1 = (byte)(((uVar2 / 0x3c) * 0xcd & 0xffff) >> 0xb);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar3 = param_4[1];
        uVar4 = lVar3 + 1;
      }
      param_4[1] = uVar4;
      *(byte *)(*param_4 + lVar3) = bVar1 | 0x30;
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar3 = param_4[1];
        uVar4 = lVar3 + 1;
      }
      param_4[1] = uVar4;
      *(byte *)(*param_4 + lVar3) = (char)((ulonglong)uVar2 / 0x3c) + bVar1 * -10 | 0x30;
    }
    else {
      local_48 = local_40;
      local_50 = 1;
      local_60 = "{:02}";
      local_58 = 5;
      local_68 = param_4;
      local_40[0] = uVar2 / 0x3c;
      FUN_180024c6e(local_70);
    }
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(undefined1 *)(*param_4 + lVar3) = 0x3a;
    bVar1 = (byte)((uVar2 % 0x3c) / 10);
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = bVar1 | 0x30;
    lVar3 = param_4[1];
    uVar4 = lVar3 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar3 = param_4[1];
      uVar4 = lVar3 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar3) = (char)(uVar2 % 0x3c) + bVar1 * -10 | 0x30;
    if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_98)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_98);
}

