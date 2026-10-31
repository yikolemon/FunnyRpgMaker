/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020cfdd */

void __fastcall FUN_1020cfdd(int param_1,char param_2)

{
  byte *pbVar1;
  size_t _Size;
  int iVar2;
  
  iVar2 = FUN_1020cfb4();
  if (iVar2 != 0) {
    _Size = *(size_t *)(param_1 + 0xc);
    if (_Size != 0) {
      _memset((void *)(param_1 + 0x10),0xff,_Size);
    }
    pbVar1 = (byte *)(param_1 + 0xf + _Size);
    *pbVar1 = *pbVar1 & (byte)(-1 << (-param_2 & 7U));
  }
  return;
}

