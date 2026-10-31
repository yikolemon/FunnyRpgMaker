/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c41f */

void __fastcall FUN_0041c41f(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  sbyte sVar3;
  int iVar4;
  
  iVar4 = 0;
  sVar3 = 10;
  if ((param_4 & 1) != 0) {
    sVar3 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar2 = FUN_0041d7a9(param_1,param_2 + iVar4,param_4 | 0x100);
    if (iVar2 != 0) {
      return;
    }
    *(int *)(param_5 + iVar4 * 4) = *(int *)(iVar1 + ((param_4 & 0x10) >> 2 | 0x40)) << sVar3;
    iVar4 = iVar4 + 1;
  } while (param_3 != iVar4);
  return;
}

