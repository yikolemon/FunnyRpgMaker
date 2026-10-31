/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140006e12 */

undefined4 FUN_140006e12(char *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined1 local_e0 [120];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140007025();
  sVar4 = strlen(param_1);
  FUN_140007310(local_e0);
  FUN_140007482(local_e0,&local_40,param_1,param_1 + sVar4);
  FUN_1400076f4(local_e0);
  local_58 = (undefined4)local_30;
  uStack_54 = local_30._4_4_;
  uStack_50 = (undefined4)uStack_28;
  uStack_4c = uStack_28._4_4_;
  local_68 = (undefined4)local_40;
  uStack_64 = local_40._4_4_;
  uStack_60 = iStack_38;
  uStack_5c = uStack_34;
  local_30 = 0;
  uStack_28 = 7;
  local_40 = local_40 & 0xffffffffffff0000;
  FUN_140005242(&local_40);
  local_40 = 0xffff00000000;
  if (CONCAT44(uStack_4c,uStack_50) < 8) {
    puVar5 = &local_68;
  }
  else {
    puVar5 = (undefined4 *)CONCAT44(uStack_64,local_68);
  }
  iStack_38 = FUN_1400dcbb0(puVar5,local_e0,3,0xffffffff);
  FUN_140007276(&local_40,iStack_38,local_e0);
  iVar2 = iStack_38;
  FUN_140007025();
  uVar1 = local_40;
  FUN_140005690(&local_68);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = 1;
    if ((uVar1 & 0xfffffffc) == 0) {
      uVar3 = (&DAT_140139080)[(uint)uVar1 & 3];
    }
  }
  return uVar3;
}

