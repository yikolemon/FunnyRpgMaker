/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407538b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407538b6(uint param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int unaff_R13D;
  
  uVar7 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  piVar10 = (int *)(ulonglong)param_1;
  *(uint *)(uVar7 + 4) = *(uint *)(uVar7 + 0x24);
  *(ulonglong *)(uVar7 - 8) = (ulonglong)*(uint *)(uVar7 + 0x24);
  *(undefined8 *)(uVar7 - 0x10) = *(undefined8 *)(uVar7 + 0x1c);
  *(undefined8 *)(uVar7 - 0x18) = 0;
  *(undefined8 *)(uVar7 - 0x20) = 0;
  *(undefined8 *)(uVar7 - 0x28) = 0x1407538e0;
  uVar2 = FUN_140752404();
  puVar8 = (uint *)(ulonglong)((int)(uVar7 - 0x20) + 0x10);
  if ((int)uVar2 < 1) goto LAB_140753985;
  iVar1 = piVar10[1];
  iVar9 = *piVar10 + (uint)(*piVar10 == 0);
  uVar4 = uVar2 + iVar9;
  if ((int)uVar4 < iVar1) {
LAB_14075390b:
    if (iVar1 < (int)uVar4) {
      if (iVar1 == 0) {
        uVar5 = 8;
      }
      else {
        uVar5 = iVar1 / 2 + iVar1;
      }
      uVar6 = (ulonglong)uVar5;
      if ((int)uVar5 <= (int)uVar4) {
        uVar6 = (ulonglong)uVar4;
      }
      goto LAB_140753933;
    }
    uVar4 = piVar10[2];
    uVar5 = *(uint *)((longlong)puVar8 + 0x20);
  }
  else {
    uVar5 = iVar1 * 2;
    if (iVar1 * 2 < (int)uVar4) {
      uVar5 = uVar4;
    }
    uVar6 = (ulonglong)uVar5;
    if ((int)uVar5 <= iVar1) goto LAB_14075390b;
LAB_140753933:
    *(ulonglong *)((longlong)puVar8 + -8) = uVar6;
    *(undefined8 *)((longlong)puVar8 + -0x10) = 0x140753939;
    uVar3 = FUN_1407520ca();
    puVar8 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -8) + 4);
    *puVar8 = uVar3;
    uVar4 = piVar10[2];
    if (uVar4 != 0) {
      *(undefined8 *)(puVar8 + -2) = *(undefined8 *)piVar10;
      *(ulonglong *)(puVar8 + -4) = (ulonglong)uVar4;
      *(undefined8 *)(puVar8 + -6) = *(undefined8 *)(puVar8 + -2);
      puVar8[-8] = 0x40753952;
      puVar8[-7] = 1;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar8 + -6) + 0xc) - 8) = *(undefined8 *)(piVar10 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar8 + -6) + 0xc) - 0x10) = &UNK_14075395d;
      FUN_14075219b();
    }
    uVar4 = *puVar8;
    piVar10[2] = uVar4;
    piVar10[1] = (int)uVar6;
    uVar5 = puVar8[8];
  }
  iVar9 = uVar2 + iVar9;
  *piVar10 = iVar9;
  *(undefined8 *)((longlong)puVar8 + -8) = *(undefined8 *)((longlong)puVar8 + 4);
  *(ulonglong *)((longlong)puVar8 + -0x10) = (ulonglong)uVar5;
  *(ulonglong *)((longlong)puVar8 + -0x18) = (ulonglong)uVar2;
  *(ulonglong *)((longlong)puVar8 + -0x20) = (ulonglong)uVar4;
  *(undefined8 *)((longlong)puVar8 + -0x28) = 0x140753982;
  FUN_140752404((ulonglong)uVar5,iVar9,param_3 + unaff_R13D);
  puVar8 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x20) + 0x10);
LAB_140753985:
  if (_DAT_150adc691 == (*(uint *)((longlong)puVar8 + 8) ^ (uint)puVar8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar8 + -8) = FUN_1407539aa;
  FUN_1408802b0(*(uint *)((longlong)puVar8 + 8) ^ (uint)puVar8);
}

