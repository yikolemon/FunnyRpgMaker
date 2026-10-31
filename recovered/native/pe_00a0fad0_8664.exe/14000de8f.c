/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000de8f */

ulonglong FUN_14000de8f(uint *param_1,uint param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar5 = *(ulonglong *)(param_1 + 4);
  if (1 < uVar5) {
    uVar6 = (ulonglong)param_2;
    iVar2 = FUN_14000d73c(param_1,0,3,&DAT_140171bb6);
    if (iVar2 == 0) {
      iVar2 = FUN_14000d73c(param_1,uVar5 - 2,2,&DAT_140171d1d);
      if (iVar2 != 0) goto LAB_14000def6;
LAB_14000e06a:
      FUN_14000e15d(&local_50,param_1);
      if (param_1 != &local_50) {
        FUN_1400065bc(param_1);
        *(undefined8 *)(param_1 + 4) = local_40;
        *(undefined8 *)(param_1 + 6) = uStack_38;
        *param_1 = local_50;
        param_1[1] = uStack_4c;
        param_1[2] = uStack_48;
        param_1[3] = uStack_44;
        local_40 = 0;
        uStack_38 = 0xf;
        local_50 = local_50 & 0xffffff00;
      }
      FUN_1400017de(&local_50);
      uVar5 = CONCAT71((int7)((ulonglong)&local_50 >> 8),1);
      goto LAB_14000e05d;
    }
LAB_14000def6:
    iVar2 = FUN_14000d73c(param_1,0,4,&DAT_140171bb5);
    if (iVar2 == 0) {
      iVar2 = FUN_14000d73c(param_1,uVar5 - 3,3,&DAT_140171cdc);
      if (iVar2 == 0) goto LAB_14000e06a;
    }
    puVar3 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 6)) {
      puVar3 = *(uint **)param_1;
    }
    cVar1 = (char)*puVar3;
    if ((cVar1 == (char)param_2) &&
       (uVar5 = *(ulonglong *)(param_1 + 4),
       ((char *)((longlong)puVar3 + -1))[uVar5] == (char)param_2)) {
      if (1 < uVar5) {
        *(ulonglong *)(param_1 + 4) = uVar5 - 1;
        ((char *)((longlong)puVar3 + -1))[uVar5] = '\0';
        puVar3 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 6)) {
          puVar3 = *(uint **)param_1;
        }
        uVar5 = (ulonglong)(*(longlong *)(param_1 + 4) != 0);
        uVar6 = *(longlong *)(param_1 + 4) - uVar5;
        FUN_140135ff0(puVar3,(char *)(uVar5 + (longlong)puVar3),uVar6 + 1);
        *(ulonglong *)(param_1 + 4) = uVar6;
      }
      lVar4 = FUN_14000e108(param_1,0x5c,0);
      uVar5 = CONCAT71((int7)(uVar6 >> 8),1);
      if (lVar4 != -1) {
        FUN_14000e389(&local_50,param_1);
        if (param_1 != &local_50) {
          FUN_1400065bc(param_1);
          *(undefined8 *)(param_1 + 4) = local_40;
          *(undefined8 *)(param_1 + 6) = uStack_38;
          *param_1 = local_50;
          param_1[1] = uStack_4c;
          param_1[2] = uStack_48;
          param_1[3] = uStack_44;
          local_40 = 0;
          uStack_38 = 0xf;
          local_50 = local_50 & 0xffffff00;
        }
        FUN_1400017de(&local_50);
      }
      goto LAB_14000e05d;
    }
    if (((cVar1 == param_3) || (cVar1 == '`')) &&
       (uVar6 = *(ulonglong *)(param_1 + 4), *(char *)((longlong)puVar3 + (uVar6 - 1)) == cVar1)) {
      uVar5 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
      if (1 < uVar6) {
        *(ulonglong *)(param_1 + 4) = uVar6 - 1;
        *(char *)((longlong)puVar3 + (uVar6 - 1)) = '\0';
        puVar3 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 6)) {
          puVar3 = *(uint **)param_1;
        }
        uVar6 = (ulonglong)(*(longlong *)(param_1 + 4) != 0);
        lVar4 = *(longlong *)(param_1 + 4) - uVar6;
        FUN_140135ff0(puVar3,(char *)(uVar6 + (longlong)puVar3),lVar4 + 1);
        *(longlong *)(param_1 + 4) = lVar4;
      }
      goto LAB_14000e05d;
    }
  }
  uVar5 = 0;
LAB_14000e05d:
  return uVar5 & 0xffffffff;
}

