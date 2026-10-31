/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180015eba */

longlong FUN_180015eba(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_24 = 0;
  cVar1 = FUN_180015f74(param_1,&local_24,4);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_180016162(&local_48,local_24);
    cVar1 = FUN_180015f74(param_1,local_48,local_24);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_2 + 0x18) = 0;
    }
    else {
      FUN_18001603c(param_2,&local_48);
    }
    FUN_180004cea(&local_48);
  }
  return param_2;
}

