/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002d0f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002d0f2(ulonglong param_1,uint *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 local_78 [40];
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)local_78;
  uVar7 = (((uint)(param_1 >> 0x20) & 0x7ff00000) >> 0x14) - 0x3ff;
  bVar10 = (param_1 & 0x7ff0000000000000) == 0;
  uVar5 = (param_1 & 0xfffffffffffff) + 0x10000000000000;
  if (bVar10) {
    uVar5 = param_1 & 0xfffffffffffff;
  }
  uVar6 = 0xfffffc02;
  if (!bVar10) {
    uVar6 = uVar7;
  }
  uVar3 = (ulonglong)param_2[3];
  if (uVar3 < 0xd) {
    cVar1 = (char)param_2[3];
    if ((uVar5 >> (cVar1 * -4 + 0x30U & 0x3f) & 8) != 0) {
      lVar8 = 1L << (cVar1 * -4 + 0x34U & 0x3f);
      uVar5 = uVar5 + lVar8 & -lVar8;
    }
  }
  else {
    uVar3 = 0xd;
  }
  pcVar4 = (char *)((longlong)&uStack_3c + 1);
  local_48 = _DAT_1802b0d10;
  uStack_44 = _UNK_1802b0d14;
  uStack_40 = _UNK_1802b0d18;
  uStack_3c = _UNK_1802b0d1c;
  pcVar9 = "0123456789ABCDEF";
  if ((*param_2 & 0x1000) == 0) {
    pcVar9 = "0123456789abcdef";
  }
  do {
    *pcVar4 = pcVar9[(uint)uVar5 & 0xf];
    uVar5 = uVar5 >> 4;
    pcVar4 = pcVar4 + -1;
  } while (uVar5 != 0);
  uVar2 = (uint)uVar3;
  while ((uVar5 = 0, uVar2 != 0 && (uVar5 = uVar3, *(char *)((longlong)&local_48 + uVar3) == '0')))
  {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
  }
  lVar8 = param_3[1];
  uVar3 = lVar8 + 1;
  if ((ulonglong)param_3[2] < uVar3) {
    (*(code *)param_3[3])(param_3);
    lVar8 = param_3[1];
    uVar3 = lVar8 + 1;
  }
  param_3[1] = uVar3;
  *(undefined1 *)(*param_3 + lVar8) = 0x30;
  uVar2 = *param_2;
  lVar8 = param_3[1];
  uVar3 = lVar8 + 1;
  if ((ulonglong)param_3[2] < uVar3) {
    (*(code *)param_3[3])(param_3);
    lVar8 = param_3[1];
    uVar3 = lVar8 + 1;
  }
  param_3[1] = uVar3;
  *(byte *)(*param_3 + lVar8) = ((uVar2 & 0x1000) == 0) << 5 | 0x58;
  lVar8 = param_3[1];
  uVar3 = lVar8 + 1;
  if ((ulonglong)param_3[2] < uVar3) {
    (*(code *)param_3[3])(param_3);
    lVar8 = param_3[1];
    uVar3 = lVar8 + 1;
  }
  param_3[1] = uVar3;
  *(undefined1 *)(*param_3 + lVar8) = (undefined1)local_48;
  if (((*param_2 & 0x2000) != 0 || (int)uVar5 != 0) || ((int)uVar5 < (int)param_2[3])) {
    lVar8 = param_3[1];
    uVar3 = lVar8 + 1;
    if ((ulonglong)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3);
      lVar8 = param_3[1];
      uVar3 = lVar8 + 1;
    }
    param_3[1] = uVar3;
    *(undefined1 *)(*param_3 + lVar8) = 0x2e;
  }
  FUN_180018bde(param_3,(longlong)&local_48 + 1,(longlong)&local_48 + uVar5 + 1);
  for (; (int)uVar5 < (int)param_2[3]; uVar5 = (ulonglong)((int)uVar5 + 1)) {
    lVar8 = param_3[1];
    uVar3 = lVar8 + 1;
    if ((ulonglong)param_3[2] < uVar3) {
      (*(code *)param_3[3])(param_3);
      lVar8 = param_3[1];
      uVar3 = lVar8 + 1;
    }
    param_3[1] = uVar3;
    *(undefined1 *)(*param_3 + lVar8) = 0x30;
  }
  uVar2 = *param_2;
  lVar8 = param_3[1];
  uVar5 = lVar8 + 1;
  if ((ulonglong)param_3[2] < uVar5) {
    (*(code *)param_3[3])(param_3);
    lVar8 = param_3[1];
    uVar5 = lVar8 + 1;
  }
  param_3[1] = uVar5;
  *(byte *)(*param_3 + lVar8) = ((uVar2 & 0x1000) == 0) << 5 | 0x50;
  lVar8 = param_3[1];
  uVar5 = lVar8 + 1;
  if ((int)uVar6 < 0) {
    if ((ulonglong)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3);
      lVar8 = param_3[1];
      uVar5 = lVar8 + 1;
    }
    param_3[1] = uVar5;
    *(undefined1 *)(*param_3 + lVar8) = 0x2d;
    uVar7 = -uVar6;
  }
  else {
    if ((ulonglong)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3);
      lVar8 = param_3[1];
      uVar5 = lVar8 + 1;
    }
    param_3[1] = uVar5;
    *(undefined1 *)(*param_3 + lVar8) = 0x2b;
  }
  uVar6 = 0x1f;
  if ((uVar7 | 1) != 0) {
    for (; (uVar7 | 1) >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  FUN_180025792(local_50,param_3,uVar7,
                (ulonglong)uVar7 + *(longlong *)(&DAT_1802b1be0 + (ulonglong)uVar6 * 8) >> 0x20);
  if (DAT_180402640 == (local_38 ^ (ulonglong)local_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)local_78);
}

