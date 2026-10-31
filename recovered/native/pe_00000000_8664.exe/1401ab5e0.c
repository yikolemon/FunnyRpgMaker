/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ab5e0 */

void FUN_1401ab5e0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  FUN_1401ab7d0();
  uVar10 = 0;
  if (param_2 != 0) {
    do {
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      bVar2 = **(byte **)(param_1 + 8);
      pbVar9 = *(byte **)(param_1 + 8) + 1;
      *(byte *)(param_1 + 0x18) = bVar2;
      *(byte **)(param_1 + 8) = pbVar9;
      if ((bVar2 & 1) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(longlong)(char)(&DAT_140eb2890)[bVar7 & 0xf];
        *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar9 + -4) >> ((&DAT_140eb28a0)[bVar7 & 0xf] & 0x1f)
        ;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      if ((bVar2 & 2) != 0) {
        uVar4 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        *(byte **)(param_1 + 8) = pbVar9;
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      if ((bVar2 & 4) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(longlong)(char)(&DAT_140eb2890)[bVar7 & 0xf];
        *(uint *)(param_1 + 0x24) = *(uint *)(pbVar9 + -4) >> ((&DAT_140eb28a0)[bVar7 & 0xf] & 0x1f)
        ;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      pbVar1 = pbVar9 + 4;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar9;
      bVar7 = bVar2 & 0x30;
      *(byte **)(param_1 + 8) = pbVar1;
      if ((bVar2 & 8) == 0) {
        if (bVar7 == 0x10) {
          bVar2 = (&DAT_140eb28a0)[*pbVar1 & 0xf];
          uVar6 = *(uint *)(((longlong)pbVar1 - (longlong)(char)(&DAT_140eb2890)[*pbVar1 & 0xf]) +
                           -4);
          *(longlong *)(param_1 + 8) =
               (longlong)pbVar1 - (longlong)(char)(&DAT_140eb2890)[*pbVar1 & 0xf];
          *(ulonglong *)(param_1 + 0x30) =
               (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
        }
        else if (bVar7 == 0x20) {
          cVar3 = (&DAT_140eb2890)[*pbVar1 & 0xf];
          bVar2 = (&DAT_140eb28a0)[*pbVar1 & 0xf];
          pbVar9 = pbVar1 + -(longlong)cVar3;
          uVar6 = *(uint *)(pbVar9 + -4);
          *(byte **)(param_1 + 8) = pbVar9;
          *(ulonglong *)(param_1 + 0x30) =
               (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          bVar2 = (&DAT_140eb28a0)[*pbVar9 & 0xf];
          uVar6 = *(uint *)(pbVar1 + (-(longlong)cVar3 -
                                     (longlong)(char)(&DAT_140eb2890)[*pbVar9 & 0xf]) + -4);
          *(byte **)(param_1 + 8) =
               pbVar1 + (-(longlong)cVar3 - (longlong)(char)(&DAT_140eb2890)[*pbVar9 & 0xf]);
          uVar8 = (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          goto LAB_1401ab7a0;
        }
      }
      else if (bVar7 == 0x10) {
        iVar5 = *(int *)pbVar1;
        *(byte **)(param_1 + 8) = pbVar9 + 8;
        *(longlong *)(param_1 + 0x30) = (longlong)iVar5;
      }
      else if (bVar7 == 0x20) {
        iVar5 = *(int *)pbVar1;
        *(byte **)(param_1 + 8) = pbVar9 + 8;
        *(longlong *)(param_1 + 0x30) = (longlong)iVar5;
        uVar8 = (ulonglong)*(int *)(pbVar9 + 8);
        *(byte **)(param_1 + 8) = pbVar9 + 0xc;
LAB_1401ab7a0:
        *(ulonglong *)(param_1 + 0x38) = uVar8;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
  }
  return;
}

