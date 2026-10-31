/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019fe93 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019fe93(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_1c;
  ulonglong local_14;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_1c;
  iVar2 = FUN_1010330d();
  if ((int)DAT_103a4c54 < 0) {
    if (DAT_103a4c54 == 0xfffffffe) {
      local_14 = CONCAT44(DAT_102b89c0._4_4_,(float)DAT_102b89c0);
      iVar3 = FUN_1010ad36();
      local_1c = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20) *
                          DAT_102b89c0._4_4_ +
                          (float)((ulonglong)*(undefined8 *)(iVar3 + 8) >> 0x20),
                          (float)*(undefined8 *)(iVar3 + 0x10) * (float)DAT_102b89c0 +
                          (float)*(undefined8 *)(iVar3 + 8));
      FUN_10111d56();
    }
  }
  else {
    iVar3 = FUN_1010ad36();
    fVar4 = (float)*(undefined8 *)(iVar3 + 0x20);
    fVar5 = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x20) >> 0x20);
    uVar6 = -(uint)((DAT_103a4c54 & (uint)DAT_102b7290) == 0);
    uVar7 = -(uint)((DAT_103a4c54 & DAT_102b7290._4_4_) == 0);
    local_14 = CONCAT44(~uVar7 & (uint)((float)((ulonglong)*(undefined8 *)(iVar3 + 0x28) >> 0x20) +
                                        fVar5 + _UNK_103026b4),
                        ~uVar6 & (uint)((float)*(undefined8 *)(iVar3 + 0x28) + fVar4 + _DAT_103026b0
                                       )) |
               CONCAT44((uint)(fVar5 + _UNK_102b8f04) & uVar7,(uint)(fVar4 + _DAT_102b8f00) & uVar6)
    ;
    local_1c = CONCAT44(~uVar7 & DAT_102b70a0._4_4_,~uVar6 & (uint)DAT_102b70a0);
    FUN_10111d56();
    FUN_10111e7d();
  }
  FUN_10111e62();
  cVar1 = FUN_10107d2b();
  if (cVar1 != '\0') {
    FUN_101032c6();
    FUN_1012d08c();
    FUN_10132188();
    cVar1 = FUN_10103c30();
    if (cVar1 == '\0') {
      FUN_1012d08c();
    }
    else {
      FUN_1012d08c("Mouse Position: (%.1f,%.1f)",(double)*(float *)(iVar2 + 0xb4),
                   (double)*(float *)(iVar2 + 0xb8));
    }
    cVar1 = FUN_10116a7b(0,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_10131d08("Custom",0,DAT_103a4c54 == 0xffffffff,1);
      uVar6 = DAT_103a4c54;
      if (cVar1 != '\0') {
        DAT_103a4c54 = 0xffffffff;
      }
      cVar1 = FUN_10131d08("Center",0,cVar1 == '\0' && uVar6 == 0xfffffffe,1);
      uVar6 = DAT_103a4c54;
      if (cVar1 != '\0') {
        DAT_103a4c54 = 0xfffffffe;
      }
      cVar1 = FUN_10131d08("Top-left",0,cVar1 == '\0' && uVar6 == 0,1);
      uVar6 = DAT_103a4c54;
      if (cVar1 != '\0') {
        DAT_103a4c54 = 0;
      }
      cVar1 = FUN_10131d08("Top-right",0,cVar1 == '\0' && uVar6 == 1,1);
      uVar6 = DAT_103a4c54;
      if (cVar1 != '\0') {
        DAT_103a4c54 = 1;
      }
      cVar1 = FUN_10131d08("Bottom-left",0,cVar1 == '\0' && uVar6 == 2,1);
      uVar6 = DAT_103a4c54;
      if (cVar1 != '\0') {
        DAT_103a4c54 = 2;
      }
      cVar1 = FUN_10131d08("Bottom-right",0,cVar1 == '\0' && uVar6 == 3,1);
      if (cVar1 != '\0') {
        DAT_103a4c54 = 3;
      }
      cVar1 = FUN_10131d08("Close",0,0,1);
      if (cVar1 != '\0') {
        DAT_103a33e2 = 0;
      }
      FUN_101165cb();
    }
  }
  FUN_1010ad44();
  if (DAT_10388d00 != (local_c ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

