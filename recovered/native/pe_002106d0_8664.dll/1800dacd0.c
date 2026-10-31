/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dacd0 */

void FUN_1800dacd0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  char ****ppppcVar6;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 ***local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_70;
  longlong local_68;
  char ***local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_b8 = param_4;
  local_a0 = param_3;
  FUN_18013309a(param_3,0);
  FUN_180159bbb(DAT_1802dbb70,DAT_1802ac570);
  FUN_1800ffdb5();
  local_98 = (undefined8 ***)0x0;
  local_70 = FUN_1800dcbd6(*(undefined8 *)*param_1,&local_b8);
  local_60 = (char ***)0x18036277b;
  uStack_58 = 9;
  FUN_1800dcf0b(&local_98,*(undefined8 *)*param_1);
  lVar5 = (longlong)param_5;
  local_68 = 0;
  FUN_1800dcb19(local_98 + lVar5 * 2);
  lVar1 = local_68;
  FUN_180016e50(&local_98);
  local_98 = (undefined8 ***)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0xf;
  local_68 = lVar1;
  if (lVar1 < 1) {
    if (lVar1 < 0) {
      local_d8 = "{}(%lld)";
      local_d0 = 8;
      FUN_1800da057(&local_60,&local_d8,&local_70);
      FUN_180004c8c(&local_98);
      uStack_80 = uStack_48;
      local_98 = (undefined8 ***)local_60;
      uStack_90 = uStack_58;
      local_50 = 0;
      uStack_48 = 0xf;
      local_60 = (char ***)((ulonglong)local_60 & 0xffffffffffffff00);
      FUN_180001ef2(&local_60);
    }
    else {
      FUN_1800d57fb(&local_60,local_70);
      FUN_180004c8c(&local_98);
      uStack_80 = uStack_48;
      local_98 = (undefined8 ***)local_60;
      uStack_90 = uStack_58;
      local_50 = 0;
      uStack_48 = 0xf;
      local_60 = (char ***)((ulonglong)local_60 & 0xffffffffffffff00);
      FUN_180001ef2(&local_60);
    }
  }
  else {
    local_e8 = "{}(+%lld)";
    local_e0 = 9;
    FUN_1800da057(&local_60,&local_e8,&local_70);
    FUN_180004c8c(&local_98);
    uStack_80 = uStack_48;
    local_98 = (undefined8 ***)local_60;
    uStack_90 = uStack_58;
    local_50 = 0;
    uStack_48 = 0xf;
    local_60 = (char ***)((ulonglong)local_60 & 0xffffffffffffff00);
    FUN_180001ef2(&local_60);
  }
  ppppuVar4 = &local_98;
  if (0xf < uStack_80) {
    ppppuVar4 = (undefined8 ****)local_98;
  }
  local_c8 = &DAT_18035f7f6;
  local_c0 = 4;
  FUN_1800dcd1b(&local_60,&local_c8,&local_a0);
  ppppcVar6 = &local_60;
  if (0xf < uStack_48) {
    ppppcVar6 = (char ****)local_60;
  }
  cVar2 = FUN_18013c8ae(ppppcVar6,6,&local_68,param_2,0,0,ppppuVar4,0);
  FUN_180001ef2(&local_60);
  if (cVar2 != '\0') {
    FUN_180054d80(local_b0,&local_68);
    uVar3 = FUN_1800136a6(*(undefined8 *)*param_1,"paramPlus");
    uVar3 = FUN_1800dd018(uVar3,lVar5);
    FUN_1800500c4(uVar3,local_b0);
    lVar1 = local_68;
    local_60 = (char ***)0x0;
    uVar3 = FUN_1800da878(*(undefined8 *)*param_1,"actorId");
    FUN_1800dd0ff(uVar3,lVar5,lVar1);
  }
  FUN_180001ef2(&local_98);
  return;
}

