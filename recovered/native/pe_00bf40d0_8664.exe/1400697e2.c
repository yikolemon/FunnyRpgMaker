/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400697e2 */

void FUN_1400697e2(longlong *param_1,longlong param_2,int *param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = (longlong)param_4 * (longlong)(int)param_1[0x918];
  lVar4 = (longlong)*(int *)((longlong)param_1 + 0x48c4) * (longlong)param_5;
  uVar1 = FUN_1400698d6(param_2,param_5);
  lVar2 = (longlong)
          ((int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) +
          (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10));
  lVar3 = *(int *)(*param_1 + 0x44) * lVar2;
  lVar4 = (longlong)*(int *)(*param_1 + 0x4c) * (longlong)(int)uVar1;
  *param_3 = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) +
             *(int *)((longlong)param_1 + 0x48cc) +
             (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
  lVar2 = *(int *)(*param_1 + 0x48) * lVar2;
  lVar4 = (longlong)*(int *)(*param_1 + 0x50) * (longlong)(int)uVar1;
  param_3[1] = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) + (int)param_1[0x91a] +
               (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
  return;
}

