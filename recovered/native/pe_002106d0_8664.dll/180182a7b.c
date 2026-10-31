/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180182a7b */

ulonglong FUN_180182a7b(char *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38 [3];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 8) == 0) {
    if (*param_1 == '\x04') {
      local_38[0] = local_38[0] & 0xffffffffffffff00;
      FUN_1800e06ec(&DAT_1802b0ea8,param_1,local_38);
      uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),(undefined1)local_38[0]);
    }
    else {
      uVar2 = 0;
    }
  }
  else if (*param_1 == '\x01') {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_18004c358(local_48,0);
    FUN_1800dd190(param_1,local_58,param_2,local_48);
    uVar1 = FUN_180182a7b(local_58,local_38);
    uVar2 = (ulonglong)uVar1;
    FUN_1800137c6(local_58);
    FUN_1800137c6(local_48);
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    uVar1 = FUN_180182a7b(param_1);
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2 & 0xffffffff;
}

