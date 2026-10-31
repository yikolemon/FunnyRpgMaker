/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dfa68 */

undefined8 * FUN_1800dfa68(undefined8 *param_1,char *param_2,longlong param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 8) == 0) {
    if (*param_2 == '\x03') {
      FUN_180017024(param_2,param_1);
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
    }
  }
  else if (*param_2 == '\x01') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_18004c358(local_38,0);
    FUN_1800dd190(param_2,local_48,param_3,local_38);
    FUN_1800dfa68(param_1,local_48,&local_58);
    FUN_1800137c6(local_48);
    FUN_1800137c6(local_38);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1800dfa68(param_1,param_2);
  }
  return param_1;
}

