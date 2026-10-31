/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000a00a */

void FUN_14000a00a(longlong param_1,undefined8 param_2,char param_3)

{
  WCHAR WVar1;
  longlong lVar2;
  undefined8 uVar3;
  LPWSTR pWVar4;
  char *pcVar5;
  UINT local_5c [11];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = FUN_140099d38();
  FUN_140088960((undefined8 *)local_5c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_3 == '\0') {
    pcVar5 = *(char **)(lVar2 + 0x10);
  }
  else {
    pcVar5 = "";
  }
  local_30 = param_1;
  uVar3 = FUN_14000a191(pcVar5);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  local_30 = param_1;
  pWVar4 = FUN_14000a1dd((byte *)"false",local_5c);
  *(LPWSTR *)(param_1 + 0x20) = pWVar4;
  local_30 = param_1;
  pWVar4 = FUN_14000a1dd(&DAT_14011b102,local_5c);
  *(LPWSTR *)(param_1 + 0x28) = pWVar4;
  if (param_3 == '\0') {
    *(undefined2 *)(param_1 + 0x18) = **(undefined2 **)(lVar2 + 0x58);
    WVar1 = **(WCHAR **)(lVar2 + 0x60);
  }
  else {
    local_30 = 0;
    WVar1 = FUN_14000a2f3(0x2e,local_5c);
    *(WCHAR *)(param_1 + 0x18) = WVar1;
    local_30 = 0;
    WVar1 = FUN_14000a2f3(0x2c,local_5c);
  }
  *(WCHAR *)(param_1 + 0x1a) = WVar1;
  return;
}

