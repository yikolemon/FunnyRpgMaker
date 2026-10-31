/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002e47c */

void FUN_14002e47c(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_1400312b6(param_2,param_1);
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x20);
  FUN_14003138c(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_140031466(param_2,*(undefined1 *)(param_1 + 0x22));
  *(undefined1 *)(param_2 + 0x23) = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_2 + 0x25) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(param_2 + 0x26) = *(undefined1 *)(param_1 + 0x26);
  cVar1 = *(char *)(param_1 + 0x27);
  if (cVar1 != *(char *)(param_2 + 0x27)) {
    if (((*(char *)(param_2 + 0x27) == '\0') && (*(int *)(param_2 + 0x1b4) == 0x20000000)) &&
       (1 < *(int *)(param_2 + 0x1b0))) {
      *(int *)(param_2 + 0x1b4) = *(int *)(param_2 + 0x1b0);
    }
    *(char *)(param_2 + 0x27) = cVar1;
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}

