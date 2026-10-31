/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101182f9 */

void FUN_101182f9(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  *(undefined1 *)(DAT_1039d74c + 0x1526) = 1;
  *(undefined1 *)(iVar2 + 0x2748) = 1;
  *(undefined4 *)(iVar2 + 0x274c) = param_1;
  *(int *)(iVar2 + 0x2750) = iVar1;
  *(undefined4 *)(iVar2 + 0x2768) = 0;
  *(undefined4 *)(iVar2 + 0x2764) = 0;
  *(undefined4 *)(iVar2 + 0x2770) = *(undefined4 *)(iVar1 + 0x1cc);
  if (param_2 < 0) {
    param_2 = *(int *)(iVar2 + 0x2778);
  }
  *(int *)(iVar2 + 0x2774) = param_2;
  *(undefined4 *)(iVar2 + 0x276c) = 0x7f7fffff;
  *(undefined1 *)(iVar2 + 0x2749) = 1;
  return;
}

