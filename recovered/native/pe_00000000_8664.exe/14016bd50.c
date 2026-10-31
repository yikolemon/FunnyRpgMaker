/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016bd50 */

void FUN_14016bd50(longlong param_1,char param_2)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = FUN_14016bd17(param_1);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
      FUN_1401c5830(param_1 + 0x20,0xff,lVar2);
    }
    pbVar1 = (byte *)(param_1 + 0x1f + lVar2);
    *pbVar1 = *pbVar1 & -1 << (-param_2 & 7U);
  }
  return;
}

