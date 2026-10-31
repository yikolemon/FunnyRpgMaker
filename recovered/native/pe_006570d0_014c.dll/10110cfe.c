/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10110cfe */

void FUN_10110cfe(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  float10 fVar5;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  uint local_c;
  
  iVar2 = DAT_1039d74c;
  local_c = DAT_10388d00 ^ (uint)&local_1c;
  cVar3 = *(char *)(DAT_1039d74c + 0x6e);
  if (cVar3 == *(char *)(DAT_1039d74c + 0x105)) {
    *(undefined4 *)(DAT_1039d74c + 0x1e80) = *(undefined4 *)(param_1 + 0xb4);
    local_10 = *(int *)(param_1 + 0x3b0);
    if (cVar3 == '\0') {
      fVar1 = *(float *)(iVar2 + 0x1540);
      if (0.0 <= fVar1) {
        local_1c = *(float *)(local_10 + 0x60);
        local_18 = fVar1;
        fVar5 = (float10)FUN_101155f9();
        local_14 = (float)fVar5;
        fVar1 = *(float *)(iVar2 + 0x1544);
        if (((fVar1 < local_14) && (0.0 <= fVar1)) && (local_18 < local_1c)) goto LAB_10110d42;
      }
    }
    else {
LAB_10110d42:
      cVar3 = FUN_101179e3(0xe5);
      if (cVar3 != '\0') {
        FUN_10117c4b("_IMWINDOW",&local_10,4,0);
        FUN_10117c1f();
        if (DAT_10388d00 == (local_c ^ (uint)&local_1c)) {
          FUN_1011cd05();
          return;
        }
        goto LAB_10110e40;
      }
    }
  }
  else if (((cVar3 != '\0') && (DAT_1028b430 <= *(float *)(DAT_1039d74c + 0x2464))) &&
          (*(int *)(DAT_1039d74c + 0x1528) != 0)) {
    pcVar4 = "*Missing Text*";
    if (*(char **)(DAT_1039d74c + 0x2740) != (char *)0x0) {
      pcVar4 = *(char **)(DAT_1039d74c + 0x2740);
    }
    FUN_10103022("%s",pcVar4);
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_1c)) {
    return;
  }
LAB_10110e40:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

