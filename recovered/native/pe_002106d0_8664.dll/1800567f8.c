/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800567f8 */

longlong FUN_1800567f8(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    FUN_18004c358(local_38,0);
    FUN_1800500c4(*param_1,local_38);
    lVar2 = *param_1;
  }
  else {
    pcVar1 = *(char **)(param_1[2] + -8);
    if (*pcVar1 == '\x02') {
      FUN_1800568c6(*(undefined8 *)(pcVar1 + 8));
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      FUN_18004c358(local_28,0);
      FUN_1800500c4(param_1[4],local_28);
      lVar2 = param_1[4];
    }
  }
  return lVar2;
}

