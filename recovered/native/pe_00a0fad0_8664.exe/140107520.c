/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107520 */

void FUN_140107520(longlong *param_1)

{
  int *PcValue;
  PVOID pvVar1;
  PVOID local_res8 [4];
  undefined1 local_28 [32];
  
  if (param_1 == (longlong *)0x0) {
    FUN_1401075f0(local_28,"Attempted a typeid of nullptr pointer!");
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_28,&DAT_1401c4460);
  }
  PcValue = *(int **)(*param_1 + -8);
  if (*PcValue == 0) {
    pvVar1 = RtlPcToFileHeader(PcValue,local_res8);
    local_res8[0] = pvVar1;
  }
  else {
    pvVar1 = (PVOID)((longlong)PcValue - (longlong)PcValue[5]);
  }
  if ((longlong)PcValue[3] + (longlong)pvVar1 != 0) {
    return;
  }
  FUN_140107650(local_28,"Bad read pointer - no RTTI data!");
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_28,&DAT_1401c43d0);
}

