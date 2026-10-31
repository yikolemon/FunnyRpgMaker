/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140773943 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140773943(int param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)_DAT_150b1109c;
  if ((*(byte *)(uVar4 + 0x27b5) & 4) != 0) {
    FUN_1407518b6();
  }
  iVar1 = *(int *)(uVar4 + 0x1484);
  if (0 < iVar1) {
    do {
      uVar3 = (ulonglong)*(uint *)(ulonglong)*(uint *)(uVar4 + 0x148c);
      if ((*(int *)(uVar3 + 0x438) == param_1) && (*(int *)(uVar3 + 0x430) == 0)) {
        *(undefined4 *)(uVar3 + 0x438) = param_2;
        iVar1 = *(int *)(uVar4 + 0x1484);
      }
    } while (param_4 < iVar1);
  }
  iVar1 = *(int *)(uVar4 + 0x26f0);
  if (iVar1 != 0) {
    uVar2 = iVar1 + 4;
    do {
      uVar3 = (ulonglong)uVar2;
      if (*(int *)(uVar3 + 0x14) == param_1) {
        *(undefined4 *)(uVar3 + 0x14) = param_2;
        iVar1 = *(int *)(uVar4 + 0x26f0);
      }
      uVar2 = uVar2 + *(int *)(uVar3 - 4);
    } while (uVar2 != *(int *)(uVar4 + 0x26e8) + iVar1 + 4U);
  }
  return;
}

