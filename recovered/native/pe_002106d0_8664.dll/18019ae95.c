/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ae95 */

void FUN_18019ae95(longlong param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = (char)(param_5 - param_2) * '\x02';
  uVar2 = (ulonglong)((uint)(param_5 - param_2) >> 4);
  *(uint *)(param_1 + uVar2 * 4) =
       param_4 << (bVar1 & 0x1f) | ~(3 << (bVar1 & 0x1f)) & *(uint *)(param_1 + uVar2 * 4);
  return;
}

