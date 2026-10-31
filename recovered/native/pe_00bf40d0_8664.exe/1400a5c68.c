/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5c68 */

/* Library Function - Single Match
    iswctype
   
   Library: Visual Studio 2019 Release */

int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  WORD local_res8 [4];
  WCHAR local_res18 [8];
  
  if (_C == 0xffff) {
LAB_1400a5cc7:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(WORD *)(PTR_DAT_14013bb10 + (ulonglong)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      BVar2 = GetStringTypeW(1,local_res18,1,local_res8);
      if (BVar2 == 0) goto LAB_1400a5cc7;
    }
    uVar1 = (uint)(local_res8[0] & _Type);
  }
  return uVar1;
}

