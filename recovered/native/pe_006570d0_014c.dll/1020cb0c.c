/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020cb0c */

void __thiscall FUN_1020cb0c(int *param_1,int *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)((longlong)param_1[0xb5e] * (longlong)param_3 >> 0x3f);
  lVar1 = (longlong)param_1[0xb5e] * (longlong)param_3 + CONCAT44(iVar3,iVar3) + 0x8000;
  iVar3 = (int)((longlong)param_4 * (longlong)param_1[0xb5f] >> 0x3f);
  lVar2 = (longlong)param_4 * (longlong)param_1[0xb5f] + CONCAT44(iVar3,iVar3) + 0x8000;
  iVar5 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  iVar3 = FUN_1020cc02();
  lVar1 = (longlong)iVar5 * (longlong)*(int *)(*param_1 + 0x40);
  iVar4 = (int)(lVar1 >> 0x3f);
  lVar2 = lVar1 + CONCAT44(iVar4,iVar4) + 0x8000;
  lVar1 = (longlong)iVar3 * (longlong)*(int *)(*param_1 + 0x48);
  iVar4 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar4,iVar4) + 0x8000;
  *param_2 = ((int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10) + param_1[0xb61] +
             ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10);
  lVar1 = (longlong)iVar5 * (longlong)*(int *)(*param_1 + 0x44);
  iVar4 = (int)(lVar1 >> 0x3f);
  lVar2 = lVar1 + CONCAT44(iVar4,iVar4) + 0x8000;
  lVar1 = (longlong)iVar3 * (longlong)*(int *)(*param_1 + 0x4c);
  iVar3 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
  param_2[1] = ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + param_1[0xb62] +
               ((int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10);
  return;
}

