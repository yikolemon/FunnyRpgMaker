/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ea642 */

uint FUN_1407ea642(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong auStack_30 [2];
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x290);
  uVar4 = *(uint *)(uVar7 + 0x80);
  if ((int)uVar4 < 0) {
    uVar4 = *(uint *)(uVar7 + 0x68);
    iVar8 = *(int *)(uVar7 + 0x6c);
    if ((int)uVar4 < iVar8) {
      uVar2 = (ulonglong)*(uint *)(uVar7 + 0x70);
    }
    else {
      if (iVar8 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar8 / 2 + iVar8;
      }
      if (iVar8 <= (int)(uVar4 + 1)) {
        iVar8 = uVar4 + 1;
      }
      auStack_30[0] = (ulonglong)(uint)(iVar8 * 4);
      uVar2 = FUN_1407520ca();
      uVar5 = (ulonglong)((int)auStack_30 + 4);
      uVar1 = *(uint *)(uVar7 + 0x70);
      if (uVar1 != 0) {
        *(ulonglong *)(uVar5 - 8) = (ulonglong)(uint)(*(int *)(uVar7 + 0x68) << 2);
        *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar1;
        *(ulonglong *)(uVar5 - 0x18) = uVar2;
        *(int *)(uVar5 - 0xc) = (int)uVar2;
        *(undefined8 *)(uVar5 - 0x20) = 0x1407ea6c7;
        FUN_1408b31a0();
        uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
        *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(uVar7 + 0x70);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar6 - 0x10) = &UNK_1407ea6d2;
        FUN_14075219b();
      }
      *(int *)(uVar7 + 0x70) = (int)uVar2;
      *(int *)(uVar7 + 0x6c) = iVar8;
    }
    *(uint *)(uVar7 + 0x68) = uVar4 + 1;
    puVar3 = (uint *)(ulonglong)((int)uVar2 + uVar4 * 4);
    *puVar3 = 0;
    uVar1 = 0;
  }
  else {
    puVar3 = (uint *)(ulonglong)(*(int *)(uVar7 + 0x70) + uVar4 * 4);
    *(int *)(uVar7 + 0x80) = (int)(*puVar3 << 0xc) >> 0xc;
    uVar1 = *puVar3;
  }
  *puVar3 = (uVar1 & 0xbff00000) + (param_2 & 0xfffff) + 0x40000000;
  return uVar1 & 0x3ff00000 | uVar4;
}

