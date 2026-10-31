/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016adec */

ulonglong FUN_18016adec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  bool bVar2;
  
  if (param_3 == *(short *)(param_1 + 0x212)) {
    bVar2 = *(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78);
  }
  else {
    bVar2 = false;
  }
  if ((bVar2 == false) && (param_3 != *(short *)(param_1 + 0x20c))) {
    if ((param_2 + 1 != (int)*(short *)(param_1 + 0x22e)) && ((*(byte *)(param_1 + 5) & 0x18) == 0))
    {
      return (ulonglong)*(uint *)(param_1 + 0xa8);
    }
    return (ulonglong)*(uint *)(param_1 + 0xa4);
  }
  uVar1 = FUN_18010129b(bVar2 + '\x1d',DAT_1802ac570);
  return uVar1;
}

