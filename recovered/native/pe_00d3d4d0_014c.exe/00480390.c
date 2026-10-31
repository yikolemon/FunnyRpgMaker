/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480390 */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short __thiscall std::basic_filebuf<unsigned short,struct
   std::char_traits<unsigned short> >::underflow(void)
    protected: virtual unsigned short __thiscall std::basic_filebuf<wchar_t,struct
   std::char_traits<wchar_t> >::underflow(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ushort __fastcall underflow(int *param_1)

{
  ushort *puVar1;
  code *pcVar2;
  ushort uVar3;
  ushort uVar4;
  
  puVar1 = *(ushort **)param_1[7];
  if ((puVar1 != (ushort *)0x0) && (puVar1 < puVar1 + *(int *)param_1[0xb])) {
    return *puVar1;
  }
  pcVar2 = *(code **)(*param_1 + 0x1c);
  (*(code *)PTR_guard_check_icall_00508898)();
  uVar3 = (*pcVar2)();
  uVar4 = 0xffff;
  if (uVar3 != 0xffff) {
    pcVar2 = *(code **)(*param_1 + 0x10);
    (*(code *)PTR_guard_check_icall_00508898)(uVar3);
    (*pcVar2)();
    uVar4 = uVar3;
  }
  return uVar4;
}

