/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003edea */

void FUN_1003edea(undefined4 param_1,uint *param_2,int *param_3)

{
  char *pcVar1;
  byte bVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_48 [4];
  int *piStack_44;
  uint auStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint *puStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_23 [3];
  int iStack_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pcVar1 = (&PTR_DAT_1028f2f8)[param_2[6]];
  sVar3 = _strlen(pcVar1);
  FUN_1001909c(pcVar1,pcVar1 + sVar3);
  iVar5 = param_3[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_3[2] < uVar6) {
    (*(code *)param_3[3])(param_3,uVar6);
    iVar5 = param_3[1];
    uVar6 = iVar5 + 1;
  }
  param_3[1] = uVar6;
  *(undefined1 *)(*param_3 + iVar5) = 0x20;
  pcVar1 = (&PTR_DAT_1028f330)[param_2[4]];
  sVar3 = _strlen(pcVar1);
  FUN_1001909c(pcVar1,pcVar1 + sVar3);
  iVar5 = param_3[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_3[2] < uVar6) {
    (*(code *)param_3[3])(param_3,uVar6);
    iVar5 = param_3[1];
    uVar6 = iVar5 + 1;
  }
  param_3[1] = uVar6;
  *(undefined1 *)(*param_3 + iVar5) = 0x20;
  uVar6 = param_2[3];
  uVar4 = -uVar6;
  if ((int)-uVar6 < 0) {
    uVar4 = uVar6;
  }
  iStack_20 = FUN_1002472e(&uStack_38,uVar4,0x15);
  if ((int)uVar6 < 0) {
    *(undefined1 *)(iStack_20 + -1) = 0x2d;
    iStack_20 = iStack_20 + -1;
  }
  FUN_1001909c(iStack_20,auStack_23);
  iVar5 = param_3[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_3[2] < uVar6) {
    (*(code *)param_3[3])(param_3,uVar6);
    iVar5 = param_3[1];
    uVar6 = iVar5 + 1;
  }
  param_3[1] = uVar6;
  *(undefined1 *)(*param_3 + iVar5) = 0x20;
  uVar6 = param_2[2];
  if (uVar6 < 100) {
    bVar2 = (byte)((uVar6 * 0xcd & 0xffff) >> 0xb);
    iVar5 = param_3[1];
    uVar4 = iVar5 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar5 = param_3[1];
      uVar4 = iVar5 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar5) = bVar2 | 0x30;
    iVar5 = param_3[1];
    uVar4 = iVar5 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar5 = param_3[1];
      uVar4 = iVar5 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar5) = (char)uVar6 + bVar2 * -10 | 0x30;
  }
  else {
    piStack_44 = param_3;
    puStack_30 = auStack_40;
    uStack_34 = 0;
    uStack_38 = 1;
    auStack_40[0] = uVar6;
    FUN_1002479c(auStack_48,&piStack_44,"{:02}",5,1,0,puStack_30,uStack_2c);
  }
  iVar5 = param_3[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_3[2] < uVar6) {
    (*(code *)param_3[3])(param_3,uVar6);
    iVar5 = param_3[1];
    uVar6 = iVar5 + 1;
  }
  param_3[1] = uVar6;
  *(undefined1 *)(*param_3 + iVar5) = 0x3a;
  uVar6 = param_2[1];
  if (uVar6 < 100) {
    bVar2 = (byte)((uVar6 * 0xcd & 0xffff) >> 0xb);
    iVar5 = param_3[1];
    uVar4 = iVar5 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar5 = param_3[1];
      uVar4 = iVar5 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar5) = bVar2 | 0x30;
    iVar5 = param_3[1];
    uVar4 = iVar5 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar5 = param_3[1];
      uVar4 = iVar5 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar5) = (char)uVar6 + bVar2 * -10 | 0x30;
  }
  else {
    piStack_44 = param_3;
    puStack_30 = auStack_40;
    uStack_34 = 0;
    uStack_38 = 1;
    auStack_40[0] = uVar6;
    FUN_1002479c(auStack_48,&piStack_44,"{:02}",5,1,0,puStack_30,uStack_2c);
  }
  iVar5 = param_3[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_3[2] < uVar6) {
    (*(code *)param_3[3])(param_3,uVar6);
    iVar5 = param_3[1];
    uVar6 = iVar5 + 1;
  }
  param_3[1] = uVar6;
  *(undefined1 *)(*param_3 + iVar5) = 0x3a;
  uVar6 = *param_2;
  if (uVar6 < 100) {
    bVar2 = (byte)((uVar6 * 0xcd & 0xffff) >> 0xb);
    iVar5 = param_3[1];
    uVar4 = iVar5 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar5 = param_3[1];
      uVar4 = iVar5 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar5) = bVar2 | 0x30;
    iVar5 = param_3[1];
    uVar4 = iVar5 + 1;
    if ((uint)param_3[2] < uVar4) {
      (*(code *)param_3[3])(param_3,uVar4);
      iVar5 = param_3[1];
      uVar4 = iVar5 + 1;
    }
    param_3[1] = uVar4;
    *(byte *)(*param_3 + iVar5) = (char)uVar6 + bVar2 * -10 | 0x30;
  }
  else {
    piStack_44 = param_3;
    puStack_30 = auStack_40;
    uStack_34 = 0;
    uStack_38 = 1;
    auStack_40[0] = uVar6;
    FUN_1002479c(auStack_48,&piStack_44,"{:02}",5,1,0,puStack_30,uStack_2c);
  }
  iVar5 = param_3[1];
  uVar6 = iVar5 + 1;
  if ((uint)param_3[2] < uVar6) {
    (*(code *)param_3[3])(param_3,uVar6);
    iVar5 = param_3[1];
    uVar6 = iVar5 + 1;
  }
  param_3[1] = uVar6;
  *(undefined1 *)(*param_3 + iVar5) = 0x20;
  uVar6 = param_2[5];
  iVar5 = uVar6 + 0x76c;
  iVar7 = -iVar5;
  if (iVar7 < 0) {
    iVar7 = iVar5;
  }
  iStack_20 = FUN_1002472e(&uStack_38,iVar7,0x15);
  if ((int)uVar6 < -0x76c) {
    *(undefined1 *)(iStack_20 + -1) = 0x2d;
    iStack_20 = iStack_20 + -1;
  }
  FUN_1001909c(iStack_20,auStack_23);
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

