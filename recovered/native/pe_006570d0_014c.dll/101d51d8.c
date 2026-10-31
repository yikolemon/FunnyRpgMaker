/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d51d8 */

float10 FUN_101d51d8(int param_1)

{
  char cVar1;
  float10 fVar2;
  double dVar3;
  double local_170;
  int *local_ec;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_18 = 0xffffffff;
  local_1c = &LAB_101d6090;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  cVar1 = FUN_101ca0fc();
  if (cVar1 == '\0') {
    cVar1 = FUN_101ca10d();
    if (cVar1 == '\0') {
      dVar3 = DAT_10308420;
      if (*(char *)(param_1 + 0x24) == '\0') {
        dVar3 = DAT_103084d8;
      }
    }
    else {
      local_170 = 0.0;
      dVar3 = DAT_103037f0;
      if (*(char *)(param_1 + 0x24) != '\0') goto code_r0x101d52dc;
    }
    local_170 = dVar3;
  }
  else {
    FUN_101cdfdc();
    local_18 = 0;
    if (local_ec == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10228590();
    }
    fVar2 = (float10)(**(code **)(*local_ec + 8))();
    fVar2 = (float10)FUN_101d611c((double)fVar2);
    local_18 = 0xffffffff;
    FUN_1019798e();
    local_170 = (double)fVar2;
  }
code_r0x101d52dc:
  ExceptionList = local_20;
  return (float10)local_170;
}

