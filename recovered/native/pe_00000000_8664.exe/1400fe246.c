/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fe246 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fe246(void)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_88 [40];
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  cVar2 = FUN_1400c51fb("Plotting");
  if (cVar2 == '\0') goto LAB_1400fe5bc;
  FUN_1400811b6("imgui_demo.cpp",0x85c,"Widgets/Plotting");
  FUN_1400abfd5("Need better plotting and graphing? Consider using ImPlot:");
  FUN_1400b062e("https://github.com/epezent/implot",0);
  FUN_1400b0bd1();
  FUN_1400aeb6a("Animate",&DAT_140f18180);
  local_98._0_4_ = 4;
  local_a0 = 0;
  local_a8 = 0x7f7fffff;
  local_b0._0_4_ = 0x7f7fffff;
  local_b8 = (undefined1 *)0x0;
  FUN_1400c9827("Frame Times",&DAT_140f18190,7,0);
  local_98 = CONCAT44(local_98._4_4_,4);
  local_a0 = 0x42a0000000000000;
  local_b8 = (undefined1 *)0x0;
  local_a8 = 0x3f800000;
  local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
  FUN_1400c9977("Histogram",&DAT_140f18190,7,0);
  if (DAT_140f18180 == '\x01') {
    uVar6 = SUB84(DAT_140f315a0,0);
    uVar10 = (undefined4)((ulonglong)DAT_140f315a0 >> 0x20);
    if ((DAT_140f315a0 == 0.0) && (!NAN(DAT_140f315a0))) goto LAB_1400fe37a;
  }
  else {
LAB_1400fe37a:
    DAT_140f315a0 = (double)FUN_14008124c();
    uVar6 = SUB84(DAT_140f315a0,0);
    uVar10 = (undefined4)((ulonglong)DAT_140f315a0 >> 0x20);
  }
  dVar8 = (double)FUN_14008124c();
  dVar1 = DAT_140e8d5e0;
  fVar7 = DAT_140210018;
  if ((double)CONCAT44(uVar10,uVar6) <= dVar8 && dVar8 != (double)CONCAT44(uVar10,uVar6)) {
    do {
      uVar6 = FUN_1401a27d0(DAT_140f315a8);
      (&DAT_140f31430)[DAT_140f31598] = uVar6;
      iVar3 = DAT_140f31598 +
              (int)((ulonglong)((longlong)(DAT_140f31598 + 1) * -0x49f49f49) >> 0x20) + 1;
      DAT_140f31598 = DAT_140f31598 + 1 + ((iVar3 >> 6) - (iVar3 >> 0x1f)) * -0x5a;
      DAT_140f315a8 = (float)DAT_140f31598 * fVar7 + DAT_140f315a8;
      dVar8 = DAT_140f315a0 + dVar1;
      DAT_140f315a0 = dVar8;
      dVar9 = (double)FUN_14008124c();
    } while (dVar8 < dVar9);
  }
  fVar7 = 0.0;
  lVar4 = 0;
  do {
    fVar7 = fVar7 + *(float *)((longlong)&DAT_140f31430 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x168);
  FUN_140104e1d(local_88,"avg %f",(double)(fVar7 / _DAT_140e8d5e8));
  local_a0 = 0x42a0000000000000;
  local_a8 = 0x3f800000;
  local_b0._0_4_ = 0xbf800000;
  local_98 = CONCAT44(local_98._4_4_,4);
  local_b8 = local_88;
  FUN_1400c9827("Lines",&DAT_140f31430,0x5a,DAT_140f31598);
  FUN_1400b1021("Functions");
  fVar7 = (float)FUN_14008ff20();
  FUN_140079071(fVar7 * DAT_1402116fc);
  FUN_1400b28c2(&DAT_140ecbff2,&DAT_140f315ac,&DAT_140edcc39,0xffffffff);
  FUN_140092bab(0,DAT_1401c86a4);
  local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
  local_b8 = &DAT_140ecbfd4;
  FUN_1400ba55a("Sample count",&DAT_140f181ac,1,400);
  puVar5 = &LAB_140104ebe;
  if (DAT_140f315ac == 0) {
    puVar5 = &LAB_140104eac;
  }
  local_98 = 0x42a0000000000000;
  local_a0._0_4_ = 0x3f800000;
  local_a8 = 0xbf800000;
  local_b0 = 0;
  local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1400c98e2("Lines##2",puVar5,0,DAT_140f181ac);
  local_98 = 0x42a0000000000000;
  local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
  local_a8 = 0xbf800000;
  local_b0 = 0;
  local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1400c9a21("Histogram##2",puVar5,0,DAT_140f181ac);
  FUN_1400c66d9();
LAB_1400fe5bc:
  if (DAT_140f17b40 != (local_60 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_60 ^ (ulonglong)auStack_d8);
  }
  return;
}

