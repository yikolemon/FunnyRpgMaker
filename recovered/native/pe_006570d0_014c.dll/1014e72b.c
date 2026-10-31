/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014e72b */

void FUN_1014e72b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  
  iVar2 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(char *)(iVar3 + 0xfe) == '\0') {
    iVar1 = *(int *)(DAT_1039d74c + 0x2358);
    if (iVar1 == 0) {
      FUN_100fcef5("Mismatched BeginTabBar()/EndTabBar()!");
    }
    else {
      if (*(char *)(iVar1 + 0x7b) == '\x01') {
        FUN_1014e829();
      }
      if (((*(char *)(iVar1 + 0x7c) == '\0') && (*(int *)(iVar1 + 0x24) != 0)) &&
         (*(int *)(iVar2 + 4) <= *(int *)(iVar1 + 0x2c) + 1)) {
        fVar6 = *(float *)(iVar1 + 0x3c) + *(float *)(iVar1 + 0x48);
      }
      else {
        fVar5 = (float10)FUN_100fdbca(*(float *)(iVar3 + 0x148) - *(float *)(iVar1 + 0x3c),
                                      *(undefined4 *)(iVar1 + 0x44));
        *(float *)(iVar1 + 0x44) = (float)fVar5;
        fVar6 = (float)fVar5 + *(float *)(iVar1 + 0x3c);
      }
      *(float *)(iVar3 + 0x148) = fVar6;
      if ('\x01' < *(char *)(iVar1 + 0x7a)) {
        *(undefined8 *)(iVar3 + 0x144) = *(undefined8 *)(iVar1 + 0x90);
      }
      *(undefined2 *)(iVar1 + 0x82) = 0xffff;
      if ((*(byte *)(iVar1 + 0x12) & 0x10) == 0) {
        FUN_10113568();
      }
      iVar3 = *(int *)(iVar2 + 0x237c) + -1;
      *(int *)(iVar2 + 0x237c) = iVar3;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1014f62a();
      }
      *(undefined4 *)(iVar2 + 0x2358) = uVar4;
    }
  }
  return;
}

