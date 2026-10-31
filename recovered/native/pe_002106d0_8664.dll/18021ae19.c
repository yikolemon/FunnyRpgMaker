/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021ae19 */

void FUN_18021ae19(longlong param_1)

{
  if (*(char *)(param_1 + 0x48d4) != '\0') {
    *(undefined1 *)(param_1 + 0x48d5) = 1;
    FUN_18021aa41(param_1,*(undefined4 *)(param_1 + 0x4930),*(undefined4 *)(param_1 + 0x4934));
    if (*(char *)(param_1 + 0x4938) != '\0') {
      FUN_18021bf05(param_1,param_1 + 0x10,param_1 + 0x4910,*(undefined8 *)(param_1 + 0x4918),1);
    }
    *(undefined1 *)(param_1 + 0x48d7) = 1;
    *(undefined2 *)(param_1 + 0x48d4) = 0;
    *(undefined1 *)(param_1 + 0x4938) = 0;
  }
  return;
}

