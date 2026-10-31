/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b92e6 */

void FUN_101b92e6(int param_1,undefined4 param_2)

{
  uint *puVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_418;
  char local_414 [1023];
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_418;
  local_418 = &stack0x0000000c;
  puVar1 = (uint *)FUN_1004303e();
  FUN_1025ea38(*puVar1 | 1,puVar1[1],local_414,0x400,param_2,0,&stack0x0000000c);
  local_15 = 0;
  sVar2 = _strlen(local_414);
  uVar3 = FUN_100fa1fa(sVar2 + 1);
  FUN_1025b2d0(uVar3,local_414,sVar2 + 1);
  iVar4 = *(int *)(param_1 + 0x100);
  if (iVar4 == *(int *)(param_1 + 0x104)) {
    if (iVar4 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar4 / 2 + iVar4;
    }
    iVar6 = iVar4 + 1;
    if (iVar4 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    iVar5 = FUN_100fa1fa(iVar6 * 4);
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_1025b2d0(iVar5,*(int *)(param_1 + 0x108),*(int *)(param_1 + 0x100) << 2);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x108));
    }
    *(int *)(param_1 + 0x108) = iVar5;
    *(int *)(param_1 + 0x104) = iVar6;
    iVar4 = *(int *)(param_1 + 0x100);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x108);
  }
  *(undefined4 *)(iVar5 + iVar4 * 4) = uVar3;
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_418)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

