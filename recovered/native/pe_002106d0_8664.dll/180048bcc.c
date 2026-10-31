/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180048bcc */

void FUN_180048bcc(longlong param_1,undefined8 param_2,char param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_5c [44];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = FUN_180287560();
  FUN_18023d370(local_5c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 == '\0') {
    puVar4 = *(undefined1 **)(lVar2 + 0x10);
  }
  else {
    puVar4 = &DAT_1803861e4;
  }
  local_30 = param_1;
  uVar3 = FUN_18000d420(puVar4,local_5c);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_180048d35("false",local_5c);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_180048d35("true",local_5c);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if (param_3 == '\0') {
    *(undefined2 *)(param_1 + 0x18) = **(undefined2 **)(lVar2 + 0x58);
    uVar1 = **(undefined2 **)(lVar2 + 0x60);
  }
  else {
    local_30 = 0;
    uVar1 = FUN_180048e4b(0x2e,local_5c);
    *(undefined2 *)(param_1 + 0x18) = uVar1;
    local_30 = 0;
    uVar1 = FUN_180048e4b(0x2c,local_5c);
  }
  *(undefined2 *)(param_1 + 0x1a) = uVar1;
  return;
}

