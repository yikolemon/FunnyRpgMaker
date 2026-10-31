/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10141def */

void FUN_10141def(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((param_1 != 0) && (DAT_1039d74c != 0)) {
    FUN_10103257(DAT_1039d74c + 0x2858,*(undefined4 *)(DAT_1039d74c + 4));
  }
  (*(code *)PTR_thunk_FUN_10274120_10389dcc)(param_1,DAT_1039d754);
  return;
}

