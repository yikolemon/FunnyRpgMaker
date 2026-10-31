/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089508 */

void FUN_140089508(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined4 local_38;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  puVar2 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  iVar1 = FUN_1400dcbb0(puVar2,local_40,9,0xffffffff);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = local_38;
    FUN_1400895a4(param_1,param_2);
    *(undefined4 *)(param_1 + 0x28) = *param_3;
    *param_1 = 1;
    if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_68)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140041f39("file_size",iVar1,param_2);
}

