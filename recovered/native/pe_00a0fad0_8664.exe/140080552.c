/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140080552 */

undefined8 * FUN_140080552(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 local_158 [16];
  undefined1 local_148 [240];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x70) == 0) && (cVar4 = FUN_1400802a2(param_1), cVar4 == '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  uVar6 = FUN_1400806fc(param_1,&local_38,param_1 + 0x60);
  if ((*(int *)(param_1 + 0xa4) == 3) || (cVar4 = FUN_140080870(uVar6,&local_38), cVar4 != '\0')) {
    uVar5 = local_28;
    local_28 = 0;
    uVar6 = (undefined4)local_38;
    uVar1 = local_38._4_4_;
    uVar2 = (undefined4)uStack_30;
    uVar3 = uStack_30._4_4_;
    local_38 = 0;
    uStack_30 = 0;
    *(undefined4 *)param_2 = uVar6;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    param_2[2] = uVar5;
  }
  else {
    uVar5 = FUN_1400554d2();
    FUN_14000169c(local_58,"inv_prot_key_error_msg");
    uVar5 = FUN_1400aebe4(uVar5,local_58);
    FUN_140052d74(local_158,&DAT_1401cc978,uVar5);
    FUN_140052e4f(local_148);
    FUN_140052e84(local_158);
    FUN_1400017de(local_58);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  FUN_140016e5c(&local_38);
  return param_2;
}

