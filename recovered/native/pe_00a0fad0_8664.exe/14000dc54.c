/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000dc54 */

void FUN_14000dc54(undefined8 param_1,undefined8 *param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_2;
  if (1 < *(ulonglong *)(param_3 + 4)) {
    puVar3 = param_3;
    if (0xf < *(ulonglong *)(param_3 + 6)) {
      puVar3 = *(uint **)param_3;
    }
    uVar4 = (byte)*puVar3 - 0x22;
    if (((uVar4 < 0x3f) && ((0x4000000000000021U >> ((ulonglong)uVar4 & 0x3f) & 1) != 0)) &&
       ((byte)*puVar3 == *(byte *)((longlong)puVar3 + (*(ulonglong *)(param_3 + 4) - 1)))) {
      FUN_14000de8f(param_3,0x22,CONCAT71((uint7)(uint3)(uVar4 >> 8),0x27));
      goto LAB_14000ddec;
    }
  }
  lVar2 = FUN_14000e108(param_3,0x5c,0);
  if (lVar2 == -1) goto LAB_14000ddec;
  lVar2 = *(longlong *)(param_3 + 4);
  iVar1 = FUN_14000d73c(param_3,0,3,&DAT_140171bb6);
  if (iVar1 == 0) {
    iVar1 = FUN_14000d73c(param_3,lVar2 + -2,2,&DAT_140171d1d);
    if (iVar1 != 0) goto LAB_14000dd19;
LAB_14000dda2:
    FUN_14000e15d(&local_50,param_3);
    if (param_3 != &local_50) {
      FUN_1400065bc(param_3);
      *(undefined8 *)(param_3 + 4) = local_40;
      *(undefined8 *)(param_3 + 6) = uStack_38;
      *param_3 = local_50;
      param_3[1] = uStack_4c;
      param_3[2] = uStack_48;
      param_3[3] = uStack_44;
      local_40 = 0;
      uStack_38 = 0xf;
      local_50 = local_50 & 0xffffff00;
    }
    FUN_1400017de(&local_50);
  }
  else {
LAB_14000dd19:
    iVar1 = FUN_14000d73c(param_3,0,4,&DAT_140171bb5);
    if (iVar1 == 0) {
      iVar1 = FUN_14000d73c(param_3,lVar2 + -3,3,&DAT_140171cdc);
      if (iVar1 == 0) goto LAB_14000dda2;
    }
    FUN_14000e389(&local_50,param_3);
    if (param_3 != &local_50) {
      FUN_1400065bc(param_3);
      *(undefined8 *)(param_3 + 4) = local_40;
      *(undefined8 *)(param_3 + 6) = uStack_38;
      *param_3 = local_50;
      param_3[1] = uStack_4c;
      param_3[2] = uStack_48;
      param_3[3] = uStack_44;
      local_40 = 0;
      uStack_38 = 0xf;
      local_50 = local_50 & 0xffffff00;
    }
    FUN_1400017de(&local_50);
  }
LAB_14000ddec:
  *local_30 = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0xf;
  return;
}

