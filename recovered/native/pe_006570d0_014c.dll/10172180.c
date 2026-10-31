/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10172180 */

undefined4 __fastcall FUN_10172180(uint *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  byte *pbVar5;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  bVar4 = 0;
  pbVar5 = pbVar1;
  if (pbVar1 < pbVar2) {
    pbVar5 = pbVar1 + 1;
    *param_1 = (uint)pbVar5;
    bVar4 = *pbVar1;
  }
  if ((((pbVar5 < pbVar2) && (*param_1 = (uint)(pbVar5 + 1), pbVar5 + 1 < pbVar2)) &&
      ((ushort)(CONCAT11(bVar4,*pbVar5) * 0x7bdf) < 0x843)) &&
     (((*pbVar5 & 0x20) == 0 && ((bVar4 & 0xf) == 8)))) {
    uVar3 = 1;
  }
  else {
    FUN_10170e07();
    uVar3 = 0;
  }
  return uVar3;
}

