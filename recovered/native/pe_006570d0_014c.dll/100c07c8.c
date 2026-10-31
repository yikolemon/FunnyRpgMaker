/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c07c8 */

void __thiscall FUN_100c07c8(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_f8 [4];
  undefined4 *local_f4;
  int *local_f0;
  int *local_ec;
  uint local_e8;
  int *local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  int local_88;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_f8;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c4d30;
  local_20 = ExceptionList;
  local_e0 = param_1 + 0x17;
  ExceptionList = &local_20;
  local_f4 = param_1;
  FUN_100446d6();
  local_18 = 0;
  FUN_1007eb1c(param_2,0x20,0x40,1);
  local_18 = 1;
  if (local_88 != 0) {
    local_f0 = (int *)FUN_100b3d86(1);
    local_ec = (int *)0x1;
    FUN_1007e6c8(&local_ec,4,0);
    local_ec = (int *)((local_f0[1] - *local_f0 >> 4) * -0x55555555);
    FUN_1007e6c8(&local_ec,4,0);
    local_dc = (undefined4 *)local_f0[1];
    for (local_f4 = (undefined4 *)*local_f0; local_f4 != local_dc; local_f4 = local_f4 + 0xc) {
      local_e8 = local_f4[5];
      local_f0 = (int *)*local_f4;
      local_ec = (int *)local_f4[4];
      local_e4 = local_ec;
      FUN_1007e6c8(&local_ec,4,0);
      piVar1 = local_f0;
      if (local_e8 < 0x10) {
        piVar1 = local_f4;
      }
      FUN_1007e6c8(piVar1,local_e4,0);
      local_e8 = local_f4[0xb];
      local_e4 = (int *)local_f4[6];
      local_f0 = (int *)local_f4[10];
      local_ec = local_f0;
      FUN_1007e6c8(&local_ec,4,0);
      piVar1 = local_f4 + 6;
      if (0xf < local_e8) {
        piVar1 = local_e4;
      }
      FUN_1007e6c8(piVar1,local_f0,0);
    }
  }
  local_18 = 0xffffffff;
  FUN_1007eba6();
  FUN_1022c200(local_e0);
  ExceptionList = local_20;
  return;
}

