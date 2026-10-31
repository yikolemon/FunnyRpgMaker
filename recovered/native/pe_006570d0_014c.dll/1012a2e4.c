/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a2e4 */

void __fastcall FUN_1012a2e4(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x434) == param_1) {
      *(undefined4 *)(iVar2 + 0x434) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 1) {
    iVar2 = **(int **)(param_1 + 0x2c);
    *(int *)(param_1 + 0x7c) = iVar2;
    pbVar1 = (byte *)(iVar2 + 0x409);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_10129747(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

