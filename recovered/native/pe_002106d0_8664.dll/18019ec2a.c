/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ec2a */

longlong FUN_18019ec2a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_1801cb681(*param_1);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_1801caef1(*param_1,iVar2,*(undefined4 *)((longlong)param_1 + 0xc)), iVar2 == 0)) {
    lVar1 = *(longlong *)(*param_1 + 0x78);
    uVar3 = *(uint *)(param_1 + 1);
    if ((uVar3 & 0x20) != 0) {
      FUN_1801d162c(lVar1);
      uVar3 = *(uint *)(param_1 + 1);
    }
    if ((uVar3 & 0x40) != 0) {
      FUN_1801d15ac(lVar1);
    }
    return lVar1 + 0x30;
  }
  return 0;
}

