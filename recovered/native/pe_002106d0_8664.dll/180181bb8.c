/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180181bb8 */

ulonglong * FUN_180181bb8(ulonglong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  local_38 = param_1;
  FUN_180181e24();
  uVar3 = FUN_1800136a6(param_2,&DAT_18036a525);
  local_58 = 0;
  FUN_1800dcb19(uVar3);
  *local_38 = local_58;
  uVar3 = FUN_1800136a6(param_2,"x");
  local_58 = local_58 & 0xffffffff00000000;
  FUN_180057604(&DAT_1802b0ea8,uVar3);
  *(undefined4 *)(local_38 + 1) = (undefined4)local_58;
  uVar3 = FUN_1800136a6(param_2,"y");
  local_58 = local_58 & 0xffffffff00000000;
  FUN_180057604(&DAT_1802b0ea8,uVar3);
  *(undefined4 *)((longlong)local_38 + 0xc) = (undefined4)local_58;
  uVar3 = FUN_1800136a6(param_2,"name");
  local_68 = (char *)0x0;
  uStack_60 = 0;
  FUN_1800e063a(&DAT_1802b0ea8,uVar3);
  FUN_18015ace8(&local_58,&local_68);
  puVar2 = local_38;
  puVar1 = local_38 + 2;
  if (puVar1 != &local_58) {
    FUN_180004c8c(puVar1);
    puVar2[4] = local_48;
    puVar2[5] = uStack_40;
    *(undefined4 *)puVar1 = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_58._4_4_;
    *(undefined4 *)(puVar2 + 3) = uStack_50;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_4c;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffffffffffff00;
  }
  FUN_180001ef2(&local_58);
  local_68 = "pages";
  uStack_60 = 5;
  FUN_1800dcf0b(&local_58,param_2);
  puVar1 = local_38 + 6;
  for (uVar4 = local_58; uVar4 != CONCAT44(uStack_4c,uStack_50); uVar4 = uVar4 + 0x10) {
    FUN_180181eb2(puVar1,uVar4);
  }
  FUN_180016e50(&local_58);
  return local_38;
}

