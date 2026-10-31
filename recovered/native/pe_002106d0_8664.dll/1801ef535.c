/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef535 */

void FUN_1801ef535(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((*param_2 == 0) && (cVar1 = FUN_1801f8b3b(), cVar1 == '\0')) {
    iVar2 = 1;
    bVar3 = true;
    do {
      cVar1 = *(char *)(param_1 + 0x1f0);
      if (cVar1 == '\x1b') {
        if (bVar3) {
          return;
        }
      }
      else {
        if (cVar1 == 'Y') {
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            return;
          }
        }
        else {
          if (cVar1 != 'X') goto LAB_1801ef57b;
          iVar2 = iVar2 + 1;
        }
        bVar3 = iVar2 == 1;
      }
LAB_1801ef57b:
      cVar1 = FUN_1801f8b3b(param_1);
    } while (cVar1 == '\0');
  }
  return;
}

