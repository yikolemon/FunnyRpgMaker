/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180236fc3 */

int FUN_180236fc3(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1801ce63e(*param_1,*(undefined4 *)(param_1 + 0xe));
  if (iVar1 == 0) {
    FUN_1802370fc(param_1 + 3);
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[3] = (longlong)param_1 + 0x74;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[5] = (longlong)param_1 + 0x1074;
    param_1[0x410] = (longlong)param_1 + 0x2074;
    param_1[0x40f] = (longlong)param_1 + 0x2074;
    *(undefined4 *)((longlong)param_1 + 0x2074) = 0;
  }
  return iVar1;
}

