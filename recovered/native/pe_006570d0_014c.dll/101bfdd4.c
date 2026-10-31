/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bfdd4 */

undefined4 __fastcall FUN_101bfdd4(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  if ((param_4 & 1) == 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      uVar3 = 0x24;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x10 + ((param_4 & 0x10) >> 2));
      iVar5 = 0;
      do {
        lVar2 = (longlong)(*(int *)(param_2 + iVar5 * 4) << 10) * (longlong)iVar1;
        iVar4 = (int)(lVar2 >> 0x3f);
        lVar2 = lVar2 + CONCAT44(iVar4,iVar4) + 0x8000;
        *(uint *)(param_2 + iVar5 * 4) =
             (int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10;
        iVar5 = iVar5 + 1;
      } while (param_3 != iVar5);
      uVar3 = 0;
    }
  }
  return uVar3;
}

