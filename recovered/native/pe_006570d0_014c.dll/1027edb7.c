/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027edb7 */

bool FUN_1027edb7(uint param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  DWORD local_8;
  
  iVar1 = FUN_1028375e(param_1);
  if (iVar1 != 0) {
    iVar3 = (int)param_1 >> 6;
    iVar1 = (param_1 & 0x3f) * 0x38;
    if (*(char *)((&DAT_103a5230)[iVar3] + 0x28 + iVar1) < '\0') {
      if (*(char *)(param_2 + 0x14) == '\0') {
        FUN_1025ec50();
      }
      if ((*(int *)(*(int *)(param_2 + 0xc) + 0xa8) != 0) ||
         (*(char *)((&DAT_103a5230)[iVar3] + 0x29 + iVar1) != '\0')) {
        BVar2 = GetConsoleMode(*(HANDLE *)((&DAT_103a5230)[iVar3] + 0x18 + iVar1),&local_8);
        return BVar2 != 0;
      }
    }
  }
  return false;
}

