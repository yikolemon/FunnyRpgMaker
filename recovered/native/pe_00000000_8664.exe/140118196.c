/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140118196 */

longlong FUN_140118196(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_14012a655(*param_1);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_140129ec5(*param_1,iVar2,*(undefined4 *)((longlong)param_1 + 0xc)), iVar2 == 0)) {
    lVar1 = *(longlong *)(*param_1 + 0x78);
    uVar3 = *(uint *)(param_1 + 1);
    if ((uVar3 & 0x20) != 0) {
      FUN_140130600(lVar1);
      uVar3 = *(uint *)(param_1 + 1);
    }
    if ((uVar3 & 0x40) != 0) {
      FUN_140130580(lVar1);
    }
    return lVar1 + 0x30;
  }
  return 0;
}

