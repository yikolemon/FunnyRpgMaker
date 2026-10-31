/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800819c8 */

void FUN_1800819c8(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong local_38 [2];
  
  local_38[1] = 0xfffffffffffffffe;
  param_1[2] = 0;
  param_1[3] = 7;
  if (param_4 < 0x7fffffffffffffff) {
    if (param_4 < 8) {
      bVar4 = false;
    }
    else {
      local_38[0] = 10;
      if (10 < (param_4 | 7)) {
        local_38[0] = param_4 | 7;
      }
      if (0x7ffffffffffffffd < local_38[0]) {
        local_38[0] = 0x7ffffffffffffffe;
      }
      uVar1 = FUN_1800013b6(param_1,local_38);
      *param_1 = uVar1;
      param_1[3] = local_38[0];
      bVar4 = 7 < local_38[0];
    }
    puVar2 = param_1;
    if (bVar4) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_4 != 0) {
      uVar3 = 0;
      do {
        *(short *)((longlong)puVar2 + uVar3 * 2) = (short)*(char *)(param_2 + uVar3);
        uVar3 = uVar3 + 1;
      } while (param_4 != uVar3);
    }
    param_1[2] = param_4;
    *(undefined2 *)((longlong)puVar2 + param_4 * 2) = 0;
    local_38[0] = 0;
    FUN_180081adc(local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800013a5();
}

