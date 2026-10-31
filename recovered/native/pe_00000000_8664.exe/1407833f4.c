/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407833f4 */

void FUN_1407833f4(uint param_1,uint param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  
  puVar1 = (uint *)(ulonglong)param_2;
  while( true ) {
    uVar2 = (ulonglong)param_1;
    if (0 < *(int *)(uVar2 + 0x24)) {
      if (puVar1[1] == 0) {
        puVar1[1] = param_1;
      }
      puVar1[2] = puVar1[2] + 1;
    }
    if ((*(byte *)(uVar2 + 0x11) & 8) != 0) {
      *puVar1 = param_1;
    }
    if ((1 < (int)puVar1[2]) && (*puVar1 != 0)) break;
    if (*(int *)(uVar2 + 0x1c) != 0) {
      FUN_1407833f4(*(int *)(uVar2 + 0x1c),puVar1);
    }
    param_1 = *(uint *)(uVar2 + 0x20);
    if (param_1 == 0) {
      return;
    }
  }
  return;
}

