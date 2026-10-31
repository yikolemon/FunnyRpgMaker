/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140057ca7 */

void FUN_140057ca7(longlong *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  if (iVar2 != 0) {
    puVar7 = (undefined1 *)*param_1;
    iVar9 = *(int *)((longlong)param_1 + 0xc);
    bVar5 = true;
    uVar6 = 0x80;
    uVar8 = 0;
    bVar3 = false;
    uVar4 = 0;
    uVar11 = 0;
    do {
      uVar12 = uVar11;
      uVar10 = uVar6;
      if (!bVar3) {
        do {
          if (bVar5) {
            if (param_3 <= param_2) {
              bVar5 = true;
              uVar12 = uVar11;
              goto LAB_140057d21;
            }
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            uVar4 = bVar1 & 0xf;
            bVar5 = false;
            uVar12 = (uint)(bVar1 >> 4);
          }
          else {
            bVar5 = true;
            uVar12 = uVar4;
          }
          uVar11 = 0;
        } while (uVar12 == 0);
      }
      if (!bVar5) {
        uVar10 = 0;
      }
LAB_140057d21:
      uVar8 = uVar8 | uVar10;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        *puVar7 = (char)uVar8;
        puVar7 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
        iVar9 = *(int *)((longlong)param_1 + 0xc);
        *param_1 = (longlong)puVar7;
LAB_140057d46:
        uVar8 = 0;
        uVar6 = 0x80;
      }
      else {
        uVar6 = uVar6 >> 1;
        if (uVar6 == 0) {
          *puVar7 = (char)uVar8;
          puVar7 = puVar7 + 1;
          goto LAB_140057d46;
        }
      }
      uVar11 = uVar12 - 1;
      bVar3 = 1 < (int)uVar12;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (uVar6 != 0x80) {
      *puVar7 = (char)uVar8;
    }
  }
  return;
}

