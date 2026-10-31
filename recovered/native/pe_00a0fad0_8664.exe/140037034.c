/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140037034 */

undefined8 FUN_140037034(char *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (1 < *(ulonglong *)(param_1 + 0x10)) {
    pcVar2 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar2 = *(char **)param_1;
    }
    if ((*pcVar2 == '/') && (cVar1 = FUN_14002f4c6(pcVar2[1]), cVar1 != '\0')) {
      lVar3 = FUN_14000e108(param_1,0x3a,0);
      if (lVar3 != -1) {
        FUN_1400191d4(&local_68,param_1,1,lVar3 + -1,&local_41);
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
        FUN_1400191d4(&local_68,param_1,lVar3 + 1,0xffffffffffffffff,&local_41);
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
        return 1;
      }
      FUN_1400191d4(&local_68,param_1,1,0xffffffffffffffff,&local_41);
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
      return 1;
    }
  }
  return 0;
}

