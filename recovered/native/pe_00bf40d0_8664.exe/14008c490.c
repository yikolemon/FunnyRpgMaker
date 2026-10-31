/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008c490 */

ulonglong FUN_14008c490(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  int *piVar9;
  uint unaff_EBX;
  undefined8 in_R9;
  undefined1 uVar10;
  
  uVar3 = FUN_14008b740(1);
  if ((char)uVar3 == '\0') {
    FUN_14008c330(7);
  }
  else {
    bVar1 = false;
    uVar10 = 0;
    uVar3 = FUN_14008b6c0();
    unaff_EBX = (uint)uVar3 & 0xff;
    if (DAT_14013d268 != 1) {
      if (DAT_14013d268 == 0) {
        DAT_14013d268 = 1;
        uVar4 = FUN_1400966bc((undefined8 *)&DAT_1401201f8,(undefined8 *)&DAT_140120238);
        if ((int)uVar4 != 0) {
          return 0xff;
        }
        FUN_140096684((undefined8 *)&DAT_140120118,(undefined8 *)&DAT_1401201f0);
        DAT_14013d268 = 2;
      }
      else {
        bVar1 = true;
        uVar10 = 1;
      }
      FUN_14008b710((char)uVar3);
      plVar5 = (longlong *)FUN_14008c740();
      if ((*plVar5 != 0) && (uVar6 = FUN_14008b620((longlong)plVar5), (char)uVar6 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_1401200f0)(0,2,0,in_R9,uVar10);
      }
      ppuVar7 = FUN_14008c750();
      if ((*ppuVar7 != (undefined *)0x0) &&
         (uVar6 = FUN_14008b620((longlong)ppuVar7), (char)uVar6 != '\0')) {
        FUN_140093a0c((ulonglong)*ppuVar7);
      }
      FUN_1400962ec();
      puVar8 = FUN_14008ebcc();
      puVar8 = (undefined8 *)*puVar8;
      piVar9 = (int *)FUN_14008ebc4();
      uVar6 = FUN_140001000(*piVar9,puVar8);
      unaff_EBX = (uint)uVar6;
      bVar2 = FUN_14008c2b0();
      if (bVar2) {
        if (!bVar1) {
          FUN_1400939ec();
        }
        FUN_14008b780(true,'\0');
        return uVar6 & 0xffffffff;
      }
      goto LAB_14008c5ff;
    }
  }
  FUN_14008c330(7);
LAB_14008c5ff:
  FUN_1400939d4(unaff_EBX);
                    /* WARNING: Subroutine does not return */
  FUN_1400939e0(unaff_EBX);
}

