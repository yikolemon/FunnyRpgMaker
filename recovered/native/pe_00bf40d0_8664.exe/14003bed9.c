/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003bed9 */

void FUN_14003bed9(longlong param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  int *piVar13;
  uint local_54;
  uint local_4c;
  
  iVar11 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar11) {
    uVar4 = 0x81;
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar11;
    uVar1 = *(ushort *)(param_1 + 0x18e);
    if (uVar1 < *(ushort *)(param_1 + 0x40)) {
      if (((*(short *)(param_1 + 0x192) == 0) || (*(short *)(param_1 + 0x194) == 0)) ||
         (*(short *)(param_1 + 0x196) == 0)) {
        piVar13 = (int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar1 * 8);
        piVar10 = (int *)((ulonglong)uVar1 * 8 + *(longlong *)(param_1 + 0x50));
        uVar1 = *(ushort *)(param_1 + 400);
        if (*(ushort *)(param_1 + 0x78) <= uVar1) {
          bVar3 = true;
          goto LAB_14003c031;
        }
        local_54 = (**(code **)(param_1 + 0x2e0))
                             (param_1,*(int *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar1 * 8)
                                      - *piVar13,
                              *(int *)(*(longlong *)(param_1 + 0x80) + 4 + (ulonglong)uVar1 * 8) -
                              piVar13[1]);
        bVar3 = true;
LAB_14003c0a1:
        local_4c = (**(code **)(param_1 + 0x2d8))
                             (param_1,*(int *)(*(longlong *)(param_1 + 0x88) +
                                              (ulonglong)*(ushort *)(param_1 + 400) * 8) - *piVar10,
                              *(int *)(*(longlong *)(param_1 + 0x88) + 4 +
                                      (ulonglong)*(ushort *)(param_1 + 400) * 8) - piVar10[1]);
      }
      else {
        piVar13 = (int *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar1 * 8);
        piVar10 = (int *)((ulonglong)uVar1 * 8 + *(longlong *)(param_1 + 0x50));
        uVar7 = (ulonglong)*(ushort *)(param_1 + 400);
        bVar3 = false;
        if (*(ushort *)(param_1 + 400) < *(ushort *)(param_1 + 0x78)) {
          if (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x164)) {
            uVar12 = (ulonglong)
                     (uint)(*(int *)(*(longlong *)(param_1 + 0x90) + 4 + uVar7 * 8) - piVar13[1]);
            uVar9 = (ulonglong)
                    (uint)(*(int *)(*(longlong *)(param_1 + 0x90) + uVar7 * 8) - *piVar13);
          }
          else {
            lVar8 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x90) + uVar7 * 8) - *piVar13) *
                    (longlong)*(int *)(param_1 + 0x160);
            uVar9 = (ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10;
            lVar8 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x90) + 4 + uVar7 * 8) - piVar13[1])
                    * (longlong)*(int *)(param_1 + 0x164);
            uVar12 = (ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10;
          }
          local_54 = (**(code **)(param_1 + 0x2e0))(param_1,uVar9,uVar12);
          bVar3 = false;
          goto LAB_14003c0a1;
        }
LAB_14003c031:
        local_4c = 0;
        local_54 = 0;
      }
      if (iVar11 != 0) {
        do {
          param_2 = param_2 + -1;
          uVar2 = *param_2;
          uVar7 = (ulonglong)uVar2;
          if (uVar2 < *(ushort *)(param_1 + 0xb0)) {
            if (bVar3) {
              lVar8 = *(longlong *)(param_1 + 0xb8);
LAB_14003c129:
              uVar12 = (ulonglong)(uint)(*(int *)(lVar8 + 4 + uVar7 * 8) - piVar13[1]);
              uVar9 = (ulonglong)(uint)(*(int *)(lVar8 + uVar7 * 8) - *piVar13);
            }
            else {
              if (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x164)) {
                lVar8 = *(longlong *)(param_1 + 200);
                goto LAB_14003c129;
              }
              lVar8 = (longlong)(*(int *)(*(longlong *)(param_1 + 200) + uVar7 * 8) - *piVar13) *
                      (longlong)*(int *)(param_1 + 0x160);
              uVar9 = (ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10;
              lVar8 = (longlong)
                      (*(int *)(*(longlong *)(param_1 + 200) + 4 + uVar7 * 8) - piVar13[1]) *
                      (longlong)*(int *)(param_1 + 0x164);
              uVar12 = (ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10;
            }
            uVar5 = (**(code **)(param_1 + 0x2e0))(param_1,uVar9,uVar12);
            iVar6 = (**(code **)(param_1 + 0x2d8))
                              (param_1,*(int *)(*(longlong *)(param_1 + 0xc0) + uVar7 * 8) -
                                       *piVar10,
                               *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar7 * 8) - piVar10[1])
            ;
            if ((uVar5 != 0) && (local_54 != 0)) {
              uVar5 = FUN_14001de7c(uVar5,local_4c,local_54);
            }
            (**(code **)(param_1 + 0x2f0))(param_1,(ushort *)(param_1 + 0xb0),uVar2,uVar5 - iVar6);
          }
          else if (*(char *)(param_1 + 0x2c6) != '\0') {
            *(undefined4 *)(param_1 + 0x20) = 0x86;
            return;
          }
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      goto LAB_14003bfb3;
    }
    uVar4 = 0x86;
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = uVar4;
  }
LAB_14003bfb3:
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  return;
}

