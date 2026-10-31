/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402311f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402311f6(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  uVar6 = *(longlong *)(param_1 + 0x10) * 4;
  if (uVar6 < 0x1000) {
    if ((lVar1 != 0) &&
       (iVar3 = (*(code *)s_GetSystemTimePreciseAsFileTime_14059e042._14_8_)(DAT_1406328c8,0,lVar1),
       iVar3 == 0)) {
      uVar4 = (*_DAT_14059df60)();
      uVar4 = FUN_14048fbac(uVar4);
      puVar5 = (undefined4 *)FUN_14048fb3c();
      *puVar5 = uVar4;
    }
    return;
  }
  if (0x1f < (ulonglong)((lVar1 + -8) - *(longlong *)(lVar1 + -8))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  thunk_FUN_1404a2310(*(longlong *)(lVar1 + -8),uVar6 + 0x27);
  return;
}

