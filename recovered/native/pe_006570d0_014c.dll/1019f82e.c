/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019f82e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f82e(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ulonglong uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  
  local_20 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_1010330d();
  iVar2 = *(int *)(iVar2 + 0x2c);
  local_30 = *(undefined4 *)(iVar2 + 0x20);
  uStack_2c = *(undefined4 *)(iVar2 + 0x24);
  uStack_28 = *(undefined4 *)(iVar2 + 0x28);
  uStack_24 = *(undefined4 *)(iVar2 + 0x2c);
  iVar9 = *(int *)(*(int *)(iVar2 + 0x30) + 0x1c);
  iVar2 = *(int *)(*(int *)(iVar2 + 0x30) + 0x20);
  cVar1 = FUN_10107d2b("Example: Image Viewer",&DAT_103a33de,0,iVar9,iVar2,0,0);
  if (cVar1 != '\0') {
    FUN_101b5a8f();
    FUN_1010c3e4(&uStack_38);
    iVar3 = FUN_10111d44();
    uVar4 = (iVar3 << 0x1f) >> 0x1f;
    uVar6 = (iVar3 << 0x1f) >> 0x1f;
    fVar5 = (float)(~uVar4 & (uint)DAT_102b70a0 | (uint)((float)iVar9 * _DAT_10302670) & uVar4);
    fVar7 = (float)(~uVar6 & DAT_102b70a0._4_4_ | (uint)((float)iVar2 * _UNK_10302674) & uVar6);
    fVar8 = (float)(uStack_38 >> 0x20);
    uVar4 = -(uint)(fVar5 <= (float)uStack_38);
    uVar6 = -(uint)(fVar7 <= fVar8);
    uStack_38 = CONCAT44(~uVar6 & (uint)fVar7,~uVar4 & (uint)fVar5) |
                CONCAT44((uint)fVar8 & uVar6,(uint)(float)uStack_38 & uVar4);
    FUN_101b5b8e(local_30,uStack_2c,uStack_28,uStack_24,iVar2);
  }
  FUN_1010ad44();
  if (DAT_10388d00 == (local_20 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

