/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140069ca4 */

void FUN_140069ca4(undefined8 *param_1,ulonglong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_140069c6b(param_1,param_2);
  if (uVar2 != 0) {
    uVar2 = param_1[3];
    if (uVar2 != 0) {
      FUN_1400b3c00((undefined1 (*) [32])(param_1 + 4),0xff,uVar2);
    }
    pbVar1 = (byte *)((longlong)param_1 + uVar2 + 0x1f);
    *pbVar1 = *pbVar1 & -1 << (-(char)param_2 & 7U);
  }
  return;
}

