/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a7cc8 */

/* Library Function - Single Match
    iswctype
   
   Library: Visual Studio 2019 Release */

int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  int iVar2;
  ushort local_res8 [4];
  wint_t local_res18 [8];
  
  if (_C == 0xffff) {
LAB_1404a7d27:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(ushort *)(DAT_140627280 + (ulonglong)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      iVar2 = FUN_1404b6230(1,local_res18,1,local_res8);
      if (iVar2 == 0) goto LAB_1404a7d27;
    }
    uVar1 = (uint)(local_res8[0] & _Type);
  }
  return uVar1;
}

