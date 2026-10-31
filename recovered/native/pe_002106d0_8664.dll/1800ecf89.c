/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ecf89 */

void FUN_1800ecf89(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_e8 = *param_2;
  local_e0 = param_2[1];
  uStack_d8 = param_2[2];
  local_d0 = param_2[3];
  local_c8 = *param_3;
  local_b0 = param_3[3];
  local_c0 = *(undefined4 *)(param_3 + 1);
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
  uStack_b8 = *(undefined4 *)(param_3 + 2);
  uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar1 = *param_4;
  lVar4 = param_4[1];
  local_50 = param_1;
  while( true ) {
    cVar2 = FUN_18005324c(&local_e8,&local_c8);
    if (cVar2 != '\0') break;
    uVar3 = FUN_1800e04aa(&local_e8);
    FUN_1800ed2b8(uVar3,local_a8);
    FUN_1800ede5e(uVar1,&local_58,lVar4,local_a8);
    lVar4 = local_58;
    FUN_180060538(local_70);
    FUN_180060538(local_88);
    lVar4 = lVar4 + 0x50;
    FUN_180001ef2(local_a8);
    FUN_1800531d0(&local_e8);
  }
  *param_4 = uVar1;
  param_4[1] = lVar4;
  *local_50 = *param_4;
  local_50[1] = param_4[1];
  return;
}

