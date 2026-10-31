/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021e738 */

void FUN_14021e738(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 local_5c [44];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)FUN_140498a30();
  FUN_14044e840(local_5c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 == '\0') {
    pwVar4 = (wchar_t *)puVar2[2];
  }
  else {
    pwVar4 = L"pNonPic";
  }
  local_30 = param_1;
  uVar3 = FUN_14021e8f0(pwVar4,local_5c);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_14021e8f0("",local_5c);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  local_30 = param_1;
  uVar3 = FUN_14021e8f0("le",local_5c);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if (param_3 == '\0') {
    local_30 = 0;
    uVar1 = FUN_140217531(*(undefined1 *)*puVar2,local_5c);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    local_30 = 0;
    uVar1 = FUN_140217531(*(undefined1 *)puVar2[1],local_5c);
  }
  else {
    local_30 = 0;
    uVar1 = FUN_140217531(0x2e,local_5c);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    local_30 = 0;
    uVar1 = FUN_140217531(0x2c,local_5c);
  }
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  return;
}

