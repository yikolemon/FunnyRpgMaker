/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140068455 */

void FUN_140068455(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x48d4) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x48d5) = 1;
    FUN_14006807d(param_1,(int)param_1[0x926],*(int *)((longlong)param_1 + 0x4934));
    if ((char)param_1[0x927] != '\0') {
      FUN_140069545(param_1,param_1 + 2,(int *)(param_1 + 0x922),param_1[0x923],'\x01');
    }
    *(undefined1 *)((longlong)param_1 + 0x48d7) = 1;
    *(undefined2 *)((longlong)param_1 + 0x48d4) = 0;
    *(undefined1 *)(param_1 + 0x927) = 0;
  }
  return;
}

