/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009b01c */

void FUN_14009b01c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x2940);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2948);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar3) == param_2) {
        *(undefined4 *)(lVar2 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar3);
  }
  return;
}

