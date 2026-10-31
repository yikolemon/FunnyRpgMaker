/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233d00 */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short __thiscall std::basic_filebuf<unsigned short,struct
   std::char_traits<unsigned short> >::underflow(void)
    protected: virtual unsigned short __thiscall std::basic_filebuf<wchar_t,struct
   std::char_traits<wchar_t> >::underflow(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

short __fastcall underflow(int *param_1)

{
  short *psVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  
  psVar1 = *(short **)param_1[7];
  if ((psVar1 != (short *)0x0) && (psVar1 < psVar1 + *(int *)param_1[0xb])) {
    return *psVar1;
  }
  pcVar2 = *(code **)(*param_1 + 0x1c);
  (*(code *)PTR_guard_check_icall_1035d810)();
  sVar3 = (*pcVar2)();
  sVar4 = -1;
  if (sVar3 != -1) {
    pcVar2 = *(code **)(*param_1 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)(sVar3);
    (*pcVar2)();
    sVar4 = sVar3;
  }
  return sVar4;
}

