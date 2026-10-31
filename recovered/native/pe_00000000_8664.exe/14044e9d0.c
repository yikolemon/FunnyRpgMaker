/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044e9d0 */

void FUN_14044e9d0(int *param_1)

{
  int iVar1;
  longlong unaff_GS_OFFSET;
  
  (*(code *)s_GetCurrentDirectoryW_14059dd3c._12_8_)(&DAT_140629540);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
      (*(code *)s_InitializeCriticalSectionEx_14059e14e._2_8_)(&DAT_140629540);
      return;
    }
    if (iVar1 != -1) break;
    (*(code *)s_IsValidLocale_14059e1ee._2_8_)(&DAT_140629538,&DAT_140629540,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)DAT_140629530 * 8) + 0x2c) =
       s___AV<lambda_2>__0___R<lambda_4>__140613b30._48_4_;
  (*(code *)s_InitializeCriticalSectionEx_14059e14e._2_8_)(&DAT_140629540);
  return;
}

