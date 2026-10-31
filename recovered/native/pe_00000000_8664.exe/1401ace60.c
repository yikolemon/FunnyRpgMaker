/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ace60 */

void FUN_1401ace60(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  iVar1 = FUN_1401acbb0();
  if (iVar1 == 1) {
    uVar2 = FUN_140190470(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_14018ff30();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1401ac410(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_140190470(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_14018ff30();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1401ac420(param_2,lVar3,uVar2,1);
  }
  return;
}

