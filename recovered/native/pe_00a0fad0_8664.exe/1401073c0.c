/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401073c0 */

longlong FUN_1401073c0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      int param_5)

{
  uint uVar1;
  int *PcValue;
  PVOID pvVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  PVOID local_res8 [4];
  undefined1 local_58 [40];
  
  if (param_1 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    PcValue = *(int **)(*param_1 + -8);
    iVar4 = 0;
    if (PcValue[2] != 0) {
      iVar4 = *(int *)((longlong)param_1 - (ulonglong)(uint)PcValue[2]);
    }
    lVar5 = (longlong)param_1 + (-(ulonglong)(uint)PcValue[1] - (longlong)iVar4);
    if (*PcValue == 0) {
      pvVar2 = RtlPcToFileHeader(PcValue,local_res8);
      local_res8[0] = pvVar2;
    }
    else {
      pvVar2 = (PVOID)((longlong)PcValue - (longlong)PcValue[5]);
    }
    uVar1 = *(uint *)((longlong)PcValue[4] + 4 + (longlong)pvVar2);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_1401076b0(PcValue,param_3,param_4,pvVar2);
    }
    else if ((uVar1 & 2) == 0) {
      lVar3 = FUN_1401077f0();
    }
    else {
      lVar3 = FUN_140107980(lVar5,PcValue,param_3,(longlong)param_1 + (-lVar5 - (longlong)param_2),
                            param_4,pvVar2);
    }
    if (lVar3 == 0) {
      if (param_5 != 0) {
        FUN_1401075d0(local_58,"Bad dynamic_cast!");
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_58,&DAT_14017a1a0);
      }
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      iVar4 = *(int *)(lVar3 + 0xc);
      if (-1 < iVar4) {
        lVar6 = (longlong)*(int *)((longlong)*(int *)(lVar3 + 0x10) + *(longlong *)(lVar5 + iVar4))
                + (longlong)iVar4;
      }
      lVar6 = *(int *)(lVar3 + 8) + lVar5 + lVar6;
    }
  }
  return lVar6;
}

