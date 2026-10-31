/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044eab0 */

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  longlong unaff_GS_OFFSET;
  
  (*(code *)s_GetCurrentDirectoryW_14059dd3c._12_8_)(&DAT_140629540);
  uVar1 = (ulonglong)DAT_140629530;
  s___AV<lambda_2>__0___R<lambda_4>__140613b30._48_4_ =
       s___AV<lambda_2>__0___R<lambda_4>__140613b30._48_4_ + 1;
  *param_1 = s___AV<lambda_2>__0___R<lambda_4>__140613b30._48_4_;
  *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + uVar1 * 8) + 0x2c) =
       s___AV<lambda_2>__0___R<lambda_4>__140613b30._48_4_;
  (*(code *)s_InitializeCriticalSectionEx_14059e14e._2_8_)(&DAT_140629540);
  (*(code *)s_LoadLibraryExW_14059e270._8_8_)(&DAT_140629538);
  return;
}

