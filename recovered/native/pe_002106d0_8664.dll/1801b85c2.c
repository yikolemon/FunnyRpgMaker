/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b85c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b85c2(void)

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
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_d8;
  cVar2 = FUN_18014c2cb("Plotting");
  if (cVar2 == '\0') goto LAB_1801b8938;
  FUN_180107e9e("imgui_demo.cpp",0x85c,"Widgets/Plotting");
  FUN_1801330a5("Need better plotting and graphing? Consider using ImPlot:");
  FUN_1801376fe("https://github.com/epezent/implot",0);
  FUN_180137ca1();
  FUN_180135c3a("Animate",&DAT_1804049e0);
  local_98._0_4_ = 4;
  local_a0 = 0;
  local_a8 = 0x7f7fffff;
  local_b0._0_4_ = 0x7f7fffff;
  local_b8 = (undefined1 *)0x0;
  FUN_1801508f7("Frame Times",&DAT_1804049f0,7,0);
  local_98 = CONCAT44(local_98._4_4_,4);
  local_a0 = 0x42a0000000000000;
  local_b8 = (undefined1 *)0x0;
  local_a8 = 0x3f800000;
  local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
  FUN_180150a47("Histogram",&DAT_1804049f0,7,0);
  if (DAT_1804049e0 == '\x01') {
    uVar6 = SUB84(DAT_18041fe50,0);
    uVar10 = (undefined4)((ulonglong)DAT_18041fe50 >> 0x20);
    if ((DAT_18041fe50 == 0.0) && (!NAN(DAT_18041fe50))) goto LAB_1801b86f6;
  }
  else {
LAB_1801b86f6:
    DAT_18041fe50 = (double)FUN_180107f34();
    uVar6 = SUB84(DAT_18041fe50,0);
    uVar10 = (undefined4)((ulonglong)DAT_18041fe50 >> 0x20);
  }
  dVar8 = (double)FUN_180107f34();
  dVar1 = DAT_180329250;
  fVar7 = DAT_1802dc268;
  if ((double)CONCAT44(uVar10,uVar6) <= dVar8 && dVar8 != (double)CONCAT44(uVar10,uVar6)) {
    do {
      uVar6 = FUN_180284590(DAT_18041fe58);
      (&DAT_18041fce0)[DAT_18041fe48] = uVar6;
      iVar3 = DAT_18041fe48 +
              (int)((ulonglong)((longlong)(DAT_18041fe48 + 1) * -0x49f49f49) >> 0x20) + 1;
      DAT_18041fe48 = DAT_18041fe48 + 1 + ((iVar3 >> 6) - (iVar3 >> 0x1f)) * -0x5a;
      DAT_18041fe58 = (float)DAT_18041fe48 * fVar7 + DAT_18041fe58;
      dVar8 = DAT_18041fe50 + dVar1;
      DAT_18041fe50 = dVar8;
      dVar9 = (double)FUN_180107f34();
    } while (dVar8 < dVar9);
  }
  fVar7 = 0.0;
  lVar4 = 0;
  do {
    fVar7 = fVar7 + *(float *)((longlong)&DAT_18041fce0 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x168);
  FUN_1801bf199(local_88,"avg %f",(double)(fVar7 / _DAT_180329258));
  local_a0 = 0x42a0000000000000;
  local_a8 = 0x3f800000;
  local_b0._0_4_ = 0xbf800000;
  local_98 = CONCAT44(local_98._4_4_,4);
  local_b8 = local_88;
  FUN_1801508f7("Lines",&DAT_18041fce0,0x5a,DAT_18041fe48);
  FUN_1801380f1("Functions");
  fVar7 = (float)FUN_180116c08();
  FUN_1800ffdb5(fVar7 * DAT_1802de98c);
  FUN_180139992(&DAT_18036b4ce,&DAT_18041fe5c,&DAT_18038605e,0xffffffff);
  FUN_180119893(0,DAT_1802bb8e0);
  local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
  local_b8 = &DAT_18036b4b0;
  FUN_18014162a("Sample count",&DAT_180404a0c,1,400);
  puVar5 = &LAB_1801bf23a;
  if (DAT_18041fe5c == 0) {
    puVar5 = &LAB_1801bf228;
  }
  local_98 = 0x42a0000000000000;
  local_a0._0_4_ = 0x3f800000;
  local_a8 = 0xbf800000;
  local_b0 = 0;
  local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_1801509b2("Lines##2",puVar5,0,DAT_180404a0c);
  local_98 = 0x42a0000000000000;
  local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
  local_a8 = 0xbf800000;
  local_b0 = 0;
  local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_180150af1("Histogram##2",puVar5,0,DAT_180404a0c);
  FUN_18014d7a9();
LAB_1801b8938:
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_d8);
  }
  return;
}

