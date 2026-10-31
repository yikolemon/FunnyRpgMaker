/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444796 */

undefined4 __fastcall FUN_00444796(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  uint uVar8;
  undefined4 unaff_EDI;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  code *pcStack_28;
  uint uStack_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&uStack_34;
  iVar4 = param_2[7];
  iVar2 = (**(code **)(param_1 + 0x204))(param_1,0x68646d78,param_2,&local_1c);
  uVar5 = 0;
  if (local_1c < 8 || iVar2 != 0) goto LAB_004448bb;
  iStack_18 = FUN_00420bb8(param_2,local_1c,(int *)(param_1 + 0x308));
  uVar5 = unaff_EBX;
  if (iStack_18 != 0) goto LAB_004448bb;
  iVar2 = *(int *)(param_1 + 0x308);
  cVar1 = *(char *)(iVar2 + 2);
  uStack_30 = CONCAT31(uStack_30._1_3_,cVar1 != '\0');
  uStack_2c = (uint)*(byte *)(iVar2 + 3);
  uVar3 = (uint)CONCAT11(cVar1,*(byte *)(iVar2 + 3));
  pcStack_28 = (code *)((uint)*(byte *)(iVar2 + 5) << 0x10 | (uint)*(byte *)(iVar2 + 4) << 0x18);
  if (pcStack_28 == (code *)0xffff0000) {
    pcStack_28 = (code *)0x0;
  }
  if (uVar3 == 0 || cVar1 != '\0') {
LAB_0044489d:
    FUN_00420cb6((int)param_2,(int *)(param_1 + 0x308));
    iVar4 = 0x30c;
    uVar3 = 0;
  }
  else {
    iStack_20 = (uint)*(byte *)(iVar2 + 6) << 8;
    uStack_24 = (uint)*(byte *)(iVar2 + 7);
    uVar7 = (uint)CONCAT11(*(byte *)(iVar2 + 6),*(byte *)(iVar2 + 7)) + (int)pcStack_28;
    if (uVar7 != (*(int *)(param_1 + 0x10) + 5U & 0xfffffffc)) goto LAB_0044489d;
    uStack_30 = local_1c + iVar2;
    uVar8 = 0;
    uStack_34 = uVar7;
    iVar4 = FUN_0041efcd(iVar4,4,0,uVar3,0,&iStack_18);
    *(int *)(param_1 + 0x318) = iVar4;
    if (iStack_18 != 0) goto LAB_0044489d;
    iVar2 = iVar2 + 8;
    do {
      puVar6 = *(undefined1 **)(param_1 + 0x318);
      if (uStack_30 < iVar2 + (int)pcStack_28 + iStack_20 + uStack_24) goto LAB_0044490d;
      *(int *)(puVar6 + uVar8 * 4) = iVar2;
      iVar2 = iVar2 + uStack_34;
      uVar8 = uVar8 + 1;
    } while (uStack_2c != uVar8);
    puVar6 = *(undefined1 **)(param_1 + 0x318);
    uVar8 = uStack_2c;
LAB_0044490d:
    uStack_2c = uVar8;
    uVar3 = uStack_2c;
    FUN_00492530(puVar6,uStack_2c,4,&LAB_00444f6c);
    *(uint *)(param_1 + 0x310) = uVar3;
    *(undefined4 *)(param_1 + 0x30c) = unaff_EDI;
    iVar4 = 0x314;
    uVar3 = uStack_24;
  }
  *(uint *)(param_1 + iVar4) = uVar3;
LAB_004448bb:
  if (DAT_0050e8c0 != (unaff_EBP ^ (uint)&uStack_24)) {
                    /* WARNING: Subroutine does not return */
    pcStack_28 = FUN_0044494a;
    FUN_0047f2c0(unaff_EBP ^ (uint)&uStack_24);
  }
  return uVar5;
}

