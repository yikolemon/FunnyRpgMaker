/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a0ddd */

void FUN_101a0ddd(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  float10 fVar8;
  undefined1 auStack_28 [3];
  char cStack_25;
  int iStack_24;
  float fStack_20;
  longlong lStack_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_28;
  cVar3 = FUN_10107d2b();
  if (cVar3 == '\0') {
    if (DAT_10388d00 == (local_14 ^ (uint)auStack_28)) {
      FUN_1010ad44();
      return;
    }
  }
  else {
    FUN_101032c6();
    FUN_1012d08c();
    FUN_10131c6c("Homepage","https://github.com/ocornut/imgui");
    FUN_10114a0e(0,0xbf800000);
    FUN_10131c6c(&DAT_1033c2d0,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md");
    FUN_10114a0e(0,0xbf800000);
    FUN_10131c6c(&DAT_10336f9c,"https://github.com/ocornut/imgui/wiki");
    FUN_10114a0e(0,0xbf800000);
    FUN_10131c6c("Extensions","https://github.com/ocornut/imgui/wiki/Useful-Extensions");
    FUN_10114a0e(0,0xbf800000);
    FUN_10131c6c("Releases","https://github.com/ocornut/imgui/releases");
    FUN_10114a0e(0,0xbf800000);
    FUN_10131c6c("Funding","https://github.com/ocornut/imgui/wiki/Funding");
    FUN_10132188();
    FUN_1012d08c();
    FUN_1012d08c();
    FUN_1012d08c();
    FUN_1012d08c();
    FUN_1012ff1a("Config/Build Information",&DAT_103a3404);
    if (DAT_103a3404 == '\x01') {
      puVar4 = (uint *)FUN_1010330d();
      iStack_24 = FUN_100fcb2d();
      lStack_1c = 0;
      cVar3 = FUN_1012e1b7("Copy to clipboard",&lStack_1c);
      fVar8 = (float10)FUN_101155d9();
      fStack_20 = (float)fVar8;
      lStack_1c = (ulonglong)(uint)(fStack_20 * DAT_10302784) << 0x20;
      uVar5 = FUN_10113594();
      FUN_1010c3c7(uVar5,&lStack_1c,0x80,0);
      cStack_25 = cVar3;
      if (cVar3 != '\0') {
        FUN_10110666();
        FUN_10110bf6();
        FUN_10110bf6();
      }
      FUN_1012d08c();
      FUN_10132188();
      FUN_1012d08c("sizeof(size_t): %d, sizeof(ImDrawIdx): %d, sizeof(ImDrawVert): %d",4,2,0x14);
      FUN_1012d08c("define: __cplusplus=%d",0x31512);
      FUN_1012d08c();
      FUN_1012d08c("define: _MSC_VER=%d",0x79f);
      FUN_1012d08c("define: _MSVC_LANG=%d",0x31512);
      FUN_1012d08c("define: __clang_version__=%s",
                   "22.1.7 (https://github.com/komimoe/Arkari.git 18cee9cad49a6629570cfd02522378ede46a8017)"
                  );
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_1012d08c("IM_ASSERT: runs expression: %s. expand size: %s%s",&DAT_1033c324,&DAT_1033c324,
                   " (MAYBE DISABLED?!)");
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10132188();
      pcVar6 = (char *)puVar4[0x1e];
      if (pcVar6 == (char *)0x0) {
        pcVar6 = "NULL";
      }
      FUN_1012d08c("io.BackendPlatformName: %s",pcVar6);
      pcVar6 = (char *)puVar4[0x1f];
      if (pcVar6 == (char *)0x0) {
        pcVar6 = "NULL";
      }
      FUN_1012d08c("io.BackendRendererName: %s",pcVar6);
      FUN_1012d08c("io.ConfigFlags: 0x%08X",*puVar4);
      uVar7 = *puVar4;
      if ((uVar7 & 1) != 0) {
        FUN_1012d08c();
        uVar7 = *puVar4;
      }
      if ((uVar7 & 2) != 0) {
        FUN_1012d08c();
        uVar7 = *puVar4;
      }
      if ((uVar7 & 0x10) != 0) {
        FUN_1012d08c();
        uVar7 = *puVar4;
      }
      if ((uVar7 & 0x20) != 0) {
        FUN_1012d08c();
        uVar7 = *puVar4;
      }
      if ((uVar7 & 0x40) != 0) {
        FUN_1012d08c();
        uVar7 = *puVar4;
      }
      if ((char)uVar7 < '\0') {
        FUN_1012d08c();
        uVar7 = *puVar4;
      }
      if ((uVar7 >> 10 & 1) != 0) {
        FUN_1012d08c();
      }
      if ((char)puVar4[0x12] == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x46) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x47) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x41) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x42) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x43) == '\x01') {
        FUN_1012d08c();
      }
      if ((char)puVar4[0x11] == '\x01') {
        FUN_1012d08c();
      }
      if ((char)puVar4[0xf] == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x3d) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x3e) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x3f) == '\x01') {
        FUN_1012d08c();
      }
      if ((char)puVar4[0x10] == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x49) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x36) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x37) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x4b) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x4e) == '\x01') {
        FUN_1012d08c();
      }
      if (*(char *)((int)puVar4 + 0x4f) == '\x01') {
        FUN_1012d08c();
      }
      if (0.0 <= (float)puVar4[0x15]) {
        FUN_1012d08c();
      }
      FUN_1012d08c("io.BackendFlags: 0x%08X",puVar4[1]);
      uVar7 = puVar4[1];
      if ((uVar7 & 1) != 0) {
        FUN_1012d08c();
        uVar7 = puVar4[1];
      }
      if ((uVar7 & 2) != 0) {
        FUN_1012d08c();
        uVar7 = puVar4[1];
      }
      if ((uVar7 & 4) != 0) {
        FUN_1012d08c();
        uVar7 = puVar4[1];
      }
      if ((uVar7 >> 0xb & 1) != 0) {
        FUN_1012d08c();
        uVar7 = puVar4[1];
      }
      if ((uVar7 >> 0xc & 1) != 0) {
        FUN_1012d08c();
        uVar7 = puVar4[1];
      }
      if ((uVar7 >> 0xd & 1) != 0) {
        FUN_1012d08c();
        uVar7 = puVar4[1];
      }
      if ((uVar7 & 8) != 0) {
        FUN_1012d08c();
        uVar7 = puVar4[1];
      }
      if ((uVar7 & 0x10) != 0) {
        FUN_1012d08c();
        uVar7 = puVar4[1];
      }
      if ((uVar7 >> 10 & 1) != 0) {
        FUN_1012d08c();
      }
      FUN_10132188();
      puVar1 = (undefined4 *)puVar4[0xb];
      FUN_1012d08c("io.Fonts: %d fonts, Flags: 0x%08X, TexSize: %d,%d",puVar1[0x15],*puVar1,
                   *(undefined4 *)(puVar1[0xc] + 0x1c),*(undefined4 *)(puVar1[0xc] + 0x20));
      pcVar6 = "NULL";
      if (*(char **)(puVar4[0xb] + 0x298) != (char *)0x0) {
        pcVar6 = *(char **)(puVar4[0xb] + 0x298);
      }
      FUN_1012d08c("io.Fonts->FontLoaderName: %s",pcVar6);
      FUN_1012d08c("io.DisplaySize: %.2f,%.2f",(double)(float)puVar4[2],(double)(float)puVar4[3]);
      FUN_1012d08c("io.DisplayFramebufferScale: %.2f,%.2f",(double)(float)puVar4[4],
                   (double)(float)puVar4[5]);
      FUN_10132188();
      iVar2 = iStack_24;
      FUN_1012d08c("style.WindowPadding: %.2f,%.2f",(double)*(float *)(iStack_24 + 0x14),
                   (double)*(float *)(iStack_24 + 0x18));
      FUN_1012d08c();
      FUN_1012d08c("style.FramePadding: %.2f,%.2f",(double)*(float *)(iVar2 + 0x4c),
                   (double)*(float *)(iVar2 + 0x50));
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_1012d08c("style.ItemSpacing: %.2f,%.2f",(double)*(float *)(iVar2 + 0x5c),
                   (double)*(float *)(iVar2 + 0x60));
      FUN_1012d08c("style.ItemInnerSpacing: %.2f,%.2f",(double)*(float *)(iVar2 + 100),
                   (double)*(float *)(iVar2 + 0x68));
      if (cStack_25 != '\0') {
        FUN_10110bf6();
        FUN_1011147d();
      }
      FUN_1010c644();
    }
    FUN_1010ad44();
    if (DAT_10388d00 == (local_14 ^ (uint)auStack_28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

