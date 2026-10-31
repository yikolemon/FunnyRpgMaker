/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407821b4 */

void FUN_1407821b4(ulonglong param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  if (uVar2 != 0) {
    if (*(int *)((ulonglong)uVar2 + 0x434) == (int)param_1) {
      *(undefined4 *)((ulonglong)uVar2 + 0x434) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 1) {
    uVar2 = *(uint *)(ulonglong)*(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x7c) = uVar2;
    pbVar1 = (byte *)((ulonglong)uVar2 + 0x409);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_140781617();
    *(undefined4 *)((param_1 & 0xffffffff) + 0x30) = 0;
  }
  return;
}

