/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002496a */

void FUN_14002496a(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_5c [44];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)FUN_1401174fc();
  FUN_1400da4c0(local_5c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 == '\0') {
    puVar4 = (undefined1 *)puVar2[2];
  }
  else {
    puVar4 = &DAT_1401728de;
  }
  local_30 = param_1;
  uVar3 = FUN_140024b0d(puVar4,local_5c);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_140024b0d("false",local_5c);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_140024b0d(&DAT_14016fed7,local_5c);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if (param_3 == '\0') {
    local_30 = 0;
    uVar1 = FUN_14000d95d(*(undefined1 *)*puVar2,local_5c);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    local_30 = 0;
    uVar1 = FUN_14000d95d(*(undefined1 *)puVar2[1],local_5c);
  }
  else {
    local_30 = 0;
    uVar1 = FUN_14000d95d(0x2e,local_5c);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    local_30 = 0;
    uVar1 = FUN_14000d95d(0x2c,local_5c);
  }
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  return;
}

