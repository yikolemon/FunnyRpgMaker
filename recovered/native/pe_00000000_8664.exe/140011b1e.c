/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140011b1e */

longlong FUN_140011b1e(longlong *param_1,undefined1 *param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    FUN_140005640(local_38,*param_2);
    FUN_14000a108(*param_1,local_38);
    lVar2 = *param_1;
  }
  else {
    pcVar1 = *(char **)(param_1[2] + -8);
    if (*pcVar1 == '\x02') {
      FUN_140011bee(*(undefined8 *)(pcVar1 + 8));
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      FUN_140005640(local_28,*param_2);
      FUN_14000a108(param_1[4],local_28);
      lVar2 = param_1[4];
    }
  }
  return lVar2;
}

