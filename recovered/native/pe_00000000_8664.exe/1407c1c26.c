/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c1c26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c1c26(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  puVar7 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x1c);
  uVar6 = (ulonglong)_DAT_150b5f37e;
  *(undefined1 *)((ulonglong)*(uint *)(uVar6 + 0x14cc) + 0xfb) = 1;
  uVar1 = *(uint *)(uVar6 + 0x14cc);
  uVar9 = (ulonglong)uVar1;
  if (*(char *)(uVar9 + 0xfe) == '\0') {
    uVar2 = *(uint *)(uVar9 + 0x1e8);
    uVar10 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      if (*(int *)(uVar10 + 0x10) != 1) {
        if (*(int *)(uVar10 + 0xc) != *(int *)(uVar10 + 0x10)) {
          param_2 = *(int *)(uVar10 + 0xc);
        }
        *(int *)(uVar10 + 0xc) = param_2;
        puVar7[-2] = 0x407c1ca4;
        puVar7[-1] = 1;
        FUN_14076d3c4();
        iVar3 = *(int *)(uVar10 + 0xc);
        iVar4 = *(int *)(uVar10 + 100);
        *puVar7 = uVar1;
        puVar7[1] = iVar4 + iVar3 * 0x1c + 0xc;
        puVar7[-2] = 0x407c1cc4;
        puVar7[-1] = 1;
        FUN_1407bd486();
        uVar5 = *(undefined4 *)(uVar9 + 0x2e8);
        puVar7[1] = *(uint *)(uVar10 + 0xc);
        *puVar7 = uVar5;
        puVar7[-2] = 0x407c1cdd;
        puVar7[-1] = 1;
        FUN_1407e5d3c(uVar2 + 0x68);
        puVar8 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x24);
        puVar8[2] = *(undefined4 *)(uVar6 + 0xd1c);
        uVar5 = *(undefined4 *)(uVar10 + 0x20);
        puVar8[1] = *(undefined4 *)(uVar9 + 0x148);
        *puVar8 = uVar5;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -2) = &UNK_1407c1d0b;
        FUN_140755a9a();
      }
      *(float *)(uVar9 + 0x144) =
           (float)(int)(*(float *)(uVar9 + 0x50) + *(float *)(uVar9 + 0x188) +
                       *(float *)(uVar9 + 0x18c));
    }
  }
  return;
}

