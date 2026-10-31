/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ed15d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ed15d(void)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  lVar2 = FUN_140081200();
  fVar7 = DAT_1401c8640._4_4_;
  fVar6 = (float)DAT_1401c8640;
  if ((int)DAT_140f3236c < 0) {
    uVar5 = 0xb116b;
    if (DAT_140f3236c != 0xfffffffe) goto LAB_1400ed248;
    local_38 = CONCAT44(DAT_1401c8640._4_4_,(float)DAT_1401c8640);
    lVar4 = FUN_140088c06();
    local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) * fVar7 +
                        (float)((ulonglong)*(undefined8 *)(lVar4 + 8) >> 0x20),
                        (float)*(undefined8 *)(lVar4 + 0x10) * fVar6 +
                        (float)*(undefined8 *)(lVar4 + 8));
    FUN_14008fda3(&local_40,1,&local_38);
  }
  else {
    puVar3 = (undefined4 *)FUN_140088c06();
    fVar6 = (float)*(undefined8 *)(puVar3 + 8);
    fVar7 = (float)((ulonglong)*(undefined8 *)(puVar3 + 8) >> 0x20);
    uVar8 = -(uint)((DAT_140f3236c & (uint)DAT_140e8d390) == 0);
    uVar9 = -(uint)((DAT_140f3236c & DAT_140e8d390._4_4_) == 0);
    local_38 = CONCAT44(~uVar9 & (uint)((float)((ulonglong)*(undefined8 *)(puVar3 + 10) >> 0x20) +
                                        fVar7 + _UNK_140e8d3a4),
                        ~uVar8 & (uint)((float)*(undefined8 *)(puVar3 + 10) + fVar6 + _DAT_140e8d3a0
                                       )) |
               CONCAT44((uint)(fVar7 + _UNK_1402116e4) & uVar9,
                        (uint)(fVar6 + _DAT_1402116e0) & uVar8);
    local_40 = CONCAT44(~uVar9 & DAT_1401c8660._4_4_,~uVar8 & (uint)DAT_1401c8660);
    FUN_14008fda3(&local_38,1);
    FUN_14008fe7f(*puVar3);
  }
  uVar5 = 0xb116f;
LAB_1400ed248:
  FUN_14008fe68(DAT_140e8d3b0);
  cVar1 = FUN_140085d7e("Example: Simple overlay",&DAT_140f3093a,uVar5);
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x27ab,"Examples/Simple overlay");
    FUN_1400abfd5("Simple overlay\n(right-click to change position)");
    FUN_1400b0bd1();
    cVar1 = FUN_140081bec(0);
    if (cVar1 == '\0') {
      FUN_1400abfd5("Mouse Position: <invalid>");
    }
    else {
      FUN_1400abfd5("Mouse Position: (%.1f,%.1f)",(double)*(float *)(lVar2 + 0xe8),
                    (double)*(float *)(lVar2 + 0xec));
    }
    cVar1 = FUN_140094baa(0,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_1400b06d6("Custom",0,DAT_140f3236c == 0xffffffff,1);
      uVar8 = DAT_140f3236c;
      if (cVar1 != '\0') {
        DAT_140f3236c = 0xffffffff;
      }
      cVar1 = FUN_1400b06d6("Center",0,cVar1 == '\0' && uVar8 == 0xfffffffe,1);
      uVar8 = DAT_140f3236c;
      if (cVar1 != '\0') {
        DAT_140f3236c = 0xfffffffe;
      }
      cVar1 = FUN_1400b06d6("Top-left",0,cVar1 == '\0' && uVar8 == 0,1);
      uVar8 = DAT_140f3236c;
      if (cVar1 != '\0') {
        DAT_140f3236c = 0;
      }
      cVar1 = FUN_1400b06d6("Top-right",0,cVar1 == '\0' && uVar8 == 1,1);
      uVar8 = DAT_140f3236c;
      if (cVar1 != '\0') {
        DAT_140f3236c = 1;
      }
      cVar1 = FUN_1400b06d6("Bottom-left",0,cVar1 == '\0' && uVar8 == 2,1);
      uVar8 = DAT_140f3236c;
      if (cVar1 != '\0') {
        DAT_140f3236c = 2;
      }
      cVar1 = FUN_1400b06d6("Bottom-right",0,cVar1 == '\0' && uVar8 == 3,1);
      if (cVar1 != '\0') {
        DAT_140f3236c = 3;
      }
      cVar1 = FUN_1400b06d6("Close",0,0,1);
      if (cVar1 != '\0') {
        DAT_140f3093a = 0;
      }
      FUN_1400946ab();
    }
  }
  FUN_140088c18();
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
  }
  return;
}

