/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801623f6 */

undefined8 FUN_1801623f6(undefined8 param_1,char *param_2,longlong param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 8) == 0) {
    if (*param_2 == '\x01') {
      FUN_180162e4c(param_2,param_1);
    }
    else {
      FUN_180057354(param_1);
    }
  }
  else if (*param_2 == '\x01') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_18004c358(local_38,0);
    FUN_1800dd190(param_2,local_48,param_3,local_38);
    FUN_1801623f6(param_1,local_48,&local_58);
    FUN_1800137c6(local_48);
    FUN_1800137c6(local_38);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1801623f6(param_1,param_2);
  }
  return param_1;
}

