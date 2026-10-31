/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180231eb4 */

void FUN_180231eb4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)param_4[1];
  iVar2 = FUN_180231fd9(*param_4);
  if (iVar2 == 0) {
    *(undefined4 *)(local_30 + 4) = 3;
    *local_30 = *puVar1;
    local_30[2] = *param_1;
    local_30[3] = *param_2;
    local_30[1] = *param_3;
    local_30[5] = puVar1[1];
    puVar1[1] = local_30;
    *puVar1 = *param_3;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

