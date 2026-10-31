/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021c664 */

void FUN_18021c664(longlong param_1,char param_2)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = FUN_18021c62b(param_1);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
      FUN_1802a89a0(param_1 + 0x20,0xff,lVar2);
    }
    pbVar1 = (byte *)(param_1 + 0x1f + lVar2);
    *pbVar1 = *pbVar1 & -1 << (-param_2 & 7U);
  }
  return;
}

