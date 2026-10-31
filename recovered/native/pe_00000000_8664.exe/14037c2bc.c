/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037c2bc */

ulonglong FUN_14037c2bc(longlong param_1,int param_2,int param_3)

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
  uVar1 = FUN_14031276b(bVar2 + '\x1d',DAT_1404bda40);
  return uVar1;
}

