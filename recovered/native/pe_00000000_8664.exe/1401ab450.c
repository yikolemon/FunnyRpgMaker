/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ab450 */

void FUN_1401ab450(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar3 = *(byte *)*param_2 & 0xf;
  lVar5 = *param_2 - (longlong)(char)(&DAT_140eb2890)[uVar3];
  uVar3 = *(uint *)(lVar5 + -4) >> ((&DAT_140eb28a0)[uVar3] & 0x1f);
  *param_2 = lVar5;
  uVar4 = uVar3 & 3;
  *(uint *)(param_1 + 0x10) = uVar3 >> 2;
  *(uint *)(param_1 + 0x14) = uVar4;
  if (uVar4 - 1 < 2) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar3 = *(byte *)*param_2 & 0xf;
    bVar1 = (&DAT_140eb28a0)[uVar3];
    lVar5 = *param_2 - (longlong)(char)(&DAT_140eb2890)[uVar3];
    uVar3 = *(uint *)(lVar5 + -4);
    *param_2 = lVar5;
    *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  }
  else if (uVar4 == 3) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}

