/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140105ee0 */

uint FUN_140105ee0(void)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint unaff_EBX;
  undefined8 in_R9;
  undefined1 uVar10;
  
  cVar3 = FUN_1400d38a0(1);
  if (cVar3 == '\0') {
    FUN_1400de070(7);
  }
  else {
    bVar2 = false;
    uVar10 = 0;
    bVar4 = FUN_1400d3820();
    unaff_EBX = (uint)bVar4;
    if (DAT_1401cc270 != 1) {
      if (DAT_1401cc270 == 0) {
        DAT_1401cc270 = 1;
        iVar5 = FUN_1401151f0(&DAT_140178dc8,&DAT_140178e08);
        if (iVar5 != 0) {
          return 0xff;
        }
        FUN_1401151b8(&DAT_140178c48,&DAT_140178dc0);
        DAT_1401cc270 = 2;
      }
      else {
        bVar2 = true;
        uVar10 = 1;
      }
      FUN_1400d3870(unaff_EBX);
      plVar6 = (longlong *)FUN_1401061b0();
      if ((*plVar6 != 0) && (cVar3 = FUN_1400d3780(plVar6), cVar3 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_140178c20)(0,2,0,in_R9,uVar10);
      }
      plVar6 = (longlong *)FUN_1401061c0();
      if ((*plVar6 != 0) && (cVar3 = FUN_1400d3780(plVar6), cVar3 != '\0')) {
        FUN_140111620(*plVar6);
      }
      uVar7 = FUN_140114b7c();
      puVar8 = (undefined8 *)FUN_14010b4c8();
      uVar1 = *puVar8;
      puVar9 = (undefined4 *)FUN_14010b4c0();
      unaff_EBX = FUN_14000215e(*puVar9,uVar1,uVar7);
      cVar3 = FUN_1400ddfe0();
      if (cVar3 != '\0') {
        if (!bVar2) {
          FUN_140111600();
        }
        FUN_1400d38e0(1,0);
        return unaff_EBX;
      }
      goto LAB_14010604f;
    }
  }
  FUN_1400de070(7);
LAB_14010604f:
  FUN_1401115e8(unaff_EBX);
                    /* WARNING: Subroutine does not return */
  FUN_1401115f4(unaff_EBX);
}

