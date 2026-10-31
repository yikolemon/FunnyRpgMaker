/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c50d1 */

int __fastcall FUN_101c50d1(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar2 = -uVar6;
  if ((int)-uVar6 < 0) {
    uVar2 = uVar6;
  }
  uVar5 = -uVar7;
  if ((int)-uVar7 < 0) {
    uVar5 = uVar7;
  }
  uVar1 = 0x1f;
  if ((uVar5 | uVar2) != 0) {
    for (; (uVar5 | uVar2) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (uVar1 < 0x1e) {
    iVar3 = 0x1d - uVar1;
    uVar6 = uVar6 << ((byte)iVar3 & 0x1f);
    uVar7 = uVar7 << ((byte)iVar3 & 0x1f);
  }
  else {
    iVar3 = (uVar1 ^ 0x1f) - 2;
    bVar4 = 2 - (char)(uVar1 ^ 0x1f);
    uVar6 = (int)uVar6 >> (bVar4 & 0x1f);
    uVar7 = (int)uVar7 >> (bVar4 & 0x1f);
  }
  *param_1 = uVar6;
  param_1[1] = uVar7;
  return iVar3;
}

