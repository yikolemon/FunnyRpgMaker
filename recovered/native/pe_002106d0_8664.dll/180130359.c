/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180130359 */

void FUN_180130359(longlong param_1)

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
    FUN_18012f879();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

