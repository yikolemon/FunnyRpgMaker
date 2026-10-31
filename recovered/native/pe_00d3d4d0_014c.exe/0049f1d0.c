/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049f1d0 */

bool __cdecl FUN_0049f1d0(uint param_1,int *param_2)

{
  byte bVar1;
  undefined3 extraout_var;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  DWORD local_8;
  
  bVar1 = FUN_004a38de(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar4 = (int)param_1 >> 6;
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (*(char *)((&DAT_00521cc8)[iVar4] + 0x28 + iVar3) < '\0') {
      if ((char)param_2[5] == '\0') {
        FUN_00488f30(param_2);
      }
      if ((*(int *)(param_2[3] + 0xa8) != 0) ||
         (*(char *)((&DAT_00521cc8)[iVar4] + 0x29 + iVar3) != '\0')) {
        BVar2 = GetConsoleMode(*(HANDLE *)((&DAT_00521cc8)[iVar4] + 0x18 + iVar3),&local_8);
        return BVar2 != 0;
      }
    }
  }
  return false;
}

