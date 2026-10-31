/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005584 */

void FUN_140005584(int *param_1)

{
  FUN_140086690((longlong)param_1);
  if (*(LPVOID *)(param_1 + 0x16) != (LPVOID)0x0) {
    thunk_FUN_1400a1290(*(LPVOID *)(param_1 + 0x16));
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (*(LPVOID *)(param_1 + 0x12) != (LPVOID)0x0) {
    thunk_FUN_1400a1290(*(LPVOID *)(param_1 + 0x12));
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (*(LPVOID *)(param_1 + 0xe) != (LPVOID)0x0) {
    thunk_FUN_1400a1290(*(LPVOID *)(param_1 + 0xe));
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (*(LPVOID *)(param_1 + 10) != (LPVOID)0x0) {
    thunk_FUN_1400a1290(*(LPVOID *)(param_1 + 10));
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(LPVOID *)(param_1 + 6) != (LPVOID)0x0) {
    thunk_FUN_1400a1290(*(LPVOID *)(param_1 + 6));
  }
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(LPVOID *)(param_1 + 2) != (LPVOID)0x0) {
    thunk_FUN_1400a1290(*(LPVOID *)(param_1 + 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1400864b0(param_1);
  return;
}

