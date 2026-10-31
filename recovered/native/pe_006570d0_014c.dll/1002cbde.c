/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002cbde */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002cbde(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  uVar6 = param_2 >> 0x14 & 0x7ff;
  uVar4 = (param_2 & 0xfffff) + 0xfffff + (uint)(param_1 != 0) + (uint)(0xfffffffe < param_1 - 1);
  if (uVar6 == 0) {
    uVar4 = param_2 & 0xfffff;
  }
  local_30 = uVar6 - 0x3ff;
  local_2c = 0xfffffc02;
  if (uVar6 != 0) {
    local_2c = local_30;
  }
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  uVar6 = 0xd;
  if (param_6 < 0xd) {
    bVar3 = (char)param_6 * -4 + 0x30;
    uVar1 = uVar4 >> (bVar3 & 0x1f);
    if ((bVar3 & 0x20) == 0) {
      uVar1 = param_1 >> (bVar3 & 0x1f) | uVar4 << 0x20 - (bVar3 & 0x1f);
    }
    uVar6 = param_6;
    if ((uVar1 & 8) != 0) {
      bVar3 = (char)param_6 * -4 + 0x34;
      uVar7 = 1 << (bVar3 & 0x1f);
      uVar8 = uVar7;
      uVar1 = 0 << (bVar3 & 0x1f) | 1U >> 0x20 - (bVar3 & 0x1f);
      if ((bVar3 & 0x20) != 0) {
        uVar8 = 0;
        uVar1 = uVar7;
      }
      uVar4 = uVar4 + uVar1 + (uint)CARRY4(param_1,uVar8) & -(uint)(uVar8 != 0) - uVar1;
      param_1 = param_1 + uVar8 & -uVar8;
    }
  }
  pcVar10 = (char *)((int)&uStack_18 + 1);
  local_24 = _DAT_1028f650;
  uStack_20 = _UNK_1028f654;
  uStack_1c = _UNK_1028f658;
  uStack_18 = _UNK_1028f65c;
  local_34 = param_3;
  pcVar9 = "0123456789ABCDEF";
  if ((param_3 >> 0xc & 1) == 0) {
    pcVar9 = "0123456789abcdef";
  }
  do {
    uVar1 = uVar4 << 0x1c | param_1 >> 4;
    *pcVar10 = pcVar9[param_1 & 0xf];
    uVar4 = uVar4 >> 4;
    pcVar10 = pcVar10 + -1;
    param_1 = uVar1;
  } while (uVar1 != 0 || uVar4 != 0);
  for (; (uVar4 = 0, uVar6 != 0 && (uVar4 = uVar6, *(char *)((int)&local_24 + uVar6) == '0'));
      uVar6 = uVar6 - 1) {
  }
  iVar5 = param_7[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_7[2] < uVar6) {
    (*(code *)param_7[3])(param_7,uVar6);
    iVar5 = param_7[1];
    uVar6 = iVar5 + 1;
  }
  uVar1 = local_34 >> 0xc;
  param_7[1] = uVar6;
  *(undefined1 *)(*param_7 + iVar5) = 0x30;
  iVar5 = param_7[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_7[2] < uVar6) {
    (*(code *)param_7[3])(param_7,uVar6);
    iVar5 = param_7[1];
    uVar6 = iVar5 + 1;
  }
  param_7[1] = uVar6;
  *(byte *)(*param_7 + iVar5) = ((uVar1 & 1) == 0) << 5 | 0x58;
  iVar5 = param_7[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_7[2] < uVar6) {
    (*(code *)param_7[3])(param_7,uVar6);
    iVar5 = param_7[1];
    uVar6 = iVar5 + 1;
  }
  uVar1 = local_2c;
  param_7[1] = uVar6;
  *(undefined1 *)(*param_7 + iVar5) = (undefined1)local_24;
  if (((int)uVar4 < (int)param_6) || ((local_34 & 0x2000) != 0 || uVar4 != 0)) {
    iVar5 = param_7[1];
    uVar6 = iVar5 + 1;
    if ((uint)param_7[2] < uVar6) {
      (*(code *)param_7[3])(param_7,uVar6);
      iVar5 = param_7[1];
      uVar6 = iVar5 + 1;
    }
    param_7[1] = uVar6;
    *(undefined1 *)(*param_7 + iVar5) = 0x2e;
  }
  FUN_1001909c((int)&local_24 + 1,(int)&local_24 + uVar4 + 1);
  iVar5 = param_6 - uVar4;
  if (iVar5 != 0 && (int)uVar4 <= (int)param_6) {
    do {
      iVar2 = param_7[1];
      uVar4 = iVar2 + 1;
      if ((uint)param_7[2] < uVar4) {
        (*(code *)param_7[3])(param_7,uVar4);
        iVar2 = param_7[1];
        uVar4 = iVar2 + 1;
      }
      param_7[1] = uVar4;
      *(undefined1 *)(*param_7 + iVar2) = 0x30;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar6 = local_34 >> 0xc;
  iVar5 = param_7[1];
  uVar4 = iVar5 + 1;
  if ((uint)param_7[2] < uVar4) {
    (*(code *)param_7[3])(param_7,uVar4);
    iVar5 = param_7[1];
    uVar4 = iVar5 + 1;
  }
  param_7[1] = uVar4;
  *(byte *)(*param_7 + iVar5) = ((uVar6 & 1) == 0) << 5 | 0x50;
  iVar5 = param_7[1];
  uVar4 = iVar5 + 1;
  if ((int)uVar1 < 0) {
    if ((uint)param_7[2] < uVar4) {
      (*(code *)param_7[3])(param_7,uVar4);
      iVar5 = param_7[1];
      uVar4 = iVar5 + 1;
    }
    param_7[1] = uVar4;
    *(undefined1 *)(*param_7 + iVar5) = 0x2d;
    uVar1 = -uVar1;
  }
  else {
    if ((uint)param_7[2] < uVar4) {
      (*(code *)param_7[3])(param_7,uVar4);
      iVar5 = param_7[1];
      uVar4 = iVar5 + 1;
    }
    param_7[1] = uVar4;
    *(undefined1 *)(*param_7 + iVar5) = 0x2b;
    uVar1 = local_30;
  }
  iVar5 = 0x1f;
  if ((uVar1 | 1) != 0) {
    for (; (uVar1 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  FUN_10025309(auStack_28,param_7,uVar1,
               *(int *)(&DAT_102902d4 + iVar5 * 8) +
               (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar5 * 8),uVar1));
  if (DAT_10388d00 != (local_14 ^ (uint)&local_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

