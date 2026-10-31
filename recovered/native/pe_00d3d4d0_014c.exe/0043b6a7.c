/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b6a7 */

void __fastcall FUN_0043b6a7(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_2 != 0) {
    return;
  }
  uVar2 = FUN_0044420e(param_1);
  if ((char)uVar2 == '\0') {
    iVar3 = 1;
    bVar4 = true;
    do {
      cVar1 = *(char *)(param_1 + 0x148);
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
          if (cVar1 != 'X') goto LAB_0043b6e2;
          iVar3 = iVar3 + 1;
        }
        bVar4 = iVar3 == 1;
      }
LAB_0043b6e2:
      uVar2 = FUN_0044420e(param_1);
    } while ((char)uVar2 == '\0');
  }
  return;
}

