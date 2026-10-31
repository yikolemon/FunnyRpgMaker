/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140088532 */

void FUN_140088532(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar4 = DAT_140f2a910;
  if (*(int *)(DAT_140f2a910 + 8) == *(int *)(DAT_140f2a910 + 4)) {
    return;
  }
  if (*(char *)(DAT_140f2a910 + 1) == '\0') {
    FUN_14007a954("Forgot to call ImGui::NewFrame()?");
    return;
  }
  FUN_14007f8cb(DAT_140f2a910,2);
  if (*(char *)(lVar4 + 0xb0) == '\x01') {
    FUN_14008899c(lVar4 + 0x2aa8);
  }
  FUN_140088a52();
  pcVar10 = *(code **)(lVar4 + 0xc70);
  if (pcVar10 != (code *)0x0) {
    auVar15[0] = -(*(char *)(lVar4 + 0x290c) == *(char *)(lVar4 + 0x28f8));
    auVar15[1] = -(*(char *)(lVar4 + 0x290d) == *(char *)(lVar4 + 0x28f9));
    auVar15[2] = -(*(char *)(lVar4 + 0x290e) == *(char *)(lVar4 + 0x28fa));
    auVar15[3] = -(*(char *)(lVar4 + 0x290f) == *(char *)(lVar4 + 0x28fb));
    auVar15[4] = -(*(char *)(lVar4 + 0x2910) == *(char *)(lVar4 + 0x28fc));
    auVar15[5] = -(*(char *)(lVar4 + 0x2911) == *(char *)(lVar4 + 0x28fd));
    auVar15[6] = -(*(char *)(lVar4 + 0x2912) == *(char *)(lVar4 + 0x28fe));
    auVar15[7] = -(*(char *)(lVar4 + 0x2913) == *(char *)(lVar4 + 0x28ff));
    auVar15[8] = -(*(char *)(lVar4 + 0x2914) == *(char *)(lVar4 + 0x2900));
    auVar15[9] = -(*(char *)(lVar4 + 0x2915) == *(char *)(lVar4 + 0x2901));
    auVar15[10] = -(*(char *)(lVar4 + 0x2916) == *(char *)(lVar4 + 0x2902));
    auVar15[0xb] = -(*(char *)(lVar4 + 0x2917) == *(char *)(lVar4 + 0x2903));
    auVar15[0xc] = -(*(char *)(lVar4 + 0x2918) == *(char *)(lVar4 + 0x2904));
    auVar15[0xd] = -(*(char *)(lVar4 + 0x2919) == *(char *)(lVar4 + 0x2905));
    auVar15[0xe] = -(*(char *)(lVar4 + 0x291a) == *(char *)(lVar4 + 0x2906));
    auVar15[0xf] = -(*(char *)(lVar4 + 0x291b) == *(char *)(lVar4 + 0x2907));
    uVar6 = *(undefined4 *)(lVar4 + 0x2908);
    uVar2 = *(undefined4 *)(lVar4 + 0x291c);
    auVar16[0] = -((char)uVar2 == (char)uVar6);
    auVar16[1] = -((char)((uint)uVar2 >> 8) == (char)((uint)uVar6 >> 8));
    auVar16[2] = -((char)((uint)uVar2 >> 0x10) == (char)((uint)uVar6 >> 0x10));
    auVar16[3] = -((char)((uint)uVar2 >> 0x18) == (char)((uint)uVar6 >> 0x18));
    auVar16[4] = 0xff;
    auVar16[5] = 0xff;
    auVar16[6] = 0xff;
    auVar16[7] = 0xff;
    auVar16[8] = 0xff;
    auVar16[9] = 0xff;
    auVar16[10] = 0xff;
    auVar16[0xb] = 0xff;
    auVar16[0xc] = 0xff;
    auVar16[0xd] = 0xff;
    auVar16[0xe] = 0xff;
    auVar16[0xf] = 0xff;
    auVar16 = auVar16 & auVar15;
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) != 0xffff) {
      puVar7 = (undefined4 *)FUN_140088bd1(*(undefined4 *)(lVar4 + 0x2908));
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)FUN_140088c06();
      }
      if ((*(byte *)(lVar4 + 0x2acc) & 0x80) != 0) {
        FUN_1400772a6("[io] Calling Platform_SetImeDataFn(): WantVisible: %d, InputPos (%.2f,%.2f) for Viewport 0x%08X\n"
                      ,*(undefined1 *)(lVar4 + 0x28f8),(double)*(float *)(lVar4 + 0x28fc),
                      (double)*(float *)(lVar4 + 0x2900),*puVar7);
        pcVar10 = *(code **)(lVar4 + 0xc70);
      }
      (*pcVar10)(lVar4,puVar7,lVar4 + 0x28f8);
    }
  }
  *(uint *)(lVar4 + 0x2cd4) = (uint)*(byte *)(lVar4 + 0x28f9);
  *(undefined1 *)(lVar4 + 2) = 0;
  lVar11 = *(longlong *)(lVar4 + 0x1608);
  if (((lVar11 != 0) && (*(char *)(lVar11 + 0x112) == '\x01')) &&
     (*(char *)(lVar11 + 0x10b) == '\0')) {
    *(undefined1 *)(lVar11 + 0x109) = 0;
    if ((*(longlong *)(lVar4 + 0x2200) != 0) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x2200) + 0x418) == *(longlong *)(lVar4 + 0x1608))) {
      FUN_140081404(0,0);
    }
  }
  FUN_140088c18();
  FUN_140088e1e();
  uVar14 = FUN_140088e70(lVar4);
  FUN_140088ff6(uVar14,0);
  iVar9 = *(int *)(lVar4 + 4);
  if (*(char *)(lVar4 + 0x2428) != '\x01') goto LAB_140088733;
  cVar1 = *(char *)(lVar4 + 0x2472);
  if (*(int *)(lVar4 + 0x2430) + 1 < iVar9) {
    if ((((*(byte *)(lVar4 + 0x242c) & 0x20) != 0) || (*(int *)(lVar4 + 0x2434) == -1)) ||
       ((cVar5 = FUN_140089065(), cVar1 != '\0' || (cVar5 == '\0')))) {
LAB_1400886f0:
      FUN_14008470a();
      iVar9 = *(int *)(lVar4 + 4);
      if (*(char *)(lVar4 + 0x2428) != '\x01') goto LAB_140088733;
    }
  }
  else if (cVar1 != '\0') goto LAB_1400886f0;
  if ((*(int *)(lVar4 + 0x2430) + 1 < iVar9) && ((*(byte *)(lVar4 + 0x242c) & 1) == 0)) {
    *(undefined1 *)(lVar4 + 0x2429) = 1;
    FUN_140080f0f("...");
    *(undefined1 *)(lVar4 + 0x2429) = 0;
    iVar9 = *(int *)(lVar4 + 4);
  }
