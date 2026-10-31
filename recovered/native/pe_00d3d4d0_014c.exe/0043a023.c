/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a023 */

void __fastcall FUN_0043a023(int param_1,int *param_2)

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

