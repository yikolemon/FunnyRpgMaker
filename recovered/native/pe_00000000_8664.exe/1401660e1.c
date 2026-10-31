/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401660e1 */

void FUN_1401660e1(longlong param_1,int *param_2,int *param_3,char *param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  
  *param_4 = *(char *)(*(longlong *)(param_1 + 0x10) + 0xf8);
  *param_5 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf9);
  if (*param_4 == '\0') {
    *param_2 = 0x400;
    iVar2 = 0x400;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xfc);
    iVar2 = iVar1 + 0x20;
    iVar1 = iVar1 + 0x5f;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *param_2 = iVar1 >> 6;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x100);
    iVar1 = iVar2 + 0x20;
    iVar2 = iVar2 + 0x5f;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar2 = iVar2 >> 6;
  }
  *param_3 = iVar2;
  return;
}

