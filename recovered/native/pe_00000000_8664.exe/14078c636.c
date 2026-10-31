/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078c636 */

undefined4 FUN_14078c636(undefined8 param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  uint unaff_EBP;
  int unaff_R15D;
  byte *pbStack_28;
  uint uVar6;
  
  uVar6 = (uint)((ulonglong)unaff_RBX >> 0x20);
  pbStack_28 = (byte *)(ulonglong)uVar6;
  uVar2 = FUN_140795972();
  uVar5 = (ulonglong)((int)&pbStack_28 + 4);
  pbVar3 = (byte *)(ulonglong)unaff_EBP;
  if (uVar6 < uVar2) {
    bVar4 = false;
    pbVar3 = (byte *)(ulonglong)*(uint *)(uVar5 + 0x18);
    do {
      bVar1 = *(byte *)(ulonglong)uVar6;
      if ((bVar4) ||
         ((9 < (byte)(bVar1 - 0x30) &&
          ((0xb < bVar1 - 0x23 || ((0x901U >> (bVar1 - 0x23 & 0x1f) & 1) == 0)))))) {
        bVar4 = (bool)(bVar4 | (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a);
        if (((bVar1 != 0x24) && (bVar1 != 0x27)) && (bVar1 != 0x5f)) {
          *pbVar3 = bVar1;
        }
      }
      else {
        bVar4 = false;
      }
    } while (unaff_R15D != param_3);
  }
  *pbVar3 = 0;
  return *(undefined4 *)(uVar5 + 0x18);
}

