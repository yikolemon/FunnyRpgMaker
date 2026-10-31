/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b1ac */

undefined1 __fastcall FUN_1001b1ac(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  pbVar3 = *(byte **)(param_1 + 8);
  if (((uVar2 >> 8 & 1) == 0) && (pbVar3 == *(byte **)(param_1 + 0x6c))) {
    if ((char)((uVar2 & 4) >> 2) != '\0' || pbVar3 == *(byte **)(param_1 + 0x70)) {
      return false;
    }
    bVar1 = *pbVar3;
  }
  else {
    if (pbVar3 != *(byte **)(param_1 + 0x70)) {
      return (&DAT_1028f9d4)[pbVar3[-1]] != (&DAT_1028f9d4)[*pbVar3];
    }
    if ((uVar2 & 8) != 0) {
      return false;
    }
    bVar1 = pbVar3[-1];
  }
  return (&DAT_1028f9d4)[bVar1];
}

