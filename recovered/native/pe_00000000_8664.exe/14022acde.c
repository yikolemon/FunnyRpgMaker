/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022acde */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022acde(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x18;
  if (uVar3 < 0x1000) {
    if ((lVar1 != 0) &&
       (iVar4 = (*(code *)s_GetSystemTimePreciseAsFileTime_14059e042._14_8_)(DAT_1406328c8,0,lVar1),
       iVar4 == 0)) {
      uVar5 = (*_DAT_14059df60)();
      uVar5 = FUN_14048fbac(uVar5);
      puVar6 = (undefined4 *)FUN_14048fb3c();
      *puVar6 = uVar5;
    }
    return;
  }
  if (0x1f < (ulonglong)((lVar1 + -8) - *(longlong *)(lVar1 + -8))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  thunk_FUN_1404a2310(*(longlong *)(lVar1 + -8),uVar3 + 0x27);
  return;
}

