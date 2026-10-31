/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180179093 */

bool FUN_180179093(longlong param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = *(char **)(param_1 + 0xc0);
  if (*(char **)(param_1 + 200) <= pcVar3) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return false;
    }
    FUN_180176673(param_1);
    pcVar3 = *(char **)(param_1 + 0xc0);
  }
  pcVar2 = pcVar3 + 1;
  *(char **)(param_1 + 0xc0) = pcVar2;
  bVar4 = false;
  if (*pcVar3 == 'B') {
    if (*(char **)(param_1 + 200) <= pcVar2) {
      if (*(int *)(param_1 + 0x30) == 0) {
        return false;
      }
      FUN_180176673(param_1);
      pcVar2 = *(char **)(param_1 + 0xc0);
    }
    *(char **)(param_1 + 0xc0) = pcVar2 + 1;
    if (*pcVar2 == 'M') {
      FUN_180179168(param_1);
      FUN_18017918c(param_1);
      FUN_18017918c(param_1);
      FUN_180179168(param_1);
      uVar1 = FUN_180179168(param_1);
      bVar4 = true;
      if (((0x38 < uVar1) || ((0x100010000001000U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)) &&
         (uVar1 != 0x6c)) {
        bVar4 = uVar1 == 0x7c;
      }
    }
  }
  return bVar4;
}

