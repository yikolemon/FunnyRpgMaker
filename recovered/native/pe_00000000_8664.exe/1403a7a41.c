/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a7a41 */

void FUN_1403a7a41(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,int param_6
                  ,int param_7,int param_8)

{
  if (0 < param_8) {
    do {
      FUN_1404b97c0((longlong)
                    ((*(int *)(param_4 + 0x1c) * param_6 + param_5) * *(int *)(param_4 + 0x24)) +
                    *(longlong *)(param_4 + 0x28),
                    (longlong)(*(int *)(param_1 + 0x1c) * param_3 + param_2) *
                    (longlong)*(int *)(param_1 + 0x24) + *(longlong *)(param_1 + 0x28),
                    (longlong)(*(int *)(param_4 + 0x24) * param_7));
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}

