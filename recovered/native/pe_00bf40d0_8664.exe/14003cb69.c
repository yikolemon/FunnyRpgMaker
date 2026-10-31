/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cb69 */

void FUN_14003cb69(longlong param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  if ((*param_2 == 0) && (uVar2 = FUN_14004616f(param_1), (char)uVar2 == '\0')) {
    iVar3 = 1;
    bVar4 = true;
    do {
      cVar1 = *(char *)(param_1 + 0x1f0);
      if (cVar1 == '\x1b') {
        if (bVar4) {
          return;
        }
      }
      else {
        if (cVar1 == 'Y') {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            return;
          }
        }
        else {
          if (cVar1 != 'X') goto LAB_14003cbaf;
          iVar3 = iVar3 + 1;
        }
        bVar4 = iVar3 == 1;
      }
LAB_14003cbaf:
      uVar2 = FUN_14004616f(param_1);
    } while ((char)uVar2 == '\0');
  }
  return;
}

