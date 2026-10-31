/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a1f40 */

/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  iVar3 = (*(code *)s_GetTimeFormatW_14059e088._8_8_)(0x17);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  *(undefined8 *)(puVar4 + -8) = 0x1404a1f6e;
  FUN_1404a1f88(2,0xc0000417);
  *(undefined8 *)(puVar4 + -8) = 0x1404a1f74;
  uVar2 = (*(code *)s_GetFullPathNameW_14059dece._2_8_)();
  (*(code *)s_K32GetMappedFileNameW_14059e210._0_8_)(uVar2,0xc0000417);
  return;
}

