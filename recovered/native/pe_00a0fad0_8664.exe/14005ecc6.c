/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005ecc6 */

void FUN_14005ecc6(longlong param_1,undefined8 param_2,char param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_5c [44];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = FUN_1401174fc();
  FUN_1400da4c0(local_5c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 == '\0') {
    puVar4 = *(undefined1 **)(lVar2 + 0x10);
  }
  else {
    puVar4 = &DAT_1401728de;
  }
  local_30 = param_1;
  uVar3 = FUN_140024b0d(puVar4,local_5c);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_14005ee2f("false",local_5c);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_14005ee2f(&DAT_14016fed7,local_5c);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if (param_3 == '\0') {
    *(undefined2 *)(param_1 + 0x18) = **(undefined2 **)(lVar2 + 0x58);
    uVar1 = **(undefined2 **)(lVar2 + 0x60);
  }
  else {
    local_30 = 0;
    uVar1 = FUN_14005ef45(0x2e,local_5c);
    *(undefined2 *)(param_1 + 0x18) = uVar1;
    local_30 = 0;
    uVar1 = FUN_14005ef45(0x2c,local_5c);
  }
  *(undefined2 *)(param_1 + 0x1a) = uVar1;
  return;
}

