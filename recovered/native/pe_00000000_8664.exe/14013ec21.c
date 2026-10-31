/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013ec21 */

void FUN_14013ec21(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if ((*param_2 == 0) && (cVar1 = FUN_140148227(), cVar1 == '\0')) {
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
          if (cVar1 != 'X') goto LAB_14013ec67;
          iVar2 = iVar2 + 1;
        }
        bVar3 = iVar2 == 1;
      }
LAB_14013ec67:
      cVar1 = FUN_140148227(param_1);
    } while (cVar1 == '\0');
  }
  return;
}

