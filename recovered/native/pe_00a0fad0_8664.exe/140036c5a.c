/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140036c5a */

ulonglong FUN_140036c5a(undefined8 *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (2 < (ulonglong)param_1[2]) {
    uVar5 = 0;
    iVar2 = FUN_14000d73c(param_1,0,2,&DAT_140171466);
    if (iVar2 != 0) goto LAB_140036da0;
    puVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    cVar1 = FUN_14002f4c6(*(undefined1 *)((longlong)puVar3 + 2));
    if (cVar1 != '\0') {
      lVar4 = FUN_14000e108(param_1,0x3d,0);
      if (lVar4 == -1) {
        FUN_1400191d4(&local_68,param_1,2,0xffffffffffffffff,&local_41);
        if (param_2 != &local_68) {
          FUN_1400065bc(param_2);
          *(undefined8 *)(param_2 + 4) = local_58;
          *(undefined8 *)(param_2 + 6) = uStack_50;
          *param_2 = local_68;
          param_2[1] = uStack_64;
          param_2[2] = uStack_60;
          param_2[3] = uStack_5c;
          local_58 = 0;
          uStack_50 = 0xf;
          local_68 = local_68 & 0xffffff00;
        }
        FUN_1400017de(&local_68);
        FUN_140017200(param_3,&DAT_1401728de,0);
        uVar5 = CONCAT71((int7)((ulonglong)&local_68 >> 8),1);
      }
      else {
        FUN_1400191d4(&local_68,param_1,2,lVar4 + -2,&local_41);
        if (param_2 != &local_68) {
          FUN_1400065bc(param_2);
          *(undefined8 *)(param_2 + 4) = local_58;
          *(undefined8 *)(param_2 + 6) = uStack_50;
          *param_2 = local_68;
          param_2[1] = uStack_64;
          param_2[2] = uStack_60;
          param_2[3] = uStack_5c;
          local_58 = 0;
          uStack_50 = 0xf;
          local_68 = local_68 & 0xffffff00;
        }
        FUN_1400017de(&local_68);
        FUN_1400191d4(&local_68,param_1,lVar4 + 1,0xffffffffffffffff,&local_41);
        if (param_3 != &local_68) {
          FUN_1400065bc(param_3);
          *(undefined8 *)(param_3 + 4) = local_58;
          *(undefined8 *)(param_3 + 6) = uStack_50;
          *param_3 = local_68;
          param_3[1] = uStack_64;
          param_3[2] = uStack_60;
          param_3[3] = uStack_5c;
          local_58 = 0;
          uStack_50 = 0xf;
          local_68 = local_68 & 0xffffff00;
        }
        FUN_1400017de(&local_68);
        uVar5 = CONCAT71((int7)((ulonglong)(lVar4 + 1) >> 8),1);
      }
      goto LAB_140036da0;
    }
  }
  uVar5 = 0;
LAB_140036da0:
  return uVar5 & 0xffffffff;
}

