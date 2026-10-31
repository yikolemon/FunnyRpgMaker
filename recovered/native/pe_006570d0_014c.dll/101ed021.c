/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ed021 */

int __fastcall FUN_101ed021(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_34;
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar3 = (**(code **)(param_1 + 0x204))(param_1,0x68646d78,param_2,&local_1c);
  iVar5 = 0;
  if (local_1c < 8 || iVar3 != 0) goto LAB_101ed146;
  iStack_18 = FUN_101c4b40(param_2,local_1c,(int *)(param_1 + 0x308));
  iVar5 = iStack_18;
  if (iStack_18 != 0) goto LAB_101ed146;
  iVar5 = *(int *)(param_1 + 0x308);
  cVar1 = *(char *)(iVar5 + 2);
  uStack_30 = CONCAT31(uStack_30._1_3_,cVar1 != '\0');
  uStack_2c = (uint)*(byte *)(iVar5 + 3);
  sVar2 = CONCAT11(cVar1,*(byte *)(iVar5 + 3));
  uStack_28 = (uint)*(byte *)(iVar5 + 5) << 0x10 | (uint)*(byte *)(iVar5 + 4) << 0x18;
  if (uStack_28 == 0xffff0000) {
    uStack_28 = 0;
  }
  if (sVar2 == 0 || cVar1 != '\0') {
LAB_101ed128:
    FUN_101c4c3e(param_2,param_1 + 0x308);
    iVar5 = 0x30c;
    uVar6 = 0;
  }
  else {
    iStack_20 = (uint)*(byte *)(iVar5 + 6) << 8;
    uStack_24 = (uint)*(byte *)(iVar5 + 7);
    uVar6 = CONCAT11(*(byte *)(iVar5 + 6),*(byte *)(iVar5 + 7)) + uStack_28;
    if (uVar6 != (*(int *)(param_1 + 0x10) + 5U & 0xfffffffc)) goto LAB_101ed128;
    uStack_30 = local_1c + iVar5;
    uVar7 = 0;
    uStack_34 = uVar6;
    uVar4 = FUN_101c2a50(uVar4,4,0,sVar2,0,&iStack_18);
    *(undefined4 *)(param_1 + 0x318) = uVar4;
    if (iStack_18 != 0) goto LAB_101ed128;
    iVar5 = iVar5 + 8;
    do {
      iVar3 = *(int *)(param_1 + 0x318);
      if (uStack_30 < iVar5 + uStack_28 + iStack_20 + uStack_24) goto LAB_101ed198;
      *(int *)(iVar3 + uVar7 * 4) = iVar5;
      iVar5 = iVar5 + uStack_34;
      uVar7 = uVar7 + 1;
    } while (uStack_2c != uVar7);
    iVar3 = *(int *)(param_1 + 0x318);
    uVar7 = uStack_2c;
LAB_101ed198:
    uStack_2c = uVar7;
    uVar6 = uStack_2c;
    FUN_1026fb00(iVar3,uStack_2c,4,&LAB_101ed7f7);
    *(uint *)(param_1 + 0x310) = uVar6;
    *(uint *)(param_1 + 0x30c) = local_1c;
    iVar5 = 0x314;
    uVar6 = uStack_34;
  }
  *(uint *)(param_1 + iVar5) = uVar6;
  iVar5 = iStack_18;
LAB_101ed146:
  if (DAT_10388d00 != (local_14 ^ (uint)&uStack_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar5;
}

