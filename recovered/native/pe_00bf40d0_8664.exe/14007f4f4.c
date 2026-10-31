/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f4f4 */

void FUN_14007f4f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)param_4[1];
  iVar2 = FUN_14007f619(*param_4,&local_30);
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
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

