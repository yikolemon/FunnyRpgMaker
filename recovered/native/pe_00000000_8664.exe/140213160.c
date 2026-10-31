/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140213160 */

undefined8 FUN_140213160(undefined8 param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  
  lVar2 = *(longlong *)(param_3 + 4);
  puVar5 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    puVar5 = *(uint **)param_3;
  }
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      uVar4 = (uint)(ushort)*puVar5;
    }
    else {
      uVar4 = *puVar5;
      if ((uVar4 & 0xffffffdf) - 0x3a0041 < 0x1a) goto LAB_1402131ca;
    }
    if (((short)uVar4 != 0x2f) && ((uVar4 & 0xffff) != 0x5c)) {
      lVar3 = *(longlong *)(param_2 + 4);
      if (7 < *(ulonglong *)(param_2 + 6)) {
        param_2 = *(uint **)param_2;
      }
      if (lVar3 == 2) {
        bVar7 = (*param_2 & 0xffffffdf) - 0x3a0041 < 0x1a;
      }
      else {
        bVar7 = false;
      }
      bVar6 = false;
      if ((lVar3 != 0) && (bVar6 = false, !bVar7)) {
        sVar1 = *(short *)((longlong)param_2 + lVar3 * 2 + -2);
        bVar6 = sVar1 != 0x2f && sVar1 != 0x5c;
      }
      FUN_140214244();
      FUN_14021526c(param_1,(ulonglong)bVar6 + lVar3 + lVar2);
      return param_1;
    }
  }
LAB_1402131ca:
  FUN_1402141fc(param_1,param_2);
  FUN_140215304(param_1,param_3);
  return param_1;
}

