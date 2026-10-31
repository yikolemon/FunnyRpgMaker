/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100632d2 */

int * FUN_100632d2(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_2c;
  float *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2090;
  local_1c = ExceptionList;
  puVar3 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  ExceptionList = &local_1c;
  uVar1 = FUN_1001c721(puVar3,param_2[4]);
  FUN_1004340a(&local_38,param_2,uVar1);
  if (local_34 == 0) {
    local_24 = uVar1;
    if (local_28[2] == 3.4391604e-36) {
                    /* WARNING: Subroutine does not return */
      FUN_10228490("unordered_map/set too long");
    }
    FUN_10066c2a(local_28 + 1,param_2,param_3);
    local_14 = 0;
    fVar4 = (float)((double)((ulonglong)((int)local_28[2] + 1) | (ulonglong)DAT_1028f6b0) -
                   DAT_1028f6b0) /
            (float)((double)((ulonglong)(uint)local_28[7] | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0)
    ;
    uVar1 = local_24;
    if (*local_28 <= fVar4 && fVar4 != *local_28) {
      FUN_10066cd0();
      uVar1 = local_24;
      FUN_1004340a(&local_40,local_2c + 8,local_24);
      local_34 = local_3c;
      local_38 = local_40;
    }
    iVar2 = local_2c;
    local_2c = 0;
    iVar2 = FUN_10033d76(uVar1,local_38,iVar2);
    *param_1 = iVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    local_14 = 0xffffffff;
    FUN_10066d62();
  }
  else {
    *param_1 = local_34;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  ExceptionList = local_1c;
  return param_1;
}

