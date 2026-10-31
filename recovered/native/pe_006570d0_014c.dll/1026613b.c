/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026613b */

/* WARNING: Removing unreachable block (ram,0x1026618c) */

void FUN_1026613b(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  uint local_14;
  int iStack_10;
  int local_8;
  
  iVar4 = 0x17;
  if (*(char *)(param_2 + 4) != '\0') {
    iVar4 = 0x34;
  }
  iStack_10 = 0;
  local_14 = 0;
  pbVar5 = (byte *)(param_1 + 2);
  iVar4 = iVar4 + *param_1;
  pbVar3 = (byte *)(param_1[1] + 8 + (int)param_1);
  for (; (pbVar5 != pbVar3 && (uVar8 = FUN_10263dc1(), CONCAT44(iStack_10,local_14) <= uVar8));
      iStack_10 = (iStack_10 << 4 | uVar2) + (uint)CARRY4(uVar6,(uint)bVar1)) {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar2 = local_14 >> 0x1c;
    uVar6 = local_14 * 0x10;
    local_14 = uVar6 + bVar1;
    iVar4 = iVar4 + -4;
  }
  bVar7 = true;
  local_8 = iVar4;
  while( true ) {
    local_8 = CONCAT31(local_8._1_3_,bVar7);
    if ((pbVar5 == pbVar3) || (!bVar7)) break;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar7 = bVar1 == 0;
  }
  FUN_10263e85(local_14,iStack_10,iVar4,(char)param_1[0xc2],local_8,param_2);
  return;
}