LAB_140088733:
  *(undefined1 *)(lVar4 + 1) = 0;
  *(int *)(lVar4 + 8) = iVar9;
  thunk_FUN_140090e29();
  FUN_140081ce1();
  FUN_14008908e();
  uVar8 = *(uint *)(lVar4 + 0x15cc);
  if ((int)uVar8 < 0) {
    uVar8 = 0;
    uVar14 = FUN_140077ab4(0);
    if (*(longlong *)(lVar4 + 0x15d0) != 0) {
      FUN_1401c5180(uVar14,*(longlong *)(lVar4 + 0x15d0),(longlong)*(int *)(lVar4 + 0x15c8) << 3);
      FUN_140077b90(*(undefined8 *)(lVar4 + 0x15d0));
    }
    *(undefined8 *)(lVar4 + 0x15d0) = uVar14;
    *(undefined4 *)(lVar4 + 0x15cc) = 0;
  }
  *(undefined4 *)(lVar4 + 0x15c8) = 0;
  uVar3 = *(uint *)(lVar4 + 0x15a8);
  uVar12 = uVar3;
  if ((int)uVar8 < (int)uVar3) {
    uVar14 = FUN_140077ab4((ulonglong)uVar3 * 8);
    if (*(longlong *)(lVar4 + 0x15d0) != 0) {
      FUN_1401c5180(uVar14,*(longlong *)(lVar4 + 0x15d0),(longlong)*(int *)(lVar4 + 0x15c8) << 3);
      FUN_140077b90(*(undefined8 *)(lVar4 + 0x15d0));
    }
    *(undefined8 *)(lVar4 + 0x15d0) = uVar14;
    *(uint *)(lVar4 + 0x15cc) = uVar3;
    uVar12 = *(uint *)(lVar4 + 0x15a8);
    uVar8 = uVar3;
  }
  lVar11 = *(longlong *)(lVar4 + 0x15b0);
  if (uVar12 == 0) {
    uVar6 = 0;
  }
  else {
    lVar13 = 0;
    do {
      if ((*(char *)(*(longlong *)(lVar11 + lVar13) + 0x109) != '\x01') ||
         ((*(byte *)(*(longlong *)(lVar11 + lVar13) + 0x17) & 1) == 0)) {
        FUN_14008923b(lVar4 + 0x15c8);
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)uVar12 * 8 != lVar13);
    uVar6 = *(undefined4 *)(lVar4 + 0x15a8);
    uVar8 = *(uint *)(lVar4 + 0x15cc);
    lVar11 = *(longlong *)(lVar4 + 0x15b0);
  }
  uVar2 = *(undefined4 *)(lVar4 + 0x15c8);
  *(undefined4 *)(lVar4 + 0x15c8) = uVar6;
  *(undefined4 *)(lVar4 + 0x15a8) = uVar2;
  *(undefined4 *)(lVar4 + 0x15cc) = *(undefined4 *)(lVar4 + 0x15ac);
  *(uint *)(lVar4 + 0x15ac) = uVar8;
  uVar14 = *(undefined8 *)(lVar4 + 0x15d0);
  *(longlong *)(lVar4 + 0x15d0) = lVar11;
  *(undefined8 *)(lVar4 + 0x15b0) = uVar14;
  *(undefined4 *)(lVar4 + 0x100) = *(undefined4 *)(lVar4 + 0x15f8);
  FUN_14008931f();
  iVar9 = *(int *)(lVar4 + 0x1300);
  if ((longlong)iVar9 != 0) {
    lVar11 = *(longlong *)(lVar4 + 0x1308);
    lVar13 = 0;
    do {
      *(undefined1 *)(*(longlong *)(lVar11 + lVar13) + 0x50) = 0;
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar9 * 8 != lVar13);
  }
  *(undefined8 *)(lVar4 + 0xaf4) = *(undefined8 *)(lVar4 + 0x118);
  *(undefined1 *)(lVar4 + 0xc14) = 0;
  *(undefined8 *)(lVar4 + 0x128) = 0;
  if (*(int *)(lVar4 + 0xc1c) < 0) {
    uVar14 = FUN_140077ab4(0);
    if (*(longlong *)(lVar4 + 0xc20) != 0) {
      FUN_1401c5180(uVar14,*(longlong *)(lVar4 + 0xc20),(longlong)*(int *)(lVar4 + 0xc18) * 2);
      FUN_140077b90(*(undefined8 *)(lVar4 + 0xc20));
    }
    *(undefined8 *)(lVar4 + 0xc20) = uVar14;
    *(undefined4 *)(lVar4 + 0xc1c) = 0;
  }
  *(undefined4 *)(lVar4 + 0xc18) = 0;
  FUN_14007f8cb(lVar4,3);
  return;
}

