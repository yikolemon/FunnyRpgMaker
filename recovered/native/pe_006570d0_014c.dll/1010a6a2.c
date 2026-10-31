/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010a6a2 */

void FUN_1010a6a2(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar3 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 8) == *(int *)(DAT_1039d74c + 4)) {
    return;
  }
  if (*(char *)(DAT_1039d74c + 1) == '\0') {
    FUN_100fcef5("Forgot to call ImGui::NewFrame()?");
    return;
  }
  FUN_10101a75();
  if (*(char *)(iVar3 + 0x9c) == '\x01') {
    FUN_1010ab07(iVar3 + 0x2794);
  }
  FUN_1010ab88();
  pcVar9 = *(code **)(iVar3 + 0xc14);
  if (pcVar9 != (code *)0x0) {
    auVar11[0] = -(*(char *)(iVar3 + 0x267c) == *(char *)(iVar3 + 0x2668));
    auVar11[1] = -(*(char *)(iVar3 + 0x267d) == *(char *)(iVar3 + 0x2669));
    auVar11[2] = -(*(char *)(iVar3 + 0x267e) == *(char *)(iVar3 + 0x266a));
    auVar11[3] = -(*(char *)(iVar3 + 0x267f) == *(char *)(iVar3 + 0x266b));
    auVar11[4] = -(*(char *)(iVar3 + 0x2680) == *(char *)(iVar3 + 0x266c));
    auVar11[5] = -(*(char *)(iVar3 + 0x2681) == *(char *)(iVar3 + 0x266d));
    auVar11[6] = -(*(char *)(iVar3 + 0x2682) == *(char *)(iVar3 + 0x266e));
    auVar11[7] = -(*(char *)(iVar3 + 0x2683) == *(char *)(iVar3 + 0x266f));
    auVar11[8] = -(*(char *)(iVar3 + 0x2684) == *(char *)(iVar3 + 0x2670));
    auVar11[9] = -(*(char *)(iVar3 + 0x2685) == *(char *)(iVar3 + 0x2671));
    auVar11[10] = -(*(char *)(iVar3 + 0x2686) == *(char *)(iVar3 + 0x2672));
    auVar11[0xb] = -(*(char *)(iVar3 + 0x2687) == *(char *)(iVar3 + 0x2673));
    auVar11[0xc] = -(*(char *)(iVar3 + 0x2688) == *(char *)(iVar3 + 0x2674));
    auVar11[0xd] = -(*(char *)(iVar3 + 0x2689) == *(char *)(iVar3 + 0x2675));
    auVar11[0xe] = -(*(char *)(iVar3 + 0x268a) == *(char *)(iVar3 + 0x2676));
    auVar11[0xf] = -(*(char *)(iVar3 + 0x268b) == *(char *)(iVar3 + 0x2677));
    uVar6 = *(undefined4 *)(iVar3 + 0x2678);
    uVar2 = *(undefined4 *)(iVar3 + 0x268c);
    auVar12[0] = -((char)uVar2 == (char)uVar6);
    auVar12[1] = -((char)((uint)uVar2 >> 8) == (char)((uint)uVar6 >> 8));
    auVar12[2] = -((char)((uint)uVar2 >> 0x10) == (char)((uint)uVar6 >> 0x10));
    auVar12[3] = -((char)((uint)uVar2 >> 0x18) == (char)((uint)uVar6 >> 0x18));
    auVar12[4] = 0xff;
    auVar12[5] = 0xff;
    auVar12[6] = 0xff;
    auVar12[7] = 0xff;
    auVar12[8] = 0xff;
    auVar12[9] = 0xff;
    auVar12[10] = 0xff;
    auVar12[0xb] = 0xff;
    auVar12[0xc] = 0xff;
    auVar12[0xd] = 0xff;
    auVar12[0xe] = 0xff;
    auVar12[0xf] = 0xff;
    auVar12 = auVar12 & auVar11;
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) != 0xffff) {
      puVar5 = (undefined4 *)FUN_1010ad03(*(undefined4 *)(iVar3 + 0x2678));
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)FUN_1010ad36();
      }
      if ((*(byte *)(iVar3 + 0x27b4) & 0x80) != 0) {
        FUN_100f99e6("[io] Calling Platform_SetImeDataFn(): WantVisible: %d, InputPos (%.2f,%.2f) for Viewport 0x%08X\n"
                     ,*(undefined1 *)(iVar3 + 0x2668),(double)*(float *)(iVar3 + 0x266c),
                     (double)*(float *)(iVar3 + 0x2670),*puVar5);
        pcVar9 = *(code **)(iVar3 + 0xc14);
      }
      (*pcVar9)(iVar3,puVar5,iVar3 + 0x2668);
    }
  }
  *(uint *)(iVar3 + 0x299c) = (uint)*(byte *)(iVar3 + 0x2669);
  *(undefined1 *)(iVar3 + 2) = 0;
  iVar7 = *(int *)(iVar3 + 0x14cc);
  if (((iVar7 != 0) && (*(char *)(iVar7 + 0x102) == '\x01')) && (*(char *)(iVar7 + 0xfb) == '\0')) {
    *(undefined1 *)(iVar7 + 0xf9) = 0;
    if ((*(int *)(iVar3 + 0x2048) != 0) &&
       (*(int *)(*(int *)(iVar3 + 0x2048) + 0x3a8) == *(int *)(iVar3 + 0x14cc))) {
      FUN_101034e2();
    }
  }
  FUN_1010ad44();
  FUN_1010af01();
  FUN_1010af44(iVar3);
  FUN_1010b0a7();
  iVar7 = *(int *)(iVar3 + 4);
  if (*(char *)(iVar3 + 0x2250) != '\x01') goto LAB_1010a8ae;
  cVar1 = *(char *)(iVar3 + 0x2296);
  if (*(int *)(iVar3 + 0x2258) + 1 < iVar7) {
    if ((((*(byte *)(iVar3 + 0x2254) & 0x20) != 0) || (*(int *)(iVar3 + 0x225c) == -1)) ||
       ((cVar4 = FUN_1010b10c(*(int *)(iVar3 + 0x225c)), cVar1 != '\0' || (cVar4 == '\0')))) {
LAB_1010a86b:
      FUN_10106638();
      iVar7 = *(int *)(iVar3 + 4);
      if (*(char *)(iVar3 + 0x2250) != '\x01') goto LAB_1010a8ae;
    }
  }
  else if (cVar1 != '\0') goto LAB_1010a86b;
  if ((*(int *)(iVar3 + 0x2258) + 1 < iVar7) && ((*(byte *)(iVar3 + 0x2254) & 1) == 0)) {
    *(undefined1 *)(iVar3 + 0x2251) = 1;
    FUN_10103022("...");
    *(undefined1 *)(iVar3 + 0x2251) = 0;
    iVar7 = *(int *)(iVar3 + 4);
  }
