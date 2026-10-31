/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017965e */

bool FUN_18017965e(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  
  pcVar2 = *(char **)(param_1 + 0xc0);
  if (*(char **)(param_1 + 200) <= pcVar2) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return false;
    }
    FUN_180176673(param_1);
    pcVar2 = *(char **)(param_1 + 0xc0);
  }
  pcVar1 = pcVar2 + 1;
  *(char **)(param_1 + 0xc0) = pcVar1;
  bVar3 = false;
  bVar4 = false;
  if (*pcVar2 == 'G') {
    if (*(char **)(param_1 + 200) <= pcVar1) {
      if (*(int *)(param_1 + 0x30) == 0) {
        return false;
      }
      FUN_180176673(param_1);
      pcVar1 = *(char **)(param_1 + 0xc0);
    }
    pcVar2 = pcVar1 + 1;
    *(char **)(param_1 + 0xc0) = pcVar2;
    if (*pcVar1 == 'I') {
      if (*(char **)(param_1 + 200) <= pcVar2) {
        if (*(int *)(param_1 + 0x30) == 0) {
          return false;
        }
        FUN_180176673(param_1);
        pcVar2 = *(char **)(param_1 + 0xc0);
      }
      pcVar1 = pcVar2 + 1;
      *(char **)(param_1 + 0xc0) = pcVar1;
      bVar4 = bVar3;
      if (*pcVar2 == 'F') {
        if (*(char **)(param_1 + 200) <= pcVar1) {
          if (*(int *)(param_1 + 0x30) == 0) {
            return false;
          }
          FUN_180176673(param_1);
          pcVar1 = *(char **)(param_1 + 0xc0);
        }
        pcVar2 = pcVar1 + 1;
        *(char **)(param_1 + 0xc0) = pcVar2;
        if (*pcVar1 == '8') {
          if (*(char **)(param_1 + 200) <= pcVar2) {
            if (*(int *)(param_1 + 0x30) == 0) {
              return false;
            }
            FUN_180176673(param_1);
            pcVar2 = *(char **)(param_1 + 0xc0);
          }
          pcVar1 = pcVar2 + 1;
          *(char **)(param_1 + 0xc0) = pcVar1;
          if ((*pcVar2 == '9') || (*pcVar2 == '7')) {
            if (*(char **)(param_1 + 200) <= pcVar1) {
              if (*(int *)(param_1 + 0x30) == 0) {
                return false;
              }
              FUN_180176673(param_1);
              pcVar1 = *(char **)(param_1 + 0xc0);
            }
            *(char **)(param_1 + 0xc0) = pcVar1 + 1;
            bVar4 = *pcVar1 == 'a';
          }
        }
      }
    }
  }
  return bVar4;
}

