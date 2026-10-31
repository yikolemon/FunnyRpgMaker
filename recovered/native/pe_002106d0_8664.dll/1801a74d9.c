/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a74d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a74d9(void)

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
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar2 = FUN_180107ee8();
  fVar7 = DAT_1802de570._4_4_;
  fVar6 = (float)DAT_1802de570;
  if ((int)DAT_180420c1c < 0) {
    uVar5 = 0xb116b;
    if (DAT_180420c1c != 0xfffffffe) goto LAB_1801a75c4;
    local_38 = CONCAT44(DAT_1802de570._4_4_,(float)DAT_1802de570);
    lVar4 = FUN_18010f8ee();
    local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) * fVar7 +
                        (float)((ulonglong)*(undefined8 *)(lVar4 + 8) >> 0x20),
                        (float)*(undefined8 *)(lVar4 + 0x10) * fVar6 +
                        (float)*(undefined8 *)(lVar4 + 8));
    FUN_180116a8b(&local_40,1,&local_38);
  }
  else {
    puVar3 = (undefined4 *)FUN_18010f8ee();
    fVar6 = (float)*(undefined8 *)(puVar3 + 8);
    fVar7 = (float)((ulonglong)*(undefined8 *)(puVar3 + 8) >> 0x20);
    uVar8 = -(uint)((DAT_180420c1c & (uint)DAT_180328ff0) == 0);
    uVar9 = -(uint)((DAT_180420c1c & DAT_180328ff0._4_4_) == 0);
    local_38 = CONCAT44(~uVar9 & (uint)((float)((ulonglong)*(undefined8 *)(puVar3 + 10) >> 0x20) +
                                        fVar7 + _UNK_180329004),
                        ~uVar8 & (uint)((float)*(undefined8 *)(puVar3 + 10) + fVar6 + _DAT_180329000
                                       )) |
               CONCAT44((uint)(fVar7 + _UNK_1802de974) & uVar9,
                        (uint)(fVar6 + _DAT_1802de970) & uVar8);
    local_40 = CONCAT44(~uVar9 & DAT_1802dc280._4_4_,~uVar8 & (uint)DAT_1802dc280);
    FUN_180116a8b(&local_38,1);
    FUN_180116b67(*puVar3);
  }
  uVar5 = 0xb116f;
LAB_1801a75c4:
  FUN_180116b50(DAT_180329010);
  cVar1 = FUN_18010ca66("Example: Simple overlay",&DAT_18041f1ea,uVar5);
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x27ab,"Examples/Simple overlay");
    FUN_1801330a5("Simple overlay\n(right-click to change position)");
    FUN_180137ca1();
    cVar1 = FUN_1801088d4(0);
    if (cVar1 == '\0') {
      FUN_1801330a5("Mouse Position: <invalid>");
    }
    else {
      FUN_1801330a5("Mouse Position: (%.1f,%.1f)",(double)*(float *)(lVar2 + 0xe8),
                    (double)*(float *)(lVar2 + 0xec));
    }
    cVar1 = FUN_18011b8ee(0,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_1801377a6("Custom",0,DAT_180420c1c == 0xffffffff,1);
      uVar8 = DAT_180420c1c;
      if (cVar1 != '\0') {
        DAT_180420c1c = 0xffffffff;
      }
      cVar1 = FUN_1801377a6("Center",0,cVar1 == '\0' && uVar8 == 0xfffffffe,1);
      uVar8 = DAT_180420c1c;
      if (cVar1 != '\0') {
        DAT_180420c1c = 0xfffffffe;
      }
      cVar1 = FUN_1801377a6("Top-left",0,cVar1 == '\0' && uVar8 == 0,1);
      uVar8 = DAT_180420c1c;
      if (cVar1 != '\0') {
        DAT_180420c1c = 0;
      }
      cVar1 = FUN_1801377a6("Top-right",0,cVar1 == '\0' && uVar8 == 1,1);
      uVar8 = DAT_180420c1c;
      if (cVar1 != '\0') {
        DAT_180420c1c = 1;
      }
      cVar1 = FUN_1801377a6("Bottom-left",0,cVar1 == '\0' && uVar8 == 2,1);
      uVar8 = DAT_180420c1c;
      if (cVar1 != '\0') {
        DAT_180420c1c = 2;
      }
      cVar1 = FUN_1801377a6("Bottom-right",0,cVar1 == '\0' && uVar8 == 3,1);
      if (cVar1 != '\0') {
        DAT_180420c1c = 3;
      }
      cVar1 = FUN_1801377a6("Close",0,0,1);
      if (cVar1 != '\0') {
        DAT_18041f1ea = 0;
      }
      FUN_18011b3ef();
    }
  }
  FUN_18010f900();
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
  }
  return;
}