LAB_1010a8ae:
  *(undefined1 *)(iVar3 + 1) = 0;
  *(int *)(iVar3 + 8) = iVar7;
  thunk_FUN_10112e00();
  FUN_10103d2e();
  FUN_1010b139();
  iVar7 = *(int *)(iVar3 + 0x14a0);
  if (iVar7 < 0) {
    uVar6 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0x14a4) != 0) {
      FUN_1025b2d0(uVar6,*(int *)(iVar3 + 0x14a4),*(int *)(iVar3 + 0x149c) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x14a4));
    }
    *(undefined4 *)(iVar3 + 0x14a4) = uVar6;
    *(undefined4 *)(iVar3 + 0x14a0) = 0;
    iVar7 = 0;
  }
  *(undefined4 *)(iVar3 + 0x149c) = 0;
  iVar10 = *(int *)(iVar3 + 0x1484);
  iVar8 = iVar10;
  if (iVar7 < iVar10) {
    uVar6 = FUN_100fa1fa(iVar10 * 4);
    if (*(int *)(iVar3 + 0x14a4) != 0) {
      FUN_1025b2d0(uVar6,*(int *)(iVar3 + 0x14a4),*(int *)(iVar3 + 0x149c) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x14a4));
    }
    *(undefined4 *)(iVar3 + 0x14a4) = uVar6;
    *(int *)(iVar3 + 0x14a0) = iVar10;
    iVar8 = *(int *)(iVar3 + 0x1484);
    iVar7 = iVar10;
  }
  iVar10 = *(int *)(iVar3 + 0x148c);
  if (iVar8 == 0) {
    uVar6 = 0;
  }
  else {
    iVar7 = 0;
    do {
      if ((*(char *)(*(int *)(iVar10 + iVar7) + 0xf9) != '\x01') ||
         ((*(byte *)(*(int *)(iVar10 + iVar7) + 0xf) & 1) == 0)) {
        FUN_1010b2c5();
      }
      iVar7 = iVar7 + 4;
    } while (iVar8 * 4 != iVar7);
    uVar6 = *(undefined4 *)(iVar3 + 0x1484);
    iVar10 = *(int *)(iVar3 + 0x148c);
    iVar7 = *(int *)(iVar3 + 0x14a0);
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x149c);
  *(undefined4 *)(iVar3 + 0x149c) = uVar6;
  *(undefined4 *)(iVar3 + 0x1484) = uVar2;
  *(undefined4 *)(iVar3 + 0x14a0) = *(undefined4 *)(iVar3 + 0x1488);
  *(int *)(iVar3 + 0x1488) = iVar7;
  uVar6 = *(undefined4 *)(iVar3 + 0x14a4);
  *(int *)(iVar3 + 0x14a4) = iVar10;
  *(undefined4 *)(iVar3 + 0x148c) = uVar6;
  *(undefined4 *)(iVar3 + 0xd4) = *(undefined4 *)(iVar3 + 0x14c0);
  FUN_1010b38b();
  iVar7 = *(int *)(iVar3 + 0x1214);
  if (iVar7 != 0) {
    iVar10 = *(int *)(iVar3 + 0x121c);
    iVar8 = 0;
    do {
      *(undefined1 *)(*(int *)(iVar10 + iVar8) + 0x40) = 0;
      iVar8 = iVar8 + 4;
    } while (iVar7 << 2 != iVar8);
  }
  *(undefined4 *)(iVar3 + 0xac4) = *(undefined4 *)(iVar3 + 0xe8);
  *(undefined4 *)(iVar3 + 0xac0) = *(undefined4 *)(iVar3 + 0xe4);
  *(undefined1 *)(iVar3 + 0xbdc) = 0;
  *(undefined8 *)(iVar3 + 0xf4) = 0;
  if (*(int *)(iVar3 + 0xbe4) < 0) {
    uVar6 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0xbe8) != 0) {
      FUN_1025b2d0(uVar6,*(int *)(iVar3 + 0xbe8),*(int *)(iVar3 + 0xbe0) * 2);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0xbe8));
    }
    *(undefined4 *)(iVar3 + 0xbe8) = uVar6;
    *(undefined4 *)(iVar3 + 0xbe4) = 0;
  }
  *(undefined4 *)(iVar3 + 0xbe0) = 0;
  FUN_10101a75();
  return;
}

