/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042dc82 */

float10 FUN_0042dc82(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  float10 fVar3;
  double local_170;
  int local_150 [25];
  int *local_ec;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = &stack0xfffffe80;
  local_18 = 0xffffffff;
  local_1c = &LAB_0042e790;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  bVar1 = FUN_00424fc5(param_1);
  if (bVar1) {
    local_170 = DAT_004dc9b0;
    if (*(char *)(param_1 + 0x24) == '\0') {
      local_170 = DAT_004dc9b8;
    }
  }
  else {
    uVar2 = FUN_00424fb4(param_1);
    if ((char)uVar2 == '\0') {
      local_170 = DAT_004dc9b0;
      if (*(char *)(param_1 + 0x24) == '\0') {
        local_170 = DAT_004dca68;
      }
    }
    else {
      FUN_00427382(local_150);
      local_18 = 0;
      if (local_ec == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0047f9b0();
      }
      fVar3 = (float10)(**(code **)(*local_ec + 8))();
      fVar3 = FUN_0042e80c((double)fVar3,4.5);
      local_170 = (double)fVar3;
      local_18 = 0xffffffff;
      FUN_0041ba34(local_150);
    }
  }
  ExceptionList = local_20;
  return (float10)local_170;
}

