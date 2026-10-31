/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10193218 */

void FUN_10193218(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = (char)(param_5 - param_2) * '\x02';
  uVar2 = (uint)(param_5 - param_2) >> 4;
  *(uint *)(param_1 + uVar2 * 4) =
       param_4 << (bVar1 & 0x1f) | ~(3 << (bVar1 & 0x1f)) & *(uint *)(param_1 + uVar2 * 4);
  return;
}

