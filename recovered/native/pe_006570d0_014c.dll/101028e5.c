/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101028e5 */

void FUN_101028e5(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(int *)(DAT_1039d74c + 0x1510) = param_1;
  *(undefined1 *)(iVar1 + 0x1524) = 0;
  if ((param_1 != 0) && (*(int *)(iVar1 + 0x1514) != param_1)) {
    *(undefined8 *)(iVar1 + 0x151c) = 0;
  }
  return;
}

