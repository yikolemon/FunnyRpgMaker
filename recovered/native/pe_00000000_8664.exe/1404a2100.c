/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a2100(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  byte bVar3;
  
  lVar1 = FUN_1404a21b8(param_6);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x3b8) == 0)) &&
     (puVar2 = (ulonglong *)FUN_1404a2224(&DAT_140632708,param_6),
     bVar3 = (byte)ram0x000140613b10 & 0x3f,
     (*puVar2 ^ ram0x000140613b10) >> bVar3 == 0 &&
     (*puVar2 ^ ram0x000140613b10) << 0x40 - bVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_1404b9600(param_1,param_2,param_3,param_4,param_5);
  return;
}

