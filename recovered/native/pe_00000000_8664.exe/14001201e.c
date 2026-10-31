/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001201e */

longlong FUN_14001201e(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    FUN_14000fd22(local_38);
    FUN_14000a108(*param_1,local_38);
    lVar2 = *param_1;
  }
  else {
    pcVar1 = *(char **)(param_1[2] + -8);
    if (*pcVar1 == '\x02') {
      FUN_1400120e8(*(undefined8 *)(pcVar1 + 8));
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      FUN_14000fd22(local_28);
      FUN_14000a108(param_1[4],local_28);
      lVar2 = param_1[4];
    }
  }
  return lVar2;
}

