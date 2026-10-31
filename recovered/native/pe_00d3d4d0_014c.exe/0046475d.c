/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046475d */

void __fastcall FUN_0046475d(undefined4 *param_1,uint param_2)

{
  byte *pbVar1;
  size_t _Size;
  uint uVar2;
  
  uVar2 = FUN_00464734(param_1,param_2);
  if (uVar2 != 0) {
    _Size = param_1[3];
    if (_Size != 0) {
      _memset(param_1 + 4,0xff,_Size);
    }
    pbVar1 = (byte *)((int)param_1 + _Size + 0xf);
    *pbVar1 = *pbVar1 & (byte)(-1 << (-(char)param_2 & 7U));
  }
  return;
}

