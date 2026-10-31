/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180290c30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180290c30(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  
  lVar1 = FUN_180290ce8(param_6);
  if ((lVar1 == 0) || (pcVar4 = *(code **)(lVar1 + 0x3b8), pcVar4 == (code *)0x0)) {
    puVar2 = (ulonglong *)FUN_180290d54(&DAT_180421238,param_6);
    bVar3 = (byte)DAT_180402640 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_180402640) >> bVar3 | (*puVar2 ^ DAT_180402640) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson(param_1,param_2,param_3,param_4,param_5);
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}

