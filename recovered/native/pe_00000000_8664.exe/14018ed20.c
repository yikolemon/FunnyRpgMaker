/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018ed20 */

uint FUN_14018ed20(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint unaff_EBX;
  
  cVar2 = FUN_140188cb0(1);
  if (cVar2 == '\0') {
    FUN_14018e4a0(7);
  }
  else {
    bVar1 = false;
    bVar3 = FUN_140188c30();
    unaff_EBX = (uint)bVar3;
    if (DAT_140f2a9a8 != 1) {
      if (DAT_140f2a9a8 == 0) {
        DAT_140f2a9a8 = 1;
        iVar5 = FUN_14019f7a8(&DAT_140ee16e0,&DAT_140ee1720);
        if (iVar5 != 0) {
          return 0xff;
        }
        FUN_14019f770(&DAT_140ee15f8,&DAT_140ee16d8);
        DAT_140f2a9a8 = 2;
      }
      else {
        bVar1 = true;
      }
      FUN_140188c80(unaff_EBX);
      plVar6 = (longlong *)FUN_14018efe0();
      if ((*plVar6 != 0) && (cVar2 = FUN_140188b90(plVar6), cVar2 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_140ee15d0)(0,2,0);
      }
      plVar6 = (longlong *)FUN_14018eff0();
      if ((*plVar6 != 0) && (cVar2 = FUN_140188b90(plVar6), cVar2 != '\0')) {
        FUN_14019c45c(*plVar6);
      }
      uVar4 = FUN_14018e3b0();
      uVar7 = FUN_14019ef94();
      unaff_EBX = FUN_1400011e2(&IMAGE_DOS_HEADER_140000000,0,uVar7,uVar4);
      cVar2 = FUN_14018e410();
      if (cVar2 != '\0') {
        if (!bVar1) {
          FUN_14019c43c();
        }
        FUN_140188cf0(1,0);
        return unaff_EBX;
      }
      goto LAB_14018ee84;
    }
  }
  FUN_14018e4a0(7);
LAB_14018ee84:
  FUN_14019c424(unaff_EBX);
                    /* WARNING: Subroutine does not return */
  FUN_14019c430(unaff_EBX);
}

