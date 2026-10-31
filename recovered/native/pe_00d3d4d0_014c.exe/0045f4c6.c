/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f4c6 */

void __fastcall
FUN_0045f4c6(int param_1,int *param_2,int *param_3,char *param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  
  *param_4 = *(char *)(*(int *)(param_1 + 8) + 0xa0);
  *param_5 = *(undefined1 *)(*(int *)(param_1 + 8) + 0xa1);
  if (*param_4 == '\0') {
    *param_2 = 0x400;
    iVar1 = 0x400;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0xa4);
    iVar1 = iVar2 + 0x20;
    iVar2 = iVar2 + 0x5f;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    *param_2 = iVar2 >> 6;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xa8);
    iVar2 = iVar1 + 0x20;
    iVar1 = iVar1 + 0x5f;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar1 = iVar1 >> 6;
  }
  *param_3 = iVar1;
  return;
}

