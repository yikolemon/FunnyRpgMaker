/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001af98 */

undefined1 FUN_18001af98(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = *(uint *)(param_1 + 0xe4);
  pbVar3 = *(byte **)(param_1 + 8);
  if (((uVar2 >> 8 & 1) == 0) && (pbVar3 == *(byte **)(param_1 + 0xd0))) {
    if ((char)((uVar2 & 4) >> 2) != '\0' || pbVar3 == *(byte **)(param_1 + 0xd8)) {
      return false;
    }
    bVar1 = *pbVar3;
  }
  else {
    if (pbVar3 != *(byte **)(param_1 + 0xd8)) {
      return (&DAT_1802b1130)[pbVar3[-1]] != (&DAT_1802b1130)[*pbVar3];
    }
    if ((uVar2 & 8) != 0) {
      return false;
    }
    bVar1 = pbVar3[-1];
  }
  return (&DAT_1802b1130)[bVar1];
}

