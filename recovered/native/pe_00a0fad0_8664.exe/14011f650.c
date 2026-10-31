/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011f650 */

void FUN_14011f650(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (-1 < *param_3) {
    param_2 = (longlong *)((longlong)param_3[2] + *param_2);
  }
  iVar1 = FUN_14011f280();
  if (iVar1 == 1) {
    uVar2 = FUN_140107cb0(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_140107100();
      lVar3 = lVar3 + iVar1;
    }
    FUN_14011ecc0(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_140107cb0(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_140107100();
      lVar3 = lVar3 + iVar1;
    }
    FUN_14011ecd0(param_2,lVar3,uVar2,1);
  }
  return;
}

