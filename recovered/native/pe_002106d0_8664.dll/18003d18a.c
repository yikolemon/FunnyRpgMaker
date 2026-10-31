/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003d18a */

void FUN_18003d18a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 local_68 [40];
  longlong *local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_18003ae98(local_68,6,param_1 + 8);
  if (*(int *)(param_1 + 0x18) == 1) {
    FUN_180018bde(param_4,&DAT_18036eb24,&DAT_18036eb2a);
  }
  else {
    uVar1 = FUN_18003d400(param_1,param_2,param_3);
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((int)uVar1 < 0) {
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar2 = param_4[1];
        uVar4 = lVar2 + 1;
      }
      param_4[1] = uVar4;
      *(undefined1 *)(*param_4 + lVar2) = 0x2d;
      uVar1 = -uVar1;
    }
    else {
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar2 = param_4[1];
        uVar4 = lVar2 + 1;
      }
      param_4[1] = uVar4;
      *(undefined1 *)(*param_4 + lVar2) = 0x2b;
    }
    iVar5 = (int)((ulonglong)uVar1 / 0x3c);
    if (uVar1 < 6000) {
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar2 = param_4[1];
        uVar4 = lVar2 + 1;
      }
      bVar3 = (byte)((iVar5 * 0xcd & 0xffffU) >> 0xb);
      param_4[1] = uVar4;
      *(byte *)(*param_4 + lVar2) = bVar3 | 0x30;
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
      if ((ulonglong)param_4[2] < uVar4) {
        (*(code *)param_4[3])(param_4);
        lVar2 = param_4[1];
        uVar4 = lVar2 + 1;
      }
      param_4[1] = uVar4;
      *(byte *)(*param_4 + lVar2) = (char)((ulonglong)uVar1 / 0x3c) + bVar3 * -10 | 0x30;
    }
    else {
      local_40 = param_4;
      FUN_180024c6e(local_38);
    }
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    param_4[1] = uVar4;
    *(undefined1 *)(*param_4 + lVar2) = 0x3a;
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    iVar5 = uVar1 + iVar5 * -0x3c;
    bVar3 = (byte)((iVar5 * 0xcd & 0xffffU) >> 0xb);
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar2) = bVar3 | 0x30;
    lVar2 = param_4[1];
    uVar4 = lVar2 + 1;
    if ((ulonglong)param_4[2] < uVar4) {
      (*(code *)param_4[3])(param_4);
      lVar2 = param_4[1];
      uVar4 = lVar2 + 1;
    }
    param_4[1] = uVar4;
    *(byte *)(*param_4 + lVar2) = (char)iVar5 + bVar3 * -10 | 0x30;
  }
  FUN_18003af0c(local_68);
  return;
}

