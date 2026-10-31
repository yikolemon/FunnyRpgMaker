/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007f354 */

void FUN_14007f354(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined1 *puVar6;
  undefined4 local_3b8 [22];
  undefined1 local_360 [320];
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined8 local_210;
  ulonglong local_208;
  undefined1 local_1c8 [296];
  longlong local_a0;
  longlong local_98;
  int local_88 [8];
  undefined8 ***local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar3 = &local_220;
  FUN_140055d5e(param_1 + 7,puVar3);
  if (7 < local_208) {
    puVar3 = (undefined4 *)CONCAT44(uStack_21c,local_220);
  }
  FUN_14000ffc0(&DAT_1401cc780,puVar3,local_210);
  FUN_14007dcb3(local_68,param_2,&local_220);
  local_48 = (uint)local_48._3_1_ << 0x18;
  local_88[0] = 3;
  local_44 = 1;
  FUN_140088778(local_3b8,local_68,&local_44,local_88,&local_48);
  local_88[0] = (int)((ulonglong)(param_1[1] - *param_1) >> 5) * -0x33333333;
  FUN_14009e652(local_360);
  lVar2 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar2; lVar4 = lVar4 + 0xa0) {
    FUN_1400aabd8(lVar4,local_3b8);
  }
  FUN_140088af0(local_3b8);
  FUN_140005690(local_68);
  FUN_140005690(&local_220);
  FUN_140055d5e(param_1 + 0xb,local_68);
  ppppuVar5 = local_68;
  if (7 < local_50) {
    ppppuVar5 = (undefined8 ****)local_68[0];
  }
  FUN_14000ffc0(&DAT_1401cc780,ppppuVar5,local_58);
  FUN_14007dcb3(local_88,param_2,local_68);
  local_220 = 2;
  local_44 = 1;
  FUN_140088778(local_3b8,local_88,&local_44,&local_220,&DAT_1401649dc);
  local_44 = 2;
  local_48 = 1;
  puVar3 = &local_220;
  FUN_1400a023e(puVar3);
  FUN_1400a03e4(local_3b8,&DAT_1401cc810);
  plVar1 = param_1 + 6;
  FUN_14008cb80(local_360,plVar1);
  local_44 = (int)((ulonglong)(param_1[1] - *param_1) >> 5) * -0x33333333;
  puVar6 = local_1c8;
  if ((char)param_1[6] != -0x3c) {
    puVar6 = local_360;
    puVar3 = local_3b8;
  }
  FUN_14009e652(puVar6);
  lVar2 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar2; lVar4 = lVar4 + 0xa0) {
    FUN_1400aae9c(lVar4,puVar3);
  }
  FUN_14008cb80(puVar6,plVar1);
  if ((char)*plVar1 == -0x3c) {
    FUN_1400a07d2(&local_220);
    for (; local_a0 != local_98; local_a0 = local_a0 + 1) {
      FUN_14008cb80(local_360,local_a0);
    }
  }
  FUN_140088af0(&local_220);
  FUN_140088af0(local_3b8);
  FUN_140005690(local_88);
  FUN_140005690(local_68);
  return;
}

