/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043286 */

int * FUN_10043286(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 *local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  int local_30;
  undefined4 local_2c;
  undefined1 local_25;
  float *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a530;
  local_1c = ExceptionList;
  puVar3 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  ExceptionList = &local_1c;
  uVar1 = FUN_1001c721(puVar3,param_2[4]);
  FUN_1004340a(&local_3c,param_2,uVar1);
  if (local_38 == 0) {
    local_2c = uVar1;
    if (local_24[2] == 4.3333423e-35) {
                    /* WARNING: Subroutine does not return */
      FUN_10228490("unordered_map/set too long");
    }
    local_44 = param_2;
    FUN_10043460(local_24 + 1,&DAT_102910a0,&local_44,&local_25);
    local_14 = 0;
    fVar4 = (float)((double)((ulonglong)((int)local_24[2] + 1) | (ulonglong)DAT_1028f6b0) -
                   DAT_1028f6b0) /
            (float)((double)((ulonglong)(uint)local_24[7] | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0)
    ;
    if (*local_24 <= fVar4 && fVar4 != *local_24) {
      FUN_1004350c();
      FUN_1004340a(&local_44,local_30 + 8,local_2c);
      local_38 = local_40;
      local_3c = local_44;
    }
    iVar2 = local_30;
    local_30 = 0;
    iVar2 = FUN_10033d76(local_2c,local_3c,iVar2);
    *param_1 = iVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    local_14 = 0xffffffff;
    FUN_1004359e();
  }
  else {
    *param_1 = local_38;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  ExceptionList = local_1c;
  return param_1;
}

