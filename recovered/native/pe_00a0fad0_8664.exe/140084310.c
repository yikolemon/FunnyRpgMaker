/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140084310 */

undefined4 *
FUN_140084310(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 extraout_XMM0_Da;
  undefined1 local_40 [4];
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  cVar6 = FUN_140082ca4(0,param_3,&local_38,local_40);
  uVar5 = local_28;
  if (cVar6 == '\0') {
    local_28 = 0;
    uVar1 = (undefined4)local_38;
    uVar2 = local_38._4_4_;
    uVar3 = (undefined4)uStack_30;
    uVar4 = uStack_30._4_4_;
    local_38 = 0;
    uStack_30 = 0;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined8 *)(param_2 + 4) = uVar5;
  }
  else {
    local_3a = *(undefined1 *)(param_4 + 1);
    local_3c = *param_4;
    FUN_140083902(extraout_XMM0_Da,param_2,&local_38);
  }
  FUN_140016e5c(&local_38);
  return param_2;
}

