/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800df105 */

undefined8 FUN_1800df105(undefined8 param_1,char *param_2,longlong param_3)

{
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38 [3];
  
  local_38[2] = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 8) == 0) {
    if ((byte)(*param_2 - 5U) < 3) {
      FUN_1800136fa(param_1,param_2);
    }
    else {
      local_38[0] = local_38[0] & 0xffffffff00000000;
      FUN_1800df9f4(param_1);
    }
  }
  else if (*param_2 == '\x01') {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_18004c358(local_48,0);
    FUN_1800dd190(param_2,local_58,param_3,local_48);
    FUN_1800df105(param_1,local_58,local_38);
    FUN_1800137c6(local_58);
    FUN_1800137c6(local_48);
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_1800df105(param_1,param_2);
  }
  return param_1;
}

