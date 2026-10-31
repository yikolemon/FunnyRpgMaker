/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140036ebb */

undefined8 FUN_140036ebb(char *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  char *pcVar2;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (1 < *(ulonglong *)(param_1 + 0x10)) {
    pcVar2 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar2 = *(char **)param_1;
    }
    if ((*pcVar2 == '-') && (cVar1 = FUN_14002f4c6(pcVar2[1]), cVar1 != '\0')) {
      FUN_1400191d4(&local_60,param_1,1,1,&local_39);
      if (param_2 != &local_60) {
        FUN_1400065bc(param_2);
        *(undefined8 *)(param_2 + 4) = local_50;
        *(undefined8 *)(param_2 + 6) = uStack_48;
        *param_2 = local_60;
        param_2[1] = uStack_5c;
        param_2[2] = uStack_58;
        param_2[3] = uStack_54;
        local_50 = 0;
        uStack_48 = 0xf;
        local_60 = local_60 & 0xffffff00;
      }
      FUN_1400017de(&local_60);
      FUN_1400191d4(&local_60,param_1,2,0xffffffffffffffff,&local_39);
      if (param_3 != &local_60) {
        FUN_1400065bc(param_3);
        *(undefined8 *)(param_3 + 4) = local_50;
        *(undefined8 *)(param_3 + 6) = uStack_48;
        *param_3 = local_60;
        param_3[1] = uStack_5c;
        param_3[2] = uStack_58;
        param_3[3] = uStack_54;
        local_50 = 0;
        uStack_48 = 0xf;
        local_60 = local_60 & 0xffffff00;
      }
      FUN_1400017de(&local_60);
      return 1;
    }
  }
  return 0;
}

