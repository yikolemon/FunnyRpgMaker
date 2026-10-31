/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10172a46 */

undefined4 __fastcall FUN_10172a46(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(int *)(param_1 + 0x14) = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar3 = param_2 - iVar1;
    if (!CARRY4(param_3,uVar3)) {
      for (uVar2 = *(int *)(param_1 + 0x1c) - iVar1; uVar2 < param_3 + uVar3; uVar2 = uVar2 * 2) {
        if ((int)uVar2 < 0) goto LAB_10172aa0;
      }
      iVar1 = FUN_1026ff70(iVar1,uVar2);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x18) = iVar1;
        *(uint *)(param_1 + 0x14) = uVar3 + iVar1;
        *(uint *)(param_1 + 0x1c) = uVar2 + iVar1;
        return 1;
      }
    }
  }
LAB_10172aa0:
  FUN_10170e07();
  return 0;
}

