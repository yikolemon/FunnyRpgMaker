/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495c98 */

/* Library Function - Single Match
    __invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  FUN_00495ccc(2,0xc0000417,1);
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000417);
  return;
}

