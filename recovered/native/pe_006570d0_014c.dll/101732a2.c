/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101732a2 */

bool __fastcall FUN_101732a2(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = *(char **)(param_1 + 0xac);
  if (*(char **)(param_1 + 0xb0) <= pcVar3) {
    if (*(int *)(param_1 + 0x20) == 0) {
      return false;
    }
    FUN_10170e8c();
    pcVar3 = *(char **)(param_1 + 0xac);
  }
  pcVar1 = pcVar3 + 1;
  *(char **)(param_1 + 0xac) = pcVar1;
  bVar4 = false;
  if (*pcVar3 == 'B') {
    if (*(char **)(param_1 + 0xb0) <= pcVar1) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return false;
      }
      FUN_10170e8c();
      pcVar1 = *(char **)(param_1 + 0xac);
    }
    *(char **)(param_1 + 0xac) = pcVar1 + 1;
    if (*pcVar1 == 'M') {
      FUN_10173352();
      FUN_1017336c();
      FUN_1017336c();
      FUN_10173352();
      iVar2 = FUN_10173352();
      if (iVar2 < 0x38) {
        if (iVar2 == 0xc) {
          return true;
        }
        if (iVar2 == 0x28) {
          return true;
        }
      }
      else {
        if (iVar2 == 0x38) {
          return true;
        }
        if (iVar2 == 0x6c) {
          return true;
        }
      }
      bVar4 = iVar2 == 0x7c;
    }
  }
  return bVar4;
}

