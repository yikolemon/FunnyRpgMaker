/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140148090 */

byte * FUN_140148090(longlong param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x454);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      uVar4 = uVar5 + uVar3 >> 1;
      pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x460) + (ulonglong)uVar4 * 8);
      uVar2 = (uint)*pbVar1;
      if (uVar2 <= param_2) {
        if (param_2 <= uVar2) {
          return pbVar1 + 2;
        }
        uVar5 = uVar4 + 1;
        uVar4 = uVar3;
      }
      uVar3 = uVar4;
    } while (uVar5 < uVar3);
  }
  return (byte *)0x0;
}

