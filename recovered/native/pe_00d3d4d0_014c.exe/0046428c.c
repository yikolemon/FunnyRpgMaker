/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046428c */

void __fastcall FUN_0046428c(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = (int)((longlong)param_1[0xb5e] * (longlong)param_4 >> 0x3f);
  lVar1 = (longlong)param_1[0xb5e] * (longlong)param_4 + CONCAT44(iVar3,iVar3) + 0x8000;
  iVar3 = (int)((longlong)param_5 * (longlong)param_1[0xb5f] >> 0x3f);
  lVar2 = (longlong)param_5 * (longlong)param_1[0xb5f] + CONCAT44(iVar3,iVar3) + 0x8000;
  iVar5 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  uVar4 = FUN_00464382(param_2,param_5);
  lVar1 = (longlong)iVar5 * (longlong)*(int *)(*param_1 + 0x40);
  iVar3 = (int)(lVar1 >> 0x3f);
  lVar2 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
  lVar1 = (longlong)(int)uVar4 * (longlong)*(int *)(*param_1 + 0x48);
  iVar3 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
  *param_3 = ((int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10) + param_1[0xb61] +
             ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10);
  lVar1 = (longlong)iVar5 * (longlong)*(int *)(*param_1 + 0x44);
  iVar3 = (int)(lVar1 >> 0x3f);
  lVar2 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
  lVar1 = (longlong)(int)uVar4 * (longlong)*(int *)(*param_1 + 0x4c);
  iVar3 = (int)(lVar1 >> 0x3f);
  lVar1 = lVar1 + CONCAT44(iVar3,iVar3) + 0x8000;
  param_3[1] = ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + param_1[0xb62] +
               ((int)((ulonglong)lVar1 >> 0x20) * 0x10000 | (uint)lVar1 >> 0x10);
  return;
}

