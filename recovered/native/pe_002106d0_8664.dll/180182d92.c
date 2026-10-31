/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180182d92 */

undefined4 * FUN_180182d92(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_e8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a0;
  char *local_98;
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_88 = param_1 + 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0xf;
  uVar2 = FUN_1800136a6(param_2,"code");
  local_80._0_4_ = 0;
  FUN_180057604(&DAT_1802b0ea8,uVar2);
  *param_1 = (undefined4)local_80;
  uVar2 = FUN_1800136a6(param_2,"indent");
  local_80 = (char *)((ulonglong)local_80._4_4_ << 0x20);
  FUN_180057604(&DAT_1802b0ea8,uVar2);
  param_1[1] = (undefined4)local_80;
  local_80 = "parameters";
  local_78 = 10;
  FUN_1800dcf0b(&local_a0,param_2,&local_80);
  for (pcVar4 = local_a0; pcVar4 != local_98; pcVar4 = pcVar4 + 0x10) {
    if (*(longlong *)(param_1 + 6) == 0) {
      FUN_180017ca0(param_1 + 2,&DAT_18036ba6b,1);
    }
    else {
      FUN_180003300(param_1 + 2,&DAT_18037bd63,2);
    }
    if (*pcVar4 == '\x03') {
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_1800e063a(&DAT_1802b0ea8,pcVar4,&local_b8);
      FUN_18015ace8(local_e8,&local_b8);
      FUN_1800e0b1a(local_c8,local_e8);
      FUN_1800139e8(local_c8,&local_80,0xffffffff,0x20,0,0);
      pcVar3 = (char *)&local_80;
      if (0xf < local_68) {
        pcVar3 = local_80;
      }
      FUN_180003300(param_1 + 2,pcVar3,local_70);
      FUN_180001ef2(&local_80);
      FUN_1800137c6(local_c8);
      FUN_180001ef2(local_e8);
    }
    else {
      FUN_1800139e8(pcVar4,&local_80,0xffffffff,0x20,0,0);
      pcVar3 = (char *)&local_80;
      if (0xf < local_68) {
        pcVar3 = local_80;
      }
      FUN_180003300(param_1 + 2,pcVar3,local_70);
      FUN_180001ef2(&local_80);
    }
  }
  FUN_180016e50(&local_a0);
  local_78 = *(undefined8 *)(param_1 + 6);
  local_80 = (char *)(param_1 + 2);
  if (0xf < *(ulonglong *)(param_1 + 8)) {
    local_80 = *(char **)(param_1 + 2);
  }
  cVar1 = FUN_1800182d2(&local_80,&DAT_18036ba6b);
  if (cVar1 != '\0') {
    FUN_180003300(param_1 + 2,&DAT_18036ba38,1);
  }
  return param_1;
}

