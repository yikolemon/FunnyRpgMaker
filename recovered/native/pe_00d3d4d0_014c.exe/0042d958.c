/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042d958 */

float10 FUN_0042d958(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  float10 fVar3;
  double dVar4;
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
  local_1c = &LAB_0042e780;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  uVar2 = FUN_00424fb4(param_1);
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_00424fc5(param_1);
    if (bVar1) {
      local_170 = 0.0;
      dVar4 = DAT_004d7da0;
      if (*(char *)(param_1 + 0x24) != '\0') goto code_r0x0042da5c;
    }
    else {
      dVar4 = DAT_004dc9b0;
      if (*(char *)(param_1 + 0x24) == '\0') {
        dVar4 = DAT_004dca68;
      }
    }
    local_170 = dVar4;
  }
  else {
    FUN_00426746(local_150);
    local_18 = 0;
    if (local_ec == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0047f9b0();
    }
    fVar3 = (float10)(**(code **)(*local_ec + 8))();
    fVar3 = FUN_0042e80c((double)fVar3,4.5);
    local_18 = 0xffffffff;
    FUN_0041ba34(local_150);
    local_170 = (double)fVar3;
  }
code_r0x0042da5c:
  ExceptionList = local_20;
  return (float10)local_170;
}

