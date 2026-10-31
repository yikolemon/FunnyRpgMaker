/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006fe5e */

longlong FUN_14006fe5e(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    FUN_14006c892(local_38);
    FUN_14005783a(*param_1,local_38);
    lVar2 = *param_1;
  }
  else {
    pcVar1 = *(char **)(param_1[2] + -8);
    if (*pcVar1 == '\x02') {
      FUN_14006ff28(*(undefined8 *)(pcVar1 + 8));
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      FUN_14006c892(local_28);
      FUN_14005783a(param_1[4],local_28);
      lVar2 = param_1[4];
    }
  }
  return lVar2;
}

