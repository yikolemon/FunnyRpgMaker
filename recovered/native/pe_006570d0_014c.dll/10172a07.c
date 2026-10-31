/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10172a07 */

void __fastcall FUN_10172a07(int *param_1)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[4];
  iVar3 = param_1[2];
  do {
    if (uVar4 >> ((byte)iVar3 & 0x1f) != 0) {
      *param_1 = param_1[1];
      return;
    }
    pbVar1 = (byte *)*param_1;
    uVar5 = 0;
    if (pbVar1 < (byte *)param_1[1]) {
      *param_1 = (int)(pbVar1 + 1);
      uVar5 = (uint)*pbVar1;
    }
    uVar4 = uVar4 | uVar5 << ((byte)iVar3 & 0x1f);
    param_1[4] = uVar4;
    param_1[2] = iVar3 + 8;
    bVar2 = iVar3 < 0x11;
    iVar3 = iVar3 + 8;
  } while (bVar2);
  return;
}

