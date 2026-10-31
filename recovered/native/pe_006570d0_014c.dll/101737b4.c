/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101737b4 */

bool __fastcall FUN_101737b4(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = *(char **)(param_1 + 0xac);
  if (*(char **)(param_1 + 0xb0) <= pcVar2) {
    if (*(int *)(param_1 + 0x20) == 0) {
      return false;
    }
    FUN_10170e8c();
    pcVar2 = *(char **)(param_1 + 0xac);
  }
  pcVar1 = pcVar2 + 1;
  *(char **)(param_1 + 0xac) = pcVar1;
  bVar3 = false;
  if (*pcVar2 == 'G') {
    if (*(char **)(param_1 + 0xb0) <= pcVar1) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return false;
      }
      FUN_10170e8c();
      pcVar1 = *(char **)(param_1 + 0xac);
    }
    pcVar2 = pcVar1 + 1;
    *(char **)(param_1 + 0xac) = pcVar2;
    if (*pcVar1 == 'I') {
      if (*(char **)(param_1 + 0xb0) <= pcVar2) {
        if (*(int *)(param_1 + 0x20) == 0) {
          return false;
        }
        FUN_10170e8c();
        pcVar2 = *(char **)(param_1 + 0xac);
      }
      pcVar1 = pcVar2 + 1;
      *(char **)(param_1 + 0xac) = pcVar1;
      if (*pcVar2 == 'F') {
        if (*(char **)(param_1 + 0xb0) <= pcVar1) {
          if (*(int *)(param_1 + 0x20) == 0) {
            return false;
          }
          FUN_10170e8c();
          pcVar1 = *(char **)(param_1 + 0xac);
        }
        pcVar2 = pcVar1 + 1;
        *(char **)(param_1 + 0xac) = pcVar2;
        if (*pcVar1 == '8') {
          if (*(char **)(param_1 + 0xb0) <= pcVar2) {
            if (*(int *)(param_1 + 0x20) == 0) {
              return false;
            }
            FUN_10170e8c();
            pcVar2 = *(char **)(param_1 + 0xac);
          }
          pcVar1 = pcVar2 + 1;
          *(char **)(param_1 + 0xac) = pcVar1;
          if ((*pcVar2 == '9') || (*pcVar2 == '7')) {
            if (*(char **)(param_1 + 0xb0) <= pcVar1) {
              if (*(int *)(param_1 + 0x20) == 0) {
                return false;
              }
              FUN_10170e8c();
              pcVar1 = *(char **)(param_1 + 0xac);
            }
            *(char **)(param_1 + 0xac) = pcVar1 + 1;
            bVar3 = *pcVar1 == 'a';
          }
        }
      }
    }
  }
  return bVar3;
}

