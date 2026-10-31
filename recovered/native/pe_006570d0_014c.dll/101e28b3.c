/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e28b3 */

void __fastcall FUN_101e28b3(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((iVar1 < 1) || (*(int *)(param_1 + 0x20) < iVar1)) {
    iVar1 = 0;
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
    }
  }
  else {
    iVar1 = param_2[-iVar1];
  }
  *param_2 = iVar1;
  return;
}

