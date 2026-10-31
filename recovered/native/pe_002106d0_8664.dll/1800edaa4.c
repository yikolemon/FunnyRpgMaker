/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800edaa4 */

void FUN_1800edaa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b8 = *param_2;
  local_b0 = param_2[1];
  uStack_a8 = param_2[2];
  local_a0 = param_2[3];
  local_98 = *param_3;
  local_90 = *(undefined4 *)(param_3 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_88 = *(undefined4 *)(param_3 + 2);
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x14);
  local_80 = param_3[3];
  uVar1 = *param_4;
  lVar4 = param_4[1];
  local_50 = param_1;
  cVar2 = FUN_18005324c();
  if (cVar2 == '\0') {
    do {
      uVar3 = FUN_1800e04aa(&local_b8);
      FUN_180017024(uVar3,local_78);
      FUN_1800edcd8(uVar1,&local_58,lVar4,local_78);
      lVar4 = local_58 + 0x20;
      FUN_180001ef2(local_78);
      FUN_1800531d0(&local_b8);
      cVar2 = FUN_18005324c(&local_b8,&local_98);
    } while (cVar2 == '\0');
  }
  *param_4 = uVar1;
  param_4[1] = lVar4;
  *local_50 = *param_4;
  local_50[1] = param_4[1];
  return;
}

