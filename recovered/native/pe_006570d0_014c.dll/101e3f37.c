/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3f37 */

void __fastcall FUN_101e3f37(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_2 != 0) {
    return;
  }
  cVar1 = FUN_101eca99();
  if (cVar1 == '\0') {
    iVar2 = 1;
    bVar3 = true;
    do {
      cVar1 = *(char *)(param_1 + 0x148);
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
          if (cVar1 != 'X') goto LAB_101e3f72;
          iVar2 = iVar2 + 1;
        }
        bVar3 = iVar2 == 1;
      }
LAB_101e3f72:
      cVar1 = FUN_101eca99();
    } while (cVar1 == '\0');
  }
  return;
}

