/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140017f0d */

longlong * FUN_140017f0d(longlong *param_1,uint *param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong unaff_R12;
  longlong lVar5;
  char *pcVar6;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  uint *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  FUN_140006fbc(&local_70,&DAT_1401728a7,param_2);
  puVar2 = local_50;
  if (local_50 != &local_70) {
    FUN_1400065bc(local_50);
    *(undefined8 *)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = uStack_58;
    *puVar2 = local_70;
    puVar2[1] = uStack_6c;
    puVar2[2] = uStack_68;
    puVar2[3] = uStack_64;
    local_60 = 0;
    uStack_58 = 0xf;
    local_70 = local_70 & 0xffffff00;
  }
  FUN_1400017de(&local_70);
  lVar4 = (longlong)(int)param_4;
  FUN_1400da260(&local_70,lVar4);
  (*(code *)CONCAT44(uStack_6c,local_70))
            ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,CONCAT44(uStack_64,uStack_68));
  *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x18) =
       *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x18) & 0xfffffe3f | 0x40;
  FUN_1400058b9(param_1,local_50);
  lVar5 = *(longlong *)(param_3 + 0x10);
  if (lVar5 != 0) {
    if (param_4 <= *(ulonglong *)(local_50 + 4)) {
      plVar3 = (longlong *)FUN_1400052b8(param_1,&DAT_1401728dd);
      FUN_1400da260(&local_70,lVar4);
      (*(code *)CONCAT44(uStack_6c,local_70))
                ((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3,CONCAT44(uStack_64,uStack_68));
      FUN_1400052b8(plVar3,&DAT_1401728de);
      lVar5 = *(longlong *)(param_3 + 0x10);
    }
    if (0xf < *(ulonglong *)(param_3 + 0x18)) {
      param_3 = *(char **)param_3;
    }
    pcVar6 = param_3 + lVar5;
    for (; param_3 != pcVar6; param_3 = param_3 + 1) {
      cVar1 = *param_3;
      unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),cVar1);
      FUN_14001835e(param_1,unaff_R12 & 0xffffffff);
      if (cVar1 == '\n') {
        FUN_1400da260(&local_70,lVar4);
        (*(code *)CONCAT44(uStack_6c,local_70))
                  ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,
                   CONCAT44(uStack_64,uStack_68));
        FUN_1400052b8(param_1,&DAT_1401728de);
      }
    }
  }
  FUN_1400052b8(param_1,&DAT_1401728dd);
  FUN_1400017de(local_50);
  return param_1;
}

