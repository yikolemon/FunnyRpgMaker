/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a9289 */

void FUN_1400a9289(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x4c8) == param_1) {
      *(undefined8 *)(lVar2 + 0x4c8) = 0;
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    lVar2 = **(longlong **)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x98) = lVar2;
    pbVar1 = (byte *)(lVar2 + 0x495);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400a87a9();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

