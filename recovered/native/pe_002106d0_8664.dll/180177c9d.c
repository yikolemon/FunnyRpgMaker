/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177c9d */

undefined8 FUN_180177c9d(ulonglong *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  byte *pbVar5;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  bVar4 = 0;
  pbVar5 = pbVar1;
  if (pbVar1 < pbVar2) {
    pbVar5 = pbVar1 + 1;
    *param_1 = (ulonglong)pbVar5;
    bVar4 = *pbVar1;
  }
  pcVar3 = "bad zlib header";
  if (((pbVar5 < pbVar2) && (*param_1 = (ulonglong)(pbVar5 + 1), pbVar5 + 1 < pbVar2)) &&
     ((ushort)(CONCAT11(bVar4,*pbVar5) * 0x7bdf) < 0x843)) {
    if ((*pbVar5 & 0x20) == 0) {
      if ((bVar4 & 0xf) == 8) {
        return 1;
      }
      pcVar3 = "bad compression";
    }
    else {
      pcVar3 = "no preset dict";
    }
  }
  FUN_1801765d0(pcVar3);
  return 0;
}

