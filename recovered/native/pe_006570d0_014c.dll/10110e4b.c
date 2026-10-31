/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10110e4b */

void FUN_10110e4b(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  undefined8 uVar8;
  float local_268 [44];
  char local_1b5;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_a8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  float local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  float *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_268;
  local_14 = 0xffffffff;
  local_18 = &LAB_1012c9b0;
  local_1c = ExceptionList;
  local_30 = DAT_1039d74c;
  if (*(char *)(DAT_1039d74c + 0x2250) != '\x01') {
    return;
  }
  local_158 = *(float *)(param_1 + 0x50);
  fStack_154 = *(float *)(param_1 + 0x54);
  fStack_150 = (float)*(undefined8 *)(param_1 + 0x58) + local_158;
  fStack_14c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) + fStack_154;
  ExceptionList = &local_1c;
  cVar1 = FUN_10117db2(&local_158,*(undefined4 *)(param_1 + 8));
  iVar4 = local_30;
  if (cVar1 == '\0') {
    ExceptionList = local_1c;
    return;
  }
  if ((*(int *)(local_30 + 0x2270) == -1) ||
     (iVar3 = _strcmp("_IMWINDOW",(char *)(local_30 + 0x2274)), iVar3 != 0)) {
LAB_10110f61:
    FUN_101182df();
    ExceptionList = local_1c;
    return;
  }
  local_34 = **(undefined4 **)(iVar4 + 0x2260);
  cVar1 = FUN_1011cd74();
  if (cVar1 == '\0') goto LAB_10110f61;
  uVar8 = FUN_10117f03("_IMWINDOW",0xc00);
  if ((int)uVar8 == 0) goto LAB_101111fa;
  if (*(int *)(param_1 + 0x434) == 0) {
    uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),*(int *)(param_1 + 0x430));
    bVar6 = *(int *)(param_1 + 0x430) == 0;
code_r0x10110f81:
    if ((int)uVar8 != 0) goto code_r0x10110f89;
LAB_10110fc2:
    local_2c = 0;
    local_24 = 0;
LAB_10110fc9:
    fVar7 = (float10)FUN_101155f9();
    local_38 = (float)fVar7;
    local_48 = *(undefined4 *)(param_1 + 0x50);
    uStack_44 = *(undefined4 *)(param_1 + 0x54);
    uStack_40 = CONCAT44(local_38 + (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20),
                         *(float *)(param_1 + 0x58) + (float)*(undefined8 *)(param_1 + 0x50));
  }
  else {
    uVar8 = FUN_1011a856();
    iVar4 = (int)uVar8;
    if (iVar4 == 0) {
      bVar6 = false;
      goto LAB_10110fc2;
    }
    local_24 = iVar4;
    if ((((*(byte *)(iVar4 + 0x11) & 4) != 0) && (*(int *)(iVar4 + 0x18) == 0)) &&
       ((local_24 = *(int *)(iVar4 + 0x80), local_24 == 0 || (*(int *)(iVar4 + 0x1c) != 0)))) {
      uVar8 = FUN_1011cdc8();
      bVar6 = false;
      goto code_r0x10110f81;
    }
    uVar8 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),local_24);
    bVar6 = false;
code_r0x10110f89:
    local_24 = (int)uVar8;
    iVar4 = *(int *)(local_24 + 0x30);
    local_2c = CONCAT31((int3)((ulonglong)uVar8 >> 0x28),1);
    if ((iVar4 == 0) || ((*(byte *)(local_24 + 0x11) & 0x30) != 0)) goto LAB_10110fc9;
    local_48 = *(undefined4 *)(iVar4 + 0x30);
    uStack_44 = *(undefined4 *)(iVar4 + 0x34);
    uStack_40 = *(undefined8 *)(iVar4 + 0x38);
    local_2c = CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  local_28 = (float *)CONCAT31(local_28._1_3_,1);
  if (*(char *)(local_30 + 0x6e) == '\0') {
    uVar2 = FUN_10102f3a(&local_48,&uStack_40,1);
    local_28 = (float *)CONCAT31(local_28._1_3_,uVar2);
  }
  if (*(char *)(local_30 + 0x2295) == '\0') {
    if ((*(char *)(local_30 + 0x2296) != '\x01') || (bVar6 == false && (byte)local_2c == 0))
    goto LAB_101111fa;
  }
  else if ((bVar6 | (byte)local_2c) != 1) goto LAB_101111fa;
  FUN_1011bc2e();
  local_14 = 0;
  FUN_1011bc2e();
  local_14 = 1;
  uVar5 = (uint)local_28 & 0xff;
  local_28 = &local_158;
  if (((byte)local_2c == '\0') ||
     (((*(int *)(local_24 + 0x18) == 0 && ((*(byte *)(local_24 + 0x11) & 8) == 0)) &&
      (local_28 = &local_158, *(int *)(local_24 + 0x1c) == 0)))) {
LAB_101110fd:
    FUN_1011bce9(local_34,0,&local_158,uVar5,0);
  }
  else {
    local_28 = &local_158;
    iVar4 = local_24;
    do {
      iVar4 = *(int *)(iVar4 + 0x18);
    } while (iVar4 != 0);
    local_2c = uVar5;
    FUN_1011bce9(local_34,0,local_268,uVar5,1);
    local_28 = &local_158;
    if (local_1b5 != '\0') {
      local_28 = local_268;
    }
    uVar5 = local_2c;
    if (*(int *)(local_24 + 0x1c) == 0) goto LAB_101110fd;
  }
  if (local_28 == local_268) {
    local_a8 = 0;
  }
  local_14 = 1;
  FUN_1011cde9(local_34,&local_158);
  FUN_1011cde9(local_34,local_268);
  if ((*(char *)(local_28 + 0x2c) == '\x01') && (*(char *)(local_30 + 0x2296) == '\x01')) {
    FUN_1011b557(local_30,param_1,local_28[0x2d],local_34,local_28[0x2e],local_28[0x2f],
                 local_28 == local_268);
  }
  local_14 = 0xffffffff;
  FUN_1011c12e();
  FUN_1011c12e();
LAB_101111fa:
  FUN_101182df();
  ExceptionList = local_1c;
  return;
}

