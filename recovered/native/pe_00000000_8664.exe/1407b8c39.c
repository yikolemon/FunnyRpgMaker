/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b8c39 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b8c39(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  uint *puVar7;
  longlong unaff_RBP;
  ulonglong uVar8;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  puVar7 = (uint *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  uVar2 = puVar7[5];
  uVar8 = (ulonglong)uVar2;
  if (*(short *)(uVar8 + 0x4c) == 0) {
    sVar3 = *(short *)(uVar8 + 0x1c6);
    if (sVar3 == -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    fVar1 = *(float *)(uVar8 + 0xb0);
    if ((fVar1 != _DAT_150a7161b) || (NAN(fVar1) || NAN(_DAT_150a7161b))) {
      puVar7[1] = (uint)fVar1;
      *puVar7 = (int)sVar3;
      puVar7[-2] = 0x407b8c79;
      puVar7[-1] = 1;
      FUN_1407b8d74();
      sVar3 = *(short *)(uVar8 + 0x1c6);
    }
    *(short *)(uVar8 + 0x1c8) = sVar3;
    *(undefined4 *)(uVar8 + 0xb0) = 0x7f7fffff;
    *(undefined2 *)(uVar8 + 0x1c6) = 0xffff;
    iVar4 = (int)*(short *)(uVar8 + 0x1c4);
    if (iVar4 != -1) {
      uVar5 = (ulonglong)(uint)(iVar4 * 0x74);
      puVar7[1] = *(uint *)((ulonglong)*(uint *)(uVar8 + 0x10) + 0x14 + uVar5);
      *puVar7 = iVar4;
      puVar7[-2] = 0x407b8cc5;
      puVar7[-1] = 1;
      FUN_1407b8d74();
      cVar6 = (char)(uVar5 >> 8);
      *(undefined2 *)(uVar8 + 0x1c4) = 0xffff;
    }
    if (*(short *)(uVar8 + 0x4c) == 0) {
      *(undefined2 *)(uVar8 + 0x1cc) = *(undefined2 *)(uVar8 + 0x1ca);
      *(undefined2 *)(uVar8 + 0x1ca) = 0xffff;
      sVar3 = *(short *)(uVar8 + 0x1ce);
      if ((int)sVar3 != 0xffffffff) {
        if ((int)*(short *)(uVar8 + 0x1d0) != 0xffffffff) {
          puVar7[2] = (int)*(short *)(uVar8 + 0x1d0);
          puVar7[1] = (int)sVar3;
          *puVar7 = uVar2;
          puVar7[-2] = 0x407b8d14;
          puVar7[-1] = 1;
          FUN_1407b8eca();
          *(undefined2 *)(uVar8 + 0x1d0) = 0xffff;
        }
      }
      *(char *)(ulonglong)_DAT_1528b8831039d74c =
           *(char *)(ulonglong)_DAT_1528b8831039d74c + (char)_DAT_1528b8831039d74c;
      *(char *)(unaff_RBP + 9) = *(char *)(unaff_RBP + 9) + cVar6;
      *(undefined2 *)(uVar8 + 0x1ce) = 0xffff;
    }
  }
  if (*(char *)(uVar8 + 0x1f8) == '\x01') {
    if (0 < *(int *)(uVar8 + 0x40)) {
      uVar5 = 0x2b;
      do {
        *(undefined2 *)((ulonglong)*(uint *)(uVar8 + 0x10) + uVar5 * 2) = 0;
        *(undefined2 *)(ulonglong)*(uint *)(uVar8 + 0x18) = 0;
        uVar5 = (ulonglong)((int)uVar5 + 0x3a);
      } while (0 < *(int *)(uVar8 + 0x40));
    }
    *(undefined1 *)(uVar8 + 0x1f8) = 0;
    *(undefined1 *)(uVar8 + 0x1f5) = 1;
  }
  return;
}

