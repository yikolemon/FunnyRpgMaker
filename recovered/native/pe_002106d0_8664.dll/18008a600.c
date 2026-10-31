/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008a600 */

longlong FUN_18008a600(longlong *param_1,undefined1 *param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    FUN_180081b9a(local_38,*param_2);
    FUN_1800856c4(*param_1,local_38);
    lVar2 = *param_1;
  }
  else {
    pcVar1 = *(char **)(param_1[2] + -8);
    if (*pcVar1 == '\x02') {
      FUN_18008a6d0(*(undefined8 *)(pcVar1 + 8));
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      FUN_180081b9a(local_28,*param_2);
      FUN_1800856c4(param_1[4],local_28);
      lVar2 = param_1[4];
    }
  }
  return lVar2;
}

