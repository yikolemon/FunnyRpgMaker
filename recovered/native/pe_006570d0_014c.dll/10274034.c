/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274034 */

void FUN_10274034(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5,
                 int *param_6)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  
  iVar1 = *param_6;
  if (((iVar1 == 0) && (iVar1 = FUN_1025ecb0(), iVar1 == 0)) ||
     (pcVar3 = *(code **)(iVar1 + 0x35c), pcVar3 == (code *)0x0)) {
    iVar1 = FUN_102740b1();
    bVar2 = (byte)DAT_10388d00 & 0x1f;
    pcVar3 = (code *)((*(uint *)(&DAT_103a50e8 + iVar1 * 4) ^ DAT_10388d00) >> bVar2 |
                     (*(uint *)(&DAT_103a50e8 + iVar1 * 4) ^ DAT_10388d00) << 0x20 - bVar2);
    if (pcVar3 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*(code *)PTR_guard_check_icall_1035d810)(param_1,param_2,param_3,param_4,param_5);
  (*pcVar3)();
  return;
}

