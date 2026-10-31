/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001c14e */

void FUN_14001c14e(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 local_5c [44];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)FUN_1401a5458();
  FUN_14018a120(local_5c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 == '\0') {
    puVar4 = (undefined *)puVar2[2];
  }
  else {
    puVar4 = &DAT_140edcdbf;
  }
  local_30 = param_1;
  uVar3 = FUN_14001c2f1(puVar4,local_5c);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_14001c2f1("false",local_5c);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_14001c2f1("true",local_5c);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if (param_3 == '\0') {
    local_30 = 0;
    uVar1 = FUN_14001c33d(*(undefined1 *)*puVar2,local_5c);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    local_30 = 0;
    uVar1 = FUN_14001c33d(*(undefined1 *)puVar2[1],local_5c);
  }
  else {
    local_30 = 0;
    uVar1 = FUN_14001c33d(0x2e,local_5c);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    local_30 = 0;
    uVar1 = FUN_14001c33d(0x2c,local_5c);
  }
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  return;
}

