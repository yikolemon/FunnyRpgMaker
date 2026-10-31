/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10012f38 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_10012f38(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *local_14c;
  undefined1 *local_148;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  int *piStack_114;
  undefined1 auStack_110 [7];
  undefined1 local_109;
  undefined1 local_108;
  char local_105;
  undefined1 *local_104;
  undefined1 local_100;
  char *local_fc;
  int local_f8 [10];
  char local_d0;
  undefined1 local_c0 [28];
  undefined1 local_a4 [24];
  char local_8c;
  undefined1 local_88 [96];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_110;
  local_18 = 0xffffffff;
  local_1c = &LAB_10058d60;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  puVar1 = &stack0xfffffffc;
  puVar2 = auStack_110;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c778) {
    piStack_114 = &DAT_1039c778;
    puStack_118 = (undefined4 *)0x100132bb;
    FUN_1022c0d0();
    puVar1 = local_28;
    puVar2 = local_24;
    if (DAT_1039c778 == -1) {
      local_18 = 2;
      piStack_114 = local_f8;
      puStack_118 = (undefined4 *)0x100132df;
      FUN_10012c2d();
      local_18 = 3;
      piStack_114 = local_f8;
      puStack_118 = (undefined4 *)0x100132fb;
      FUN_10013722();
      local_18 = 0xffffffff;
      piStack_114 = (int *)0x1001330e;
      FUN_10001fee();
      piStack_114 = (int *)&LAB_100137e2;
      puStack_118 = (undefined4 *)0x10013318;
      FUN_1022c3a0();
      piStack_114 = &DAT_1039c778;
      puStack_118 = (undefined4 *)0x10013326;
      FUN_1022c180();
      puVar1 = local_28;
      puVar2 = local_24;
    }
  }
  local_24 = puVar2;
  local_28 = puVar1;
  piStack_114 = (int *)0x10012fa0;
  FUN_100446d6();
  local_18 = 6;
  piStack_114 = (int *)0x10012fb4;
  cVar3 = FUN_100138b2();
  if (cVar3 != '\0') {
    piStack_114 = (int *)param_2[4];
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    uStack_11c = 0x10012fd7;
    puStack_118 = param_2;
    cVar3 = FUN_1001610a();
    if (cVar3 != '\0') {
      piStack_114 = (int *)local_a4;
      puStack_118 = (undefined4 *)0x10012fed;
      uVar4 = FUN_100139b0();
      local_105 = local_8c;
      if (local_8c == '\x01') {
        local_24 = (undefined1 *)&local_14c;
        local_120 = 0;
        local_14c = local_c0;
        local_148 = local_a4;
        uStack_11c = CONCAT31(uStack_11c._1_3_,1);
        puStack_118 = (undefined4 *)((uint)puStack_118 & 0xffffff00);
        piStack_114 = (int *)(uVar4 & 0xffffff00);
        local_18 = 8;
        local_104 = auStack_110;
        FUN_10013ab0();
        puVar1 = local_104;
        local_24 = local_104;
        local_18 = 10;
        *(char **)(local_104 + -4) = "code";
        *(undefined4 *)(puVar1 + -8) = 0x10013080;
        uVar5 = FUN_10013d2e();
        local_f8[0] = 0;
        *(int **)(puVar1 + -4) = local_f8;
        *(undefined4 *)(puVar1 + -8) = uVar5;
        *(undefined4 *)(puVar1 + -0xc) = 0x10013095;
        FUN_100561d8();
        local_104 = (undefined1 *)local_f8[0];
        *(char **)(puVar1 + -4) = "result";
        *(undefined4 *)(puVar1 + -8) = 0x100130a9;
        local_fc = (char *)FUN_10013d2e();
        if (local_104 == (undefined1 *)0xc8) {
          *(char **)(puVar1 + -4) = local_fc;
          *(undefined4 *)(puVar1 + -8) = 0x100130c4;
          FUN_10013db4();
          local_d0 = '\0';
          local_18 = 0x11;
          *(int **)(puVar1 + -4) = local_f8;
          *(undefined4 *)(puVar1 + -8) = 0x10013101;
          FUN_10013f70();
          local_18 = 0xffffffff;
          if (local_d0 == '\x01') {
            *(undefined4 *)(puVar1 + -4) = 0x1001313b;
            FUN_10001fee();
          }
          *(undefined4 *)(puVar1 + -4) = 0x10013143;
          FUN_10013efc();
        }
        else {
          *(undefined4 *)(puVar1 + -4) = 9;
          *(undefined4 *)(puVar1 + -8) = 0x10013152;
          FUN_10014148();
          uVar5 = DAT_1028f540._4_4_;
          local_18 = 0xb;
          if (*local_fc == '\x03') {
            local_108 = 1;
            puVar1[-4] = local_100;
            *(undefined1 **)(puVar1 + -8) = local_88;
            *(undefined4 *)(puVar1 + -0xc) = 0x10013187;
            FUN_100173ea();
          }
          else {
            local_108 = 1;
            *(undefined4 *)(puVar1 + -0x10) = (undefined4)DAT_1028f540;
            *(undefined4 *)(puVar1 + -0xc) = uVar5;
            *(undefined4 *)(puVar1 + -8) = 0;
            *(undefined4 *)(puVar1 + -4) = 0;
            *(undefined1 **)(puVar1 + -0x14) = local_88;
            *(undefined4 *)(puVar1 + -0x18) = 0x100131ac;
            FUN_100141c8();
          }
          local_109 = 1;
          local_18 = 0xc;
          *(undefined1 **)(puVar1 + -4) = local_88;
          *(undefined4 *)(puVar1 + -8) = 0x100131ca;
          FUN_100143a8();
          local_18 = 0xd;
          *(int **)(puVar1 + -4) = local_f8;
          *(undefined4 *)(puVar1 + -8) = 0x100131f7;
          FUN_10013f70();
          local_18 = 0xffffffff;
          if (local_d0 == '\x01') {
            *(undefined4 *)(puVar1 + -4) = 0x10013231;
            FUN_10001fee();
          }
          *(undefined4 *)(puVar1 + -4) = 0x10013239;
          FUN_10013efc();
          local_109 = 0;
          *(undefined4 *)(puVar1 + -4) = 0x10013248;
          FUN_10001fee();
          local_108 = 0;
        }
        *(undefined4 *)(puVar1 + -4) = 0x10013254;
        FUN_10013efc();
      }
      local_18 = 0xffffffff;
      if (local_8c == '\x01') {
        piStack_114 = (int *)0x10013271;
        FUN_10001fee();
      }
      if (local_105 != '\0') goto code_r0x1001328c;
    }
  }
  piStack_114 = (int *)0x10013281;
  FUN_10014580();
  local_18 = 0xffffffff;
code_r0x1001328c:
  piStack_114 = (int *)&DAT_10384360;
  puStack_118 = (undefined4 *)0x10013296;
  FUN_1022c200();
  ExceptionList = local_20;
  return param_1;
}

