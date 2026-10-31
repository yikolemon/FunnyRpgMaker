/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006f96e */

longlong FUN_14006f96e(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    FUN_140057552(local_38,0);
    FUN_14005783a(*param_1,local_38);
    lVar2 = *param_1;
  }
  else {
    pcVar1 = *(char **)(param_1[2] + -8);
    if (*pcVar1 == '\x02') {
      FUN_14006fa3c(*(undefined8 *)(pcVar1 + 8));
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      FUN_140057552(local_28,0);
      FUN_14005783a(param_1[4],local_28);
      lVar2 = param_1[4];
    }
  }
  return lVar2;
}

